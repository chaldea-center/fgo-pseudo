void QuestPhaseMaster___ctor(QuestPhaseMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D3110F & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity____ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TypeInfo);
    byte_4D3110F = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_34BC3B0 *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity____ctor__);
  this->fields.cachedQuestPahseEntityDict = (struct System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___o *)v3;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.cachedQuestPahseEntityDict,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    75,
    (const MethodInfo_3465C5C *)Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string___ctor__);
}


void QuestPhaseMaster__Clear(QuestPhaseMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___o *cachedQuestPahseEntityDict; // x0

  if ( (byte_4D31110 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___Clear__);
    byte_4D31110 = 1;
  }
  DataMasterBase_object__object__object___Clear(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    (const MethodInfo_3466B8C *)Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__Clear__);
  cachedQuestPahseEntityDict = this->fields.cachedQuestPahseEntityDict;
  if ( !cachedQuestPahseEntityDict )
    sub_1C93D2C(0, v3);
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)cachedQuestPahseEntityDict,
    (const MethodInfo_34BCF0C *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___Clear__);
  this->fields.isCached = 0;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *QuestPhaseMaster__GetBranchQuestIds(
        QuestPhaseMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  QuestPhaseEntity_o *v18; // x0
  const MethodInfo *v19; // x1
  System_Collections_Generic_IEnumerable_TSource__o *SelectableQuests; // x0
  System_Int32_array *v21; // x22
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0

  if ( (byte_4D31114 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_QuestPhaseEntity__GetEnumerator__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    byte_4D31114 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C93D2C(0, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33FC384 *)Method_System_Collections_ObjectModel_Collection_QuestPhaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C93D2C(0, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v13 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8))
        & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestPhaseEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16];
    }
    else
    {
LABEL_16:
      v17 = sub_1C69E5C(Enumerator, System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo, 0);
    }
    v18 = (QuestPhaseEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                                  Enumerator,
                                  *(_QWORD *)(v17 + 8));
    if ( !v18 )
      sub_1C93D2C(0, v19);
    if ( v18->fields.phase == phase )
    {
      SelectableQuests = (System_Collections_Generic_IEnumerable_TSource__o *)QuestPhaseEntity__GetSelectableQuests(
                                                                                v18,
                                                                                v19);
      v21 = (System_Int32_array *)SelectableQuests;
      if ( SelectableQuests )
      {
        if ( System_Linq_Enumerable__Contains_int_(
               SelectableQuests,
               questId,
               (const MethodInfo_31C106C *)Method_System_Linq_Enumerable_Contains_int___) )
        {
          goto LABEL_24;
        }
      }
    }
  }
  v21 = 0;
LABEL_24:
  v22 = Enumerator->klass;
  v23 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v24 = &v22->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
    {
      --v23;
      v24 += 4;
      if ( !v23 )
        goto LABEL_28;
    }
    v25 = (__int64)&v22->vtable[*v24];
  }
  else
  {
LABEL_28:
    v25 = sub_1C69E5C(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(Enumerator, *(_QWORD *)(v25 + 8));
  return v21;
}


// local variable allocation has failed, the output may be wrong!
QuestPhaseEntity_o *QuestPhaseMaster__GetEntity(
        QuestPhaseMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4D3110D & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__GetEntity__);
    byte_4D3110D = 1;
  }
  PK = (Il2CppObject *)QuestPhaseEntity__CreatePK(questId, phase, *(const MethodInfo **)&phase);
  return (QuestPhaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_34681D4 *)Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__GetEntity__);
}


System_Int32_array *QuestPhaseMaster__GetIndividualityList(
        QuestPhaseMaster_o *this,
        System_Int32_array *questIdArray,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_HashSet_int__o *v6; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Collections_Generic_List_int__o *v15; // x19
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  System_Func_object__bool__o *v17; // x23
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x20
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x20
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  QuestPhaseEntity_o *v39; // x0
  const MethodInfo *v40; // x1
  System_Int32_array *PrioredIndividuality; // x0
  __int64 v42; // x1
  System_Int32_array *v43; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v45; // x28
  int32_t v46; // w22
  struct System_Int32_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  __int64 v50; // x8
  __int64 v51; // x9
  int *v52; // x10
  __int64 v53; // x0

  if ( (byte_4D31112 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_QuestPhaseEntity___);
    sub_1C93AD4(&System_Func_QuestPhaseEntity__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int___ctor___78987192);
    sub_1C93AD4(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerable_QuestPhaseEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&Method_QuestPhaseMaster___c__DisplayClass7_0__GetIndividualityList_b__0__);
    sub_1C93AD4(&QuestPhaseMaster___c__DisplayClass7_0_TypeInfo);
    byte_4D31112 = 1;
  }
  v5 = sub_1C93D20(QuestPhaseMaster___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  v6 = (System_Collections_Generic_HashSet_int__o *)sub_1C93D20(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_57824408(
    v6,
    (System_Collections_Generic_IEnumerable_T__o *)questIdArray,
    (const MethodInfo_3725498 *)Method_System_Collections_Generic_HashSet_int___ctor___78987192);
  if ( !v5 )
    goto LABEL_53;
  *(_QWORD *)(v5 + 16) = v6;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)v6, v9, v10, v11, v12, v13, v14);
  v15 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  v17 = *(System_Func_object__bool__o **)(v5 + 24);
  if ( !v17 )
  {
    v17 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_QuestPhaseEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v17,
      (Il2CppObject *)v5,
      Method_QuestPhaseMaster___c__DisplayClass7_0__GetIndividualityList_b__0__,
      0);
    *(_QWORD *)(v5 + 24) = v17;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)v17, v18, v19, v20, v21, v22, v23);
  }
  v7 = System_Linq_Enumerable__Where_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)list,
         (System_Func_TSource__bool__o *)v17,
         (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_QuestPhaseEntity___);
  if ( !v7 )
    goto LABEL_53;
  klass = v7->klass;
  v25 = v7;
  v26 = *(unsigned __int16 *)&v7->klass->_2.rank;
  if ( *(_WORD *)&v7->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_QuestPhaseEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_QuestPhaseEntity__TypeInfo )
    {
      --v26;
      p_offset += 4;
      if ( !v26 )
        goto LABEL_11;
    }
    v28 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_11:
    v28 = sub_1C69E5C(v7, System_Collections_Generic_IEnumerable_QuestPhaseEntity__TypeInfo, 0);
  }
  v30 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v28)(
          v25,
          *(_QWORD *)(v28 + 8));
  if ( !v30 )
    sub_1C93D2C(0, v29);
  while ( 1 )
  {
    v31 = *(_QWORD *)v30;
    v32 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
    {
      v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v33 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_18;
      }
      v34 = v31 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_18:
      v34 = sub_1C69E5C(v30, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v30, *(_QWORD *)(v34 + 8)) & 1) == 0 )
      break;
    v35 = *(_QWORD *)v30;
    v36 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
    {
      v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_QuestPhaseEntity__c **)v37 - 1) != System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_25;
      }
      v38 = v35 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_25:
      v38 = sub_1C69E5C(v30, System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo, 0);
    }
    v39 = (QuestPhaseEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v30, *(_QWORD *)(v38 + 8));
    if ( !v39 )
      sub_1C93D2C(0, v40);
    PrioredIndividuality = QuestPhaseEntity__GetPrioredIndividuality(v39, v40);
    v43 = PrioredIndividuality;
    if ( !PrioredIndividuality )
      sub_1C93D2C(0, v42);
    max_length = PrioredIndividuality->max_length;
    if ( (int)max_length >= 1 )
    {
      v45 = 0;
      do
      {
        if ( v45 >= (unsigned int)max_length )
          sub_1C93D34(PrioredIndividuality);
        if ( !v15 )
          sub_1C93D2C(PrioredIndividuality, v42);
        v46 = v43->m_Items[v45];
        PrioredIndividuality = (System_Int32_array *)System_Collections_Generic_List_int___Contains(
                                                       v15,
                                                       v46,
                                                       (const MethodInfo_385CCF0 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)PrioredIndividuality & 1) == 0 )
        {
          items = v15->fields._items;
          v48 = Method_System_Collections_Generic_List_int__Add__;
          ++v15->fields._version;
          if ( !items )
            sub_1C93D2C(PrioredIndividuality, v42);
          size = v15->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v15,
              v46,
              *(const MethodInfo_385C978 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
          }
          else
          {
            v15->fields._size = size + 1;
            items->m_Items[size] = v46;
          }
        }
        LODWORD(max_length) = v43->max_length;
        ++v45;
      }
      while ( (__int64)v45 < (int)max_length );
    }
  }
  v50 = *(_QWORD *)v30;
  v51 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
  {
    v52 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
    {
      --v51;
      v52 += 4;
      if ( !v51 )
        goto LABEL_44;
    }
    v53 = v50 + 16LL * *v52 + 312;
  }
  else
  {
LABEL_44:
    v53 = sub_1C69E5C(v30, System_IDisposable_TypeInfo, 0);
  }
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v53)(
                                                              v30,
                                                              *(_QWORD *)(v53 + 8));
  if ( !v15 )
LABEL_53:
    sub_1C93D2C(v7, v8);
  return System_Collections_Generic_List_int___ToArray(
           v15,
           (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_String_o *QuestPhaseMaster__GetMapModelEntryAnimationName(
        QuestPhaseMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  const MethodInfo *v8; // x1
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D31117 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D31117 = 1;
  }
  entity = 0;
  if ( questId < 1 || !QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, v4) )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !entity )
    sub_1C93D2C(0, v8);
  return QuestPhaseEntity__GetMapModelEntryAnimationName(entity, v8);
}


System_String_o *QuestPhaseMaster__GetMovieFolder(
        QuestPhaseMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t gender,
        const MethodInfo *method)
{
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  bool v8; // w8
  System_String_o *result; // x0
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  entity = 0;
  v8 = QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, method);
  result = 0;
  if ( v8 )
  {
    if ( !entity )
      sub_1C93D2C(0, v6);
    return QuestPhaseEntity__GetMovieFolder(entity, gender, v7);
  }
  return result;
}


int32_t QuestPhaseMaster__GetMoviePlayType(
        QuestPhaseMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  const MethodInfo *v5; // x1
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0;
  if ( !QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, v4) )
    return 0;
  if ( !entity )
    sub_1C93D2C(0, v5);
  return QuestPhaseEntity__GetMoviePlayType(entity, v5);
}


SpecifiedSceneInfo_o *QuestPhaseMaster__GetSpecifiedSceneInfo(
        QuestPhaseMaster_o *this,
        int32_t eventId,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  bool v9; // w0
  __int64 v10; // x20
  QuestPhaseEntity_o *v11; // x0
  const MethodInfo *v12; // x1
  System_String_array *NextSceneParam; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D31113 & 1) == 0 )
  {
    sub_1C93AD4(&SpecifiedSceneInfo_TypeInfo);
    byte_4D31113 = 1;
  }
  entity = 0;
  v9 = QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, method);
  v10 = 0;
  if ( v9 )
  {
    v10 = sub_1C93D20(SpecifiedSceneInfo_TypeInfo);
    SpecifiedSceneInfo___ctor((SpecifiedSceneInfo_o *)v10, 0);
    if ( !v10
      || (*(_DWORD *)(v10 + 16) = eventId, (v11 = entity) == 0)
      || (*(_DWORD *)(v10 + 20) = QuestPhaseEntity__GetNextSceneId(entity, v12), (v11 = entity) == 0) )
    {
      sub_1C93D2C(v11, v12);
    }
    NextSceneParam = QuestPhaseEntity__GetNextSceneParam(entity, v12);
    *(_QWORD *)(v10 + 24) = NextSceneParam;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v10 + 24), (int32_t)NextSceneParam, v14, v15, v16, v17, v18, v19);
  }
  return (SpecifiedSceneInfo_o *)v10;
}


bool QuestPhaseMaster__IsAreaImproveQuest(QuestPhaseMaster_o *this, int32_t questId, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  QuestPhaseEntity_o *Entity; // x0
  const MethodInfo *v5; // x1

  Entity = QuestPhaseMaster__GetEntity(this, questId, 1, v3);
  if ( Entity )
    LOBYTE(Entity) = QuestPhaseEntity__IsAreaImporveQuest(Entity, v5);
  return (char)Entity;
}


bool QuestPhaseMaster__IsEnableMaterialPlayUseUserQuestRoute(
        QuestPhaseMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D31116 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_21749/*"materialPlayUseUserQuestRoute"*/);
    byte_4D31116 = 1;
  }
  entity = 0;
  if ( !QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, v4) )
    return 0;
  if ( !entity )
    sub_1C93D2C(0, v8);
  return QuestPhaseEntity__getScriptIntParam(entity, (System_String_o *)StringLiteral_21749/*"materialPlayUseUserQuestRoute"*/, 0, v9) == 1;
}


bool QuestPhaseMaster__IsHaveOverwriteEndScript(QuestPhaseMaster_o *this, int32_t questId, const MethodInfo *method)
{
  QuestPhaseEntity_array *List; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  int max_length; // w8
  QuestPhaseEntity_array *v9; // x19
  bool v10; // w20
  int v11; // w21

  if ( (byte_4D31115 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_22821/*"overwriteEndScript"*/);
    byte_4D31115 = 1;
  }
  List = QuestPhaseMaster__getList(this, questId, method);
  if ( !List )
    goto LABEL_12;
  max_length = List->max_length;
  v9 = List;
  v10 = max_length > 0;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)max_length )
        sub_1C93D34(List);
      List = (QuestPhaseEntity_array *)v9->m_Items[v11];
      if ( !List )
        break;
      List = (QuestPhaseEntity_array *)QuestPhaseEntity__getScriptObj(
                                         (QuestPhaseEntity_o *)List,
                                         (System_String_o *)StringLiteral_22821/*"overwriteEndScript"*/,
                                         v7);
      if ( !List )
      {
        max_length = v9->max_length;
        v10 = ++v11 < max_length;
        if ( v11 < max_length )
          continue;
      }
      return v10;
    }
LABEL_12:
    sub_1C93D2C(List, v6);
  }
  return v10;
}


bool QuestPhaseMaster__IsInvisibleConnectAndLoad(
        QuestPhaseMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  QuestPhaseEntity_o *Entity; // x0
  const MethodInfo *v5; // x1

  Entity = QuestPhaseMaster__GetEntity(this, questId, phase, method);
  if ( Entity )
    LOBYTE(Entity) = QuestPhaseEntity__IsInvisibleConnectAndLoad(Entity, v5);
  return (char)Entity;
}


// local variable allocation has failed, the output may be wrong!
bool QuestPhaseMaster__IsMoviePhase(
        QuestPhaseMaster_o *this,
        int32_t questId,
        int32_t phase,
        int32_t gender,
        const MethodInfo *method)
{
  QuestPhaseEntity_o *Entity; // x0
  const MethodInfo *v7; // x2

  Entity = QuestPhaseMaster__GetEntity(this, questId, phase, *(const MethodInfo **)&gender);
  if ( Entity )
    LOBYTE(Entity) = QuestPhaseEntity__IsMoviePhase(Entity, gender, v7);
  return (char)Entity;
}


// local variable allocation has failed, the output may be wrong!
bool QuestPhaseMaster__TryGetEntity(
        QuestPhaseMaster_o *this,
        QuestPhaseEntity_o **entity,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4D3110E & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__TryGetEntity__);
    byte_4D3110E = 1;
  }
  PK = (Il2CppObject *)QuestPhaseEntity__CreatePK(questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3468220 *)Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
QuestPhaseEntity_array *QuestPhaseMaster__getList(QuestPhaseMaster_o *this, int32_t iQuestID, const MethodInfo *method)
{
  int32_t v3; // w22
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v7; // w21
  int32_t v8; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v10; // x23
  int32_t klass; // w24
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Collections_Generic_List_object__o *v18; // x25
  Il2CppClass *v19; // x8
  _QWORD *v20; // x9
  __int64 klass_low; // x10
  void **v22; // x8
  System_Collections_Generic_List_object__o *v23; // x21
  int32_t v25; // [xsp+Ch] [xbp-74h]
  Il2CppObject *v26; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *value; // [xsp+18h] [xbp-68h] BYREF

  v3 = iQuestID;
  if ( (byte_4D31111 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_QuestPhaseEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_QuestPhaseEntity__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TryGetValue__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___set_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestPhaseEntity__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestPhaseEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_QuestPhaseEntity__TypeInfo);
    byte_4D31111 = 1;
  }
  v26 = 0;
  value = 0;
  if ( !this->fields.isCached )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    v25 = v3;
    if ( !list )
      goto LABEL_26;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              list,
              (const MethodInfo_33FBDAC *)Method_System_Collections_ObjectModel_Collection_QuestPhaseEntity__get_Count__);
    if ( Count >= 1 )
    {
      v7 = Count;
      v8 = 0;
      while ( 1 )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        if ( !list )
          break;
        Item = System_Collections_ObjectModel_Collection_object___get_Item(
                 list,
                 v8,
                 (const MethodInfo_33FBE3C *)Method_System_Collections_ObjectModel_Collection_QuestPhaseEntity__get_Item__);
        if ( Item )
        {
          v10 = Item;
          list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.cachedQuestPahseEntityDict;
          if ( !list )
            break;
          klass = (int32_t)v10[1].klass;
          if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                  (System_Collections_Generic_Dictionary_int__object__o *)list,
                  klass,
                  &value,
                  (const MethodInfo_34BE510 *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TryGetValue__) )
          {
            v18 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_QuestPhaseEntity__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v18,
              (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__);
            value = (Il2CppObject *)v18;
            list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.cachedQuestPahseEntityDict;
            if ( !list )
              break;
            System_Collections_Generic_Dictionary_int__object___set_Item(
              (System_Collections_Generic_Dictionary_int__object__o *)list,
              klass,
              (Il2CppObject *)v18,
              (const MethodInfo_34BCD70 *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___set_Item__);
          }
          list = (System_Collections_ObjectModel_Collection_T__o *)value;
          if ( !value )
            break;
          v19 = value[1].klass;
          v20 = Method_System_Collections_Generic_List_QuestPhaseEntity__Add__;
          ++HIDWORD(value[1].monitor);
          if ( !v19 )
            break;
          klass_low = SLODWORD(list[1].klass);
          if ( (unsigned int)klass_low >= LODWORD(v19->_1.namespaze) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)list,
              v10,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v22 = &v19->_1.image + klass_low;
            LODWORD(list[1].klass) = klass_low + 1;
            v22[4] = v10;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v22 + 4), (int32_t)v10, v12, v13, v14, v15, v16, v17);
          }
        }
        if ( v7 == ++v8 )
          goto LABEL_19;
      }
LABEL_26:
      sub_1C93D2C(list, *(_QWORD *)&iQuestID);
    }
LABEL_19:
    v3 = v25;
    this->fields.isCached = 1;
  }
  v23 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_QuestPhaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.cachedQuestPahseEntityDict;
  if ( !list )
    goto LABEL_26;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                                                             (System_Collections_Generic_Dictionary_int__object__o *)list,
                                                             v3,
                                                             &v26,
                                                             (const MethodInfo_34BE510 *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TryGetValue__);
  if ( ((unsigned __int8)list & 1) != 0 )
  {
    if ( !v23 )
      goto LABEL_26;
    System_Collections_Generic_List_object___AddRange(
      v23,
      (System_Collections_Generic_IEnumerable_T__o *)v26,
      (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_QuestPhaseEntity__AddRange__);
  }
  else if ( !v23 )
  {
    goto LABEL_26;
  }
  return (QuestPhaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v23,
                                     (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__);
}


void QuestPhaseMaster___c__DisplayClass7_0___ctor(
        QuestPhaseMaster___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestPhaseMaster___c__DisplayClass7_0___GetIndividualityList_b__0(
        QuestPhaseMaster___c__DisplayClass7_0_o *this,
        QuestPhaseEntity_o *x,
        const MethodInfo *method)
{
  QuestPhaseMaster___c__DisplayClass7_0_o *v4; // x20

  v4 = this;
  if ( (byte_4D31118 & 1) == 0 )
  {
    this = (QuestPhaseMaster___c__DisplayClass7_0_o *)sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_4D31118 = 1;
  }
  if ( !x || (this = (QuestPhaseMaster___c__DisplayClass7_0_o *)v4->fields.hashQuestId) == 0 )
    sub_1C93D2C(this, x);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.questId,
           (const MethodInfo_3725A9C *)Method_System_Collections_Generic_HashSet_int__Contains__);
}