void __fastcall QuestBehaviorMaster___ctor(QuestBehaviorMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4B16640 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string___ctor__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity_____ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____TypeInfo, v7, v8);
    byte_4B16640 = 1;
  }
  v9 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____TypeInfo,
                                                                  method,
                                                                  v2,
                                                                  v3);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v9,
    (const MethodInfo_3243654 *)Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity_____ctor__);
  this->fields.dictQuestPhaseCache = (struct System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____o *)v9;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.dictQuestPhaseCache,
    (int64_t)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    201,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string___ctor__);
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
        sub_1BCAA3C(IsNullOrEmpty, v8);
      if ( !behaviorValues->max_length )
        sub_1BCAA44(IsNullOrEmpty, v8);
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
        sub_1BCAA3C(IsNullOrEmpty, v8);
      if ( !behaviorValues->max_length )
        sub_1BCAA44(IsNullOrEmpty, v8);
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
  System_Int32_array *behaviorValues; // x19
  QuestBehaviorEntity_o *PriorityEntity; // x0
  __int64 v8; // x1
  long double inited; // q0
  _QWORD *v10; // x19
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0

  behaviorValues = defVals;
  if ( (byte_4B16644 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_int___, questPhaseUniqueId, defVals);
    byte_4B16644 = 1;
  }
  PriorityEntity = QuestBehaviorMaster__GetPriorityEntity(this, questPhaseUniqueId, 4, method);
  if ( PriorityEntity )
  {
    behaviorValues = PriorityEntity->fields.behaviorValues;
    if ( !behaviorValues )
    {
      v10 = Method_System_Array_Empty_int___;
      v11 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v11 )
      {
        sub_1C1C718(Method_System_Array_Empty_int___, v8);
        v11 = v10[7];
      }
      v12 = *(_QWORD *)(v11 + 16);
      if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
        v12 = sub_1C1C6BC(inited);
      if ( !*(_DWORD *)(v12 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v12, v8);
      v13 = *(_QWORD *)(v10[7] + 16LL);
      if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
        v13 = sub_1C1C6BC(inited);
      return **(System_Int32_array ***)(v13 + 184);
    }
  }
  return behaviorValues;
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

  if ( (byte_4B1663E & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__GetEntity__,
      *(_QWORD *)&questId,
      *(_QWORD *)&phase);
    byte_4B1663E = 1;
  }
  PK = (Il2CppObject *)QuestBehaviorEntity__CreatePK(questId, phase, num, priority, *(const MethodInfo **)&priority);
  return (QuestBehaviorEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_31B3198 *)Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
QuestBehaviorEntity_o *__fastcall QuestBehaviorMaster__GetPriorityEntity(
        QuestBehaviorMaster_o *this,
        int64_t questPhaseUniqueId,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x22
  System_Collections_Generic_Dictionary_TKey__TValue__o *dictQuestPhaseCache; // x0
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  Il2CppObject *v21; // x19
  System_Func_object__bool__o *v22; // x20
  Il2CppObject *value; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B16645 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____TryGetValue__,
      questPhaseUniqueId,
      *(_QWORD *)&kind);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_QuestBehaviorEntity___, v7, v8);
    sub_1BCA7E0(&System_Func_QuestBehaviorEntity__bool__TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_QuestBehaviorMaster___c__DisplayClass10_0__GetPriorityEntity_b__0__, v11, v12);
    sub_1BCA7E0(&QuestBehaviorMaster___c__DisplayClass10_0_TypeInfo, v13, v14);
    byte_4B16645 = 1;
  }
  value = 0LL;
  v15 = sub_1BCAA2C(QuestBehaviorMaster___c__DisplayClass10_0_TypeInfo, questPhaseUniqueId, *(_QWORD *)&kind, method);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15
    || (*(_DWORD *)(v15 + 16) = kind,
        (dictQuestPhaseCache = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dictQuestPhaseCache) == 0LL) )
  {
    sub_1BCAA3C(dictQuestPhaseCache, v17);
  }
  if ( !System_Collections_Generic_Dictionary_long__object___TryGetValue(
          dictQuestPhaseCache,
          questPhaseUniqueId,
          &value,
          (const MethodInfo_324579C *)Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____TryGetValue__) )
    return 0LL;
  v21 = value;
  v22 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_QuestBehaviorEntity__bool__TypeInfo, v18, v19, v20);
  System_Func_object__bool____ctor(
    v22,
    (Il2CppObject *)v15,
    Method_QuestBehaviorMaster___c__DisplayClass10_0__GetPriorityEntity_b__0__,
    0LL);
  return (QuestBehaviorEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                                    (System_Collections_Generic_IEnumerable_TSource__o *)v21,
                                    (System_Func_TSource__bool__o *)v22,
                                    (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestBehaviorEntity___);
}


void __fastcall QuestBehaviorMaster__InitQuestPhaseCache(QuestBehaviorMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *dictQuestPhaseCache; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v42; // x20
  System_Collections_Generic_Dictionary_TKey__TValue__c *klass; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *v44; // x21
  __int64 v45; // x9
  int32_t *p_offset; // x10
  __int64 v47; // x0
  __int64 v48; // x1
  __int64 v49; // x21
  __int64 v50; // x8
  __int64 v51; // x9
  int *v52; // x10
  __int64 v53; // x0
  __int64 v54; // x8
  __int64 v55; // x9
  int *v56; // x10
  __int64 v57; // x0
  QuestBehaviorEntity_o *v58; // x0
  const MethodInfo *v59; // x1
  Il2CppObject *v60; // x22
  int64_t UniqueId; // x0
  __int64 v62; // x1
  int64_t v63; // x23
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  System_Collections_Generic_List_object__o *v67; // x24
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v69; // x1
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  struct System_Object_array *items; // x8
  _QWORD *v77; // x9
  __int64 size; // x10
  Il2CppClass **v79; // x8
  __int64 v80; // x8
  __int64 v81; // x9
  int *v82; // x10
  __int64 v83; // x0
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x3
  System_Action_T__o *v87; // x21
  Il2CppObject *v88; // [xsp+8h] [xbp-68h]

  if ( (byte_4B16647 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_KeyValuePair_long__List_QuestBehaviorEntity____TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_KeyValuePair_long__List_QuestBehaviorEntity_____, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____Clear__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___Clear__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___ContainsKey__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity____ctor__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___get_Item__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___set_Item__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OfType_QuestBehaviorEntity___, v20, v21);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v22, v23);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_QuestBehaviorEntity__TypeInfo, v24, v25);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_QuestBehaviorEntity__TypeInfo, v26, v27);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestBehaviorEntity__Add__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestBehaviorEntity___ctor__, v32, v33);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestBehaviorEntity__TypeInfo, v34, v35);
    sub_1BCA7E0(&Method_QuestBehaviorMaster__InitQuestPhaseCache_b__13_0__, v36, v37);
    byte_4B16647 = 1;
  }
  dictQuestPhaseCache = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dictQuestPhaseCache;
  if ( !dictQuestPhaseCache )
    goto LABEL_46;
  System_Collections_Generic_Dictionary_long__object___Clear(
    dictQuestPhaseCache,
    (const MethodInfo_32441AC *)Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____Clear__);
  v42 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                   System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___TypeInfo,
                                                                   v39,
                                                                   v40,
                                                                   v41);
  System_Collections_Generic_Dictionary_long__object____ctor(
    v42,
    (const MethodInfo_3243654 *)Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity____ctor__);
  dictQuestPhaseCache = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__OfType_object_(
                                                                                   (System_Collections_IEnumerable_o *)this->fields.list,
                                                                                   (const MethodInfo_2F3AEF4 *)Method_System_Linq_Enumerable_OfType_QuestBehaviorEntity___);
  if ( !dictQuestPhaseCache )
    goto LABEL_46;
  klass = dictQuestPhaseCache->klass;
  v44 = dictQuestPhaseCache;
  v45 = *(unsigned __int16 *)(&dictQuestPhaseCache->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&dictQuestPhaseCache->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_QuestBehaviorEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_QuestBehaviorEntity__TypeInfo )
    {
      --v45;
      p_offset += 4;
      if ( !v45 )
        goto LABEL_9;
    }
    v47 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v47 = sub_1C1C7C0(dictQuestPhaseCache, System_Collections_Generic_IEnumerable_QuestBehaviorEntity__TypeInfo, 0LL);
  }
  v88 = (Il2CppObject *)this;
  v49 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_TKey__TValue__o *, _QWORD))v47)(
          v44,
          *(_QWORD *)(v47 + 8));
  if ( !v49 )
    sub_1BCAA3C(0LL, v48);
  while ( 1 )
  {
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
          goto LABEL_16;
      }
      v53 = v50 + 16LL * *v52 + 312;
    }
    else
    {
LABEL_16:
      v53 = sub_1C1C7C0(v49, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v53)(v49, *(_QWORD *)(v53 + 8)) & 1) == 0 )
      break;
    v54 = *(_QWORD *)v49;
    v55 = *(unsigned __int16 *)(*(_QWORD *)v49 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v49 + 302LL) )
    {
      v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_QuestBehaviorEntity__c **)v56 - 1) != System_Collections_Generic_IEnumerator_QuestBehaviorEntity__TypeInfo )
      {
        --v55;
        v56 += 4;
        if ( !v55 )
          goto LABEL_23;
      }
      v57 = v54 + 16LL * *v56 + 312;
    }
    else
    {
LABEL_23:
      v57 = sub_1C1C7C0(v49, System_Collections_Generic_IEnumerator_QuestBehaviorEntity__TypeInfo, 0LL);
    }
    v58 = (QuestBehaviorEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v57)(v49, *(_QWORD *)(v57 + 8));
    v60 = (Il2CppObject *)v58;
    if ( !v58 )
      sub_1BCAA3C(0LL, v59);
    UniqueId = QuestBehaviorEntity__GetUniqueId(v58, v59);
    if ( !v42 )
      sub_1BCAA3C(UniqueId, v62);
    v63 = UniqueId;
    if ( !System_Collections_Generic_Dictionary_long__object___ContainsKey(
            v42,
            UniqueId,
            (const MethodInfo_3244218 *)Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___ContainsKey__) )
    {
      v67 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                           System_Collections_Generic_List_QuestBehaviorEntity__TypeInfo,
                                                           v64,
                                                           v65,
                                                           v66);
      System_Collections_Generic_List_object____ctor(
        v67,
        (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestBehaviorEntity___ctor__);
      System_Collections_Generic_Dictionary_long__object___set_Item(
        v42,
        v63,
        (Il2CppObject *)v67,
        (const MethodInfo_3244010 *)Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___set_Item__);
    }
    Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_long__object___get_Item(
                                                          v42,
                                                          v63,
                                                          (const MethodInfo_3243F84 *)Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___get_Item__);
    if ( !Item )
      sub_1BCAA3C(0LL, v69);
    items = Item->fields._items;
    v77 = Method_System_Collections_Generic_List_QuestBehaviorEntity__Add__;
    ++Item->fields._version;
    if ( !items )
      sub_1BCAA3C(Item, v69);
    size = Item->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        Item,
        v60,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
    }
    else
    {
      v79 = &items->obj.klass + size;
      Item->fields._size = size + 1;
      v79[4] = (Il2CppClass *)v60;
      sub_1BCA784((PartyOrganizationUtility_o *)(v79 + 4), (int64_t)v60, v70, v71, v72, v73, v74, v75);
    }
  }
  v80 = *(_QWORD *)v49;
  v81 = *(unsigned __int16 *)(*(_QWORD *)v49 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v49 + 302LL) )
  {
    v82 = (int *)(*(_QWORD *)(v80 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v82 - 1) != System_IDisposable_TypeInfo )
    {
      --v81;
      v82 += 4;
      if ( !v81 )
        goto LABEL_38;
    }
    v83 = v80 + 16LL * *v82 + 312;
  }
  else
  {
LABEL_38:
    v83 = sub_1C1C7C0(v49, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v83)(v49, *(_QWORD *)(v83 + 8));
  v87 = (System_Action_T__o *)sub_1BCAA2C(
                                System_Action_KeyValuePair_long__List_QuestBehaviorEntity____TypeInfo,
                                v84,
                                v85,
                                v86);
  System_Action_KeyValuePair_long__object_____ctor(
    v87,
    v88,
    Method_QuestBehaviorMaster__InitQuestPhaseCache_b__13_0__,
    0LL);
  BasicHelper__ForEach_KeyValuePair_long__object__(
    (System_Collections_Generic_IEnumerable_T__o *)v42,
    v87,
    (const MethodInfo_2EFED54 *)Method_BasicHelper_ForEach_KeyValuePair_long__List_QuestBehaviorEntity_____);
  if ( !v42 )
LABEL_46:
    sub_1BCAA3C(dictQuestPhaseCache, method);
  System_Collections_Generic_Dictionary_long__object___Clear(
    v42,
    (const MethodInfo_32441AC *)Method_System_Collections_Generic_Dictionary_long__List_QuestBehaviorEntity___Clear__);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v14; // w23
  __int64 methodPtr_low; // x9
  QuestBehaviorMaster_o *v17; // x0
  const MethodInfo *v18; // x1

  v7 = questId;
  if ( (byte_4B16646 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&questId,
      *(_QWORD *)&phase);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v9, v10);
    sub_1BCA7E0(&QuestBehaviorEntity_TypeInfo, v11, v12);
    byte_4B16646 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_16:
    sub_1BCAA3C(list, *(_QWORD *)&questId);
  v14 = System_Collections_ObjectModel_Collection_object___get_Count(
          list,
          (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__)
      - 1;
  if ( v14 < 0 )
    return 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_16;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v14,
                                                               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
    if ( --v14 < 0 )
      return 0;
  }
  sub_1BCACFC(list);
  return QuestBehaviorMaster__preProcess(v17, v18);
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

  if ( (byte_4B1663F & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&questId);
    byte_4B1663F = 1;
  }
  PK = (Il2CppObject *)QuestBehaviorEntity__CreatePK(questId, phase, num, priority, *(const MethodInfo **)&num);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_QuestBehaviorMaster__QuestBehaviorEntity__string__TryGetEntity__);
}


void __fastcall QuestBehaviorMaster___InitQuestPhaseCache_b__13_0(
        QuestBehaviorMaster_o *this,
        System_Collections_Generic_KeyValuePair_long__List_QuestBehaviorEntity___o pair,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *value; // x20
  int64_t key; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  QuestBehaviorMaster___c_c *v20; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *dictQuestPhaseCache; // x21
  System_Func_object__int__o *_9__13_1; // x22
  Il2CppObject *v23; // x23
  struct QuestBehaviorMaster___c_StaticFields *static_fields; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  System_Object_array *v32; // x0
  __int64 v33; // x1

  value = (System_Collections_Generic_IEnumerable_TSource__o *)pair.fields.value;
  key = pair.fields.key;
  if ( (byte_4B16648 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____set_Item__,
      pair.fields.key,
      pair.fields.value);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderByDescending_QuestBehaviorEntity__int___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_QuestBehaviorEntity___, v8, v9);
    sub_1BCA7E0(&System_Func_QuestBehaviorEntity__int__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_long__List_QuestBehaviorEntity___get_Key__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_long__List_QuestBehaviorEntity___get_Value__, v14, v15);
    sub_1BCA7E0(&Method_QuestBehaviorMaster___c__InitQuestPhaseCache_b__13_1__, v16, v17);
    sub_1BCA7E0(&QuestBehaviorMaster___c_TypeInfo, v18, v19);
    byte_4B16648 = 1;
  }
  v20 = QuestBehaviorMaster___c_TypeInfo;
  dictQuestPhaseCache = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dictQuestPhaseCache;
  if ( !QuestBehaviorMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestBehaviorMaster___c_TypeInfo, pair.fields.key);
    v20 = QuestBehaviorMaster___c_TypeInfo;
  }
  _9__13_1 = (System_Func_object__int__o *)v20->static_fields->__9__13_1;
  if ( !_9__13_1 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20, pair.fields.key);
      v20 = QuestBehaviorMaster___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__13_1 = (System_Func_object__int__o *)sub_1BCAA2C(
                                               System_Func_QuestBehaviorEntity__int__TypeInfo,
                                               pair.fields.key,
                                               pair.fields.value,
                                               method);
    System_Func_object__int____ctor(_9__13_1, v23, Method_QuestBehaviorMaster___c__InitQuestPhaseCache_b__13_1__, 0LL);
    static_fields = QuestBehaviorMaster___c_TypeInfo->static_fields;
    static_fields->__9__13_1 = (struct System_Func_QuestBehaviorEntity__int__o *)_9__13_1;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__13_1,
      (int64_t)_9__13_1,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
  }
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               value,
                                                               (System_Func_TSource__TKey__o *)_9__13_1,
                                                               (const MethodInfo_2F3B8C4 *)Method_System_Linq_Enumerable_OrderByDescending_QuestBehaviorEntity__int___);
  v32 = System_Linq_Enumerable__ToArray_object_(
          v31,
          (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_QuestBehaviorEntity___);
  if ( !dictQuestPhaseCache )
    sub_1BCAA3C(v32, v33);
  System_Collections_Generic_Dictionary_long__object___set_Item(
    dictQuestPhaseCache,
    key,
    &v32->obj,
    (const MethodInfo_3244010 *)Method_System_Collections_Generic_Dictionary_long__QuestBehaviorEntity____set_Item__);
}


// local variable allocation has failed, the output may be wrong!
QuestBehaviorEntity_array *__fastcall QuestBehaviorMaster__getBattleSkill(
        QuestBehaviorMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_Dictionary_int__object__o *v29; // x22
  QuestBehaviorEntity_c *v30; // x1
  void *list; // x0
  int32_t v32; // w23
  QuestBehaviorEntity_o *v33; // x24
  __int64 methodPtr_low; // x9
  int32_t priority; // w29
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  QuestBehaviorMaster_o *v38; // x0
  int32_t v39; // w1
  int32_t v40; // w2
  const MethodInfo *v41; // x3

  if ( (byte_4B16642 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&questId,
      *(_QWORD *)&phase);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__ContainsKey__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Remove__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity___ctor__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Count__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Item__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Values__, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_QuestBehaviorEntity___, v25, v26);
    sub_1BCA7E0(&QuestBehaviorEntity_TypeInfo, v27, v28);
    byte_4B16642 = 1;
  }
  v29 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__TypeInfo,
                                                                  *(_QWORD *)&questId,
                                                                  *(_QWORD *)&phase,
                                                                  method);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v29,
    (const MethodInfo_3205510 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_23;
  list = (void *)System_Collections_ObjectModel_Collection_object___get_Count(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
  v32 = (_DWORD)list - 1;
  if ( (int)list - 1 < 0 )
  {
LABEL_19:
    if ( v29 )
    {
      if ( !System_Collections_Generic_Dictionary_int__object___get_Count(
              v29,
              (const MethodInfo_3205B94 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Count__) )
        return 0LL;
      Values = System_Collections_Generic_Dictionary_int__object___get_Values(
                 v29,
                 (const MethodInfo_3205CF4 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Values__);
      return (QuestBehaviorEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)Values,
                                            (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_QuestBehaviorEntity___);
    }
LABEL_23:
    sub_1BCAA3C(list, v30);
  }
  while ( 1 )
  {
    list = this->fields.list;
    if ( !list )
      goto LABEL_23;
    list = System_Collections_ObjectModel_Collection_object___get_Item(
             (System_Collections_ObjectModel_Collection_T__o *)list,
             v32,
             (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    if ( !list )
      goto LABEL_23;
    v30 = QuestBehaviorEntity_TypeInfo;
    v33 = (QuestBehaviorEntity_o *)list;
    methodPtr_low = LOBYTE(QuestBehaviorEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)list + 304LL) < (unsigned int)methodPtr_low
      || *(QuestBehaviorEntity_c **)(*(_QWORD *)(*(_QWORD *)list + 200LL) + 8 * methodPtr_low - 8) != QuestBehaviorEntity_TypeInfo )
    {
      break;
    }
    if ( *((_DWORD *)list + 4) == questId && *((_DWORD *)list + 5) == phase && *((_DWORD *)list + 8) == 1 )
    {
      if ( !v29 )
        goto LABEL_23;
      if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
              v29,
              *((_DWORD *)list + 6),
              (const MethodInfo_32060D8 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__ContainsKey__) )
        goto LABEL_16;
      priority = v33->fields.priority;
      list = System_Collections_Generic_Dictionary_int__object___get_Item(
               v29,
               v33->fields.num,
               (const MethodInfo_3205E44 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__get_Item__);
      if ( !list )
        goto LABEL_23;
      if ( priority >= *((_DWORD *)list + 7) )
      {
LABEL_16:
        list = (void *)QuestBehaviorEntity__checkConditions(v33, (const MethodInfo *)v30);
        if ( ((unsigned __int8)list & 1) != 0 )
        {
          System_Collections_Generic_Dictionary_int__object___Remove(
            v29,
            v33->fields.num,
            (const MethodInfo_320736C *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Remove__);
          System_Collections_Generic_Dictionary_int__object___Add(
            v29,
            v33->fields.num,
            (Il2CppObject *)v33,
            (const MethodInfo_3205EE4 *)Method_System_Collections_Generic_Dictionary_int__QuestBehaviorEntity__Add__);
        }
      }
    }
    if ( --v32 < 0 )
      goto LABEL_19;
  }
  sub_1BCACFC(list);
  return (QuestBehaviorEntity_array *)QuestBehaviorMaster__getEnableContinue(v38, v39, v40, v41);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t v12; // w22
  __int64 methodPtr_low; // x9
  QuestBehaviorMaster_o *v15; // x0
  int64_t v16; // x1
  System_Int32_array *v17; // x2
  const MethodInfo *v18; // x3

  v5 = questId;
  if ( (byte_4B16643 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__,
      *(_QWORD *)&questId,
      *(_QWORD *)&phase);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v7, v8);
    sub_1BCA7E0(&QuestBehaviorEntity_TypeInfo, v9, v10);
    byte_4B16643 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
LABEL_17:
    sub_1BCAA3C(list, *(_QWORD *)&questId);
  v12 = System_Collections_ObjectModel_Collection_object___get_Count(
          list,
          (const MethodInfo_314F410 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__)
      - 1;
  if ( v12 < 0 )
    return 0;
  while ( 1 )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_17;
    list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_ObjectModel_Collection_object___get_Item(
                                                               list,
                                                               v12,
                                                               (const MethodInfo_314F4A0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
    if ( --v12 < 0 )
      return 0;
  }
  sub_1BCACFC(list);
  return (unsigned __int8)QuestBehaviorMaster__GetBattleIndividuality(v15, v16, v17, v18);
}


DataEntityBase_array *__fastcall QuestBehaviorMaster__getList(
        QuestBehaviorMaster_o *this,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2

  if ( (byte_4B16641 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_JsonManager_DeserializeArray_QuestBehaviorEntity___, obj, method);
    sub_1BCA7E0(&JsonManager_TypeInfo, v4, v5);
    byte_4B16641 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, obj);
  return (DataEntityBase_array *)JsonManager__DeserializeArray_object_(
                                   obj,
                                   (const MethodInfo_2F79784 *)Method_JsonManager_DeserializeArray_QuestBehaviorEntity___);
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B16649 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestBehaviorMaster___c_TypeInfo, v1, v2);
    byte_4B16649 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(QuestBehaviorMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  QuestBehaviorMaster___c_TypeInfo->static_fields->__9 = (struct QuestBehaviorMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)QuestBehaviorMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  return x->fields.behaviorType == this->fields.kind && QuestBehaviorEntity__checkConditions(x, (const MethodInfo *)x);
}