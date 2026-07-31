void QuestPhaseMaster___ctor(QuestPhaseMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5938E06 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity____ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TypeInfo);
    byte_5938E06 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_3F68354 *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity____ctor__);
  this->fields.cachedQuestPahseEntityDict = (struct System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___o *)v3;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.cachedQuestPahseEntityDict,
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
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string___ctor__);
}


void QuestPhaseMaster__Clear(QuestPhaseMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___o *cachedQuestPahseEntityDict; // x0

  if ( (byte_5938E07 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___Clear__);
    byte_5938E07 = 1;
  }
  DataMasterBase_object__object__object___Clear(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    (const MethodInfo_3EE0B04 *)Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__Clear__);
  cachedQuestPahseEntityDict = this->fields.cachedQuestPahseEntityDict;
  if ( !cachedQuestPahseEntityDict )
    sub_21FFECC(0, v3);
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)cachedQuestPahseEntityDict,
    (const MethodInfo_3F68E90 *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___Clear__);
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
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  QuestPhaseEntity_o *v21; // x0
  const MethodInfo *v22; // x1
  System_Collections_Generic_IEnumerable_TSource__o *SelectableQuests; // x0
  System_Int32_array *v24; // x21
  System_Collections_Generic_IEnumerator_T__c *v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  System_Collections_Generic_IEnumerator_T__o *v30; // [xsp+18h] [xbp-38h]

  if ( (byte_5938E0B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_QuestPhaseEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Linq_Enumerable_Contains_int___);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    byte_5938E0B = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_QuestPhaseEntity__GetEnumerator__);
  v30 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(0, v9);
  for ( i = Enumerator; ; i = v30 )
  {
    klass = i->klass;
    v12 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
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
      v14 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            i,
            *(_QWORD *)(v14 + 8));
    if ( (v15 & 1) == 0 )
      break;
    if ( !v30 )
      sub_21FFECC(v15, v16);
    v17 = v30->klass;
    v18 = *(unsigned __int16 *)&v30->klass->_2.rank;
    if ( *(_WORD *)&v30->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestPhaseEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_18;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_18:
      v20 = sub_2237E2C(v30, System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo, 0);
    }
    v21 = (QuestPhaseEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
                                  v30,
                                  *(_QWORD *)(v20 + 8));
    if ( !v21 )
      sub_21FFECC(0, v22);
    if ( v21->fields.phase == phase )
    {
      SelectableQuests = (System_Collections_Generic_IEnumerable_TSource__o *)QuestPhaseEntity__GetSelectableQuests(
                                                                                v21,
                                                                                v22);
      v24 = (System_Int32_array *)SelectableQuests;
      if ( SelectableQuests )
      {
        if ( System_Linq_Enumerable__Contains_int_(
               SelectableQuests,
               questId,
               (const MethodInfo_3843178 *)Method_System_Linq_Enumerable_Contains_int___) )
        {
          goto LABEL_27;
        }
      }
    }
  }
  v24 = 0;
LABEL_27:
  if ( v30 )
  {
    v25 = v30->klass;
    v26 = *(unsigned __int16 *)&v30->klass->_2.rank;
    if ( *(_WORD *)&v30->klass->_2.rank )
    {
      v27 = &v25->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_32;
      }
      v28 = (__int64)&v25->vtable[*v27];
    }
    else
    {
LABEL_32:
      v28 = sub_2237E2C(v30, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v28)(v30, *(_QWORD *)(v28 + 8));
  }
  return v24;
}


// local variable allocation has failed, the output may be wrong!
QuestPhaseEntity_o *QuestPhaseMaster__GetEntity(
        QuestPhaseMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5938E04 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__GetEntity__);
    byte_5938E04 = 1;
  }
  PK = (Il2CppObject *)QuestPhaseEntity__CreatePK(questId, phase, *(const MethodInfo **)&phase);
  return (QuestPhaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_3EE2044 *)Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__GetEntity__);
}


System_Int32_array *QuestPhaseMaster__GetIndividualityList(
        QuestPhaseMaster_o *this,
        System_Int32_array *questIdArray,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_HashSet_int__o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_List_int__o *v15; // x19
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  System_Func_object__bool__o *v17; // x23
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  __int64 v24; // x8
  __int64 v25; // x20
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 i; // x20
  __int64 v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  QuestPhaseEntity_o *v40; // x0
  const MethodInfo *v41; // x1
  System_Int32_array *PrioredIndividuality; // x0
  __int64 v43; // x1
  System_Int32_array *v44; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v46; // x26
  int32_t v47; // w21
  struct System_Int32_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  __int64 v51; // x8
  __int64 v52; // x9
  int *v53; // x10
  __int64 v54; // x0
  __int64 v56; // [xsp+18h] [xbp-58h]

  if ( (byte_5938E09 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_QuestPhaseEntity___);
    sub_21FFC50(&System_Func_QuestPhaseEntity__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int___ctor___91404032);
    sub_21FFC50(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_QuestPhaseEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&Method_QuestPhaseMaster___c__DisplayClass7_0__GetIndividualityList_b__0__);
    sub_21FFC50(&QuestPhaseMaster___c__DisplayClass7_0_TypeInfo);
    byte_5938E09 = 1;
  }
  v5 = sub_21FFEBC(QuestPhaseMaster___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  v6 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_69731156(
    v6,
    (System_Collections_Generic_IEnumerable_T__o *)questIdArray,
    (const MethodInfo_4280354 *)Method_System_Collections_Generic_HashSet_int___ctor___91404032);
  if ( !v5 )
    goto LABEL_59;
  *(_QWORD *)(v5 + 16) = v6;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)v6, v9, v10, v11, v12, v13, v14);
  v15 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  v17 = *(System_Func_object__bool__o **)(v5 + 24);
  if ( !v17 )
  {
    v17 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_QuestPhaseEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v17,
      (Il2CppObject *)v5,
      Method_QuestPhaseMaster___c__DisplayClass7_0__GetIndividualityList_b__0__,
      0);
    *(_QWORD *)(v5 + 24) = v17;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)v17, v18, v19, v20, v21, v22, v23);
  }
  v7 = (__int64)System_Linq_Enumerable__Where_object_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)list,
                  (System_Func_TSource__bool__o *)v17,
                  (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_QuestPhaseEntity___);
  if ( !v7 )
    goto LABEL_59;
  v24 = *(_QWORD *)v7;
  v25 = v7;
  v26 = *(unsigned __int16 *)(*(_QWORD *)v7 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v7 + 302LL) )
  {
    v27 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_QuestPhaseEntity__c **)v27 - 1) != System_Collections_Generic_IEnumerable_QuestPhaseEntity__TypeInfo )
    {
      --v26;
      v27 += 4;
      if ( !v26 )
        goto LABEL_11;
    }
    v28 = v24 + 16LL * *v27 + 312;
  }
  else
  {
LABEL_11:
    v28 = sub_2237E2C(v7, System_Collections_Generic_IEnumerable_QuestPhaseEntity__TypeInfo, 0);
  }
  v29 = (*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v25, *(_QWORD *)(v28 + 8));
  v56 = v29;
  if ( !v29 )
    sub_21FFECC(v29, v30);
  for ( i = v29; ; i = v56 )
  {
    v32 = *(_QWORD *)i;
    v33 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
    if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
    {
      v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v34 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_19;
      }
      v35 = v32 + 16LL * *v34 + 312;
    }
    else
    {
LABEL_19:
      v35 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))v35)(i, *(_QWORD *)(v35 + 8));
    if ( (v7 & 1) == 0 )
      break;
    if ( !v56 )
      sub_21FFECC(v7, v8);
    v36 = *(_QWORD *)v56;
    v37 = *(unsigned __int16 *)(*(_QWORD *)v56 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v56 + 302LL) )
    {
      v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_QuestPhaseEntity__c **)v38 - 1) != System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_27;
      }
      v39 = v36 + 16LL * *v38 + 312;
    }
    else
    {
LABEL_27:
      v39 = sub_2237E2C(v56, System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo, 0);
    }
    v40 = (QuestPhaseEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v56, *(_QWORD *)(v39 + 8));
    if ( !v40 )
      sub_21FFECC(0, v41);
    PrioredIndividuality = QuestPhaseEntity__GetPrioredIndividuality(v40, v41);
    v44 = PrioredIndividuality;
    if ( !PrioredIndividuality )
      sub_21FFECC(0, v43);
    max_length = PrioredIndividuality->max_length;
    if ( (int)max_length >= 1 )
    {
      v46 = 0;
      do
      {
        if ( v46 >= (unsigned int)max_length )
          sub_21FFED4(PrioredIndividuality);
        if ( !v15 )
          sub_21FFECC(PrioredIndividuality, v43);
        v47 = v44->m_Items[v46];
        PrioredIndividuality = (System_Int32_array *)System_Collections_Generic_List_int___Contains(
                                                       v15,
                                                       v47,
                                                       (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)PrioredIndividuality & 1) == 0 )
        {
          items = v15->fields._items;
          v49 = Method_System_Collections_Generic_List_int__Add__;
          ++v15->fields._version;
          if ( !items )
            sub_21FFECC(PrioredIndividuality, v43);
          size = v15->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v15,
              v47,
              *(const MethodInfo_4433138 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
          }
          else
          {
            v15->fields._size = size + 1;
            items->m_Items[size] = v47;
          }
        }
        LODWORD(max_length) = v44->max_length;
        ++v46;
      }
      while ( (__int64)v46 < (int)max_length );
    }
  }
  if ( v56 )
  {
    v51 = *(_QWORD *)v56;
    v52 = *(unsigned __int16 *)(*(_QWORD *)v56 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v56 + 302LL) )
    {
      v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
      {
        --v52;
        v53 += 4;
        if ( !v52 )
          goto LABEL_48;
      }
      v54 = v51 + 16LL * *v53 + 312;
    }
    else
    {
LABEL_48:
      v54 = sub_2237E2C(v56, System_IDisposable_TypeInfo, 0);
    }
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))v54)(v56, *(_QWORD *)(v54 + 8));
  }
  if ( !v15 )
LABEL_59:
    sub_21FFECC(v7, v8);
  return System_Collections_Generic_List_int___ToArray(
           v15,
           (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_5938E0E & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5938E0E = 1;
  }
  entity = 0;
  if ( questId < 1 || !QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, v4) )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !entity )
    sub_21FFECC(0, v8);
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
      sub_21FFECC(0, v6);
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

  if ( !QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, v4) )
    return 0;
  if ( !entity )
    sub_21FFECC(0, v5);
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
  QuestPhaseEntity_o *NextSceneId; // x0
  const MethodInfo *v12; // x1
  QuestPhaseEntity_o *v13; // x8
  System_String_array *NextSceneParam; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5938E0A & 1) == 0 )
  {
    sub_21FFC50(&SpecifiedSceneInfo_TypeInfo);
    byte_5938E0A = 1;
  }
  entity = 0;
  v9 = QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, method);
  v10 = 0;
  if ( v9 )
  {
    v10 = sub_21FFEBC(SpecifiedSceneInfo_TypeInfo);
    SpecifiedSceneInfo___ctor((SpecifiedSceneInfo_o *)v10, 0);
    if ( !v10
      || (NextSceneId = entity, *(_DWORD *)(v10 + 16) = eventId, !NextSceneId)
      || (NextSceneId = (QuestPhaseEntity_o *)QuestPhaseEntity__GetNextSceneId(NextSceneId, v12),
          v13 = entity,
          *(_DWORD *)(v10 + 20) = (_DWORD)NextSceneId,
          !v13) )
    {
      sub_21FFECC(NextSceneId, v12);
    }
    NextSceneParam = QuestPhaseEntity__GetNextSceneParam(v13, v12);
    *(_QWORD *)(v10 + 24) = NextSceneParam;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v10 + 24), (int32_t)NextSceneParam, v15, v16, v17, v18, v19, v20);
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

  if ( (byte_5938E0D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_22535/*"materialPlayUseUserQuestRoute"*/);
    byte_5938E0D = 1;
  }
  entity = 0;
  if ( !QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, v4) )
    return 0;
  if ( !entity )
    sub_21FFECC(0, v8);
  return QuestPhaseEntity__getScriptIntParam(entity, (System_String_o *)StringLiteral_22535/*"materialPlayUseUserQuestRoute"*/, 0, v9) == 1;
}


bool QuestPhaseMaster__IsHaveOverwriteEndScript(QuestPhaseMaster_o *this, int32_t questId, const MethodInfo *method)
{
  QuestPhaseEntity_array *List; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  int max_length; // w8
  QuestPhaseEntity_array *v9; // x19
  bool v10; // w20
  __int64 v11; // x21

  if ( (byte_5938E0C & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_23640/*"overwriteEndScript"*/);
    byte_5938E0C = 1;
  }
  List = QuestPhaseMaster__getList(this, questId, method);
  if ( !List )
    goto LABEL_11;
  max_length = List->max_length;
  v9 = List;
  v10 = max_length > 0;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v11 >= max_length )
        sub_21FFED4(List);
      List = (QuestPhaseEntity_array *)v9->m_Items[v11];
      if ( !List )
        break;
      List = (QuestPhaseEntity_array *)QuestPhaseEntity__getScriptObj(
                                         (QuestPhaseEntity_o *)List,
                                         (System_String_o *)StringLiteral_23640/*"overwriteEndScript"*/,
                                         v7);
      if ( !List )
      {
        max_length = v9->max_length;
        v10 = (int)++v11 < max_length;
        if ( (int)v11 < max_length )
          continue;
      }
      return v10;
    }
LABEL_11:
    sub_21FFECC(List, v6);
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

  if ( (byte_5938E05 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__TryGetEntity__);
    byte_5938E05 = 1;
  }
  PK = (Il2CppObject *)QuestPhaseEntity__CreatePK(questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
QuestPhaseEntity_array *QuestPhaseMaster__getList(QuestPhaseMaster_o *this, int32_t iQuestID, const MethodInfo *method)
{
  int32_t v3; // w22
  _BOOL4 isCached; // w8
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v8; // w21
  int32_t v9; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v11; // x23
  int32_t klass; // w24
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Collections_Generic_List_object__o *v19; // x25
  Il2CppClass *v20; // x8
  _QWORD *v21; // x9
  __int64 klass_low; // x10
  void **v23; // x8
  System_Collections_Generic_List_object__o *v24; // x21
  int32_t v26; // [xsp+Ch] [xbp-74h]
  Il2CppObject *v27; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *value; // [xsp+18h] [xbp-68h] BYREF

  v3 = iQuestID;
  if ( (byte_5938E08 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_QuestPhaseEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_QuestPhaseEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TryGetValue__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___set_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestPhaseEntity__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestPhaseEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_QuestPhaseEntity__TypeInfo);
    byte_5938E08 = 1;
  }
  isCached = this->fields.isCached;
  v27 = 0;
  value = 0;
  if ( !isCached )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    v26 = v3;
    if ( !list )
      goto LABEL_26;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              list,
              (const MethodInfo_3E60A6C *)Method_System_Collections_ObjectModel_Collection_QuestPhaseEntity__get_Count__);
    if ( Count >= 1 )
    {
      v8 = Count;
      v9 = 0;
      while ( 1 )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        if ( !list )
          break;
        Item = System_Collections_ObjectModel_Collection_object___get_Item(
                 list,
                 v9,
                 (const MethodInfo_3E60B00 *)Method_System_Collections_ObjectModel_Collection_QuestPhaseEntity__get_Item__);
        if ( Item )
        {
          v11 = Item;
          list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.cachedQuestPahseEntityDict;
          if ( !list )
            break;
          klass = (int32_t)v11[1].klass;
          if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                  (System_Collections_Generic_Dictionary_int__object__o *)list,
                  klass,
                  &value,
                  (const MethodInfo_3F6A7E4 *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TryGetValue__) )
          {
            v19 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_QuestPhaseEntity__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v19,
              (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__);
            list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.cachedQuestPahseEntityDict;
            value = (Il2CppObject *)v19;
            if ( !list )
              break;
            System_Collections_Generic_Dictionary_int__object___set_Item(
              (System_Collections_Generic_Dictionary_int__object__o *)list,
              klass,
              (Il2CppObject *)v19,
              (const MethodInfo_3F68CF4 *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___set_Item__);
          }
          list = (System_Collections_ObjectModel_Collection_T__o *)value;
          if ( !value )
            break;
          v20 = value[1].klass;
          v21 = Method_System_Collections_Generic_List_QuestPhaseEntity__Add__;
          ++HIDWORD(value[1].monitor);
          if ( !v20 )
            break;
          klass_low = SLODWORD(list[1].klass);
          if ( (unsigned int)klass_low >= LODWORD(v20->_1.namespaze) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)list,
              v11,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v23 = &v20->_1.image + klass_low;
            LODWORD(list[1].klass) = klass_low + 1;
            v23[4] = v11;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v23 + 4), (int32_t)v11, v13, v14, v15, v16, v17, v18);
          }
        }
        if ( v8 == ++v9 )
          goto LABEL_19;
      }
LABEL_26:
      sub_21FFECC(list, *(_QWORD *)&iQuestID);
    }
LABEL_19:
    v3 = v26;
    this->fields.isCached = 1;
  }
  v24 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_QuestPhaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.cachedQuestPahseEntityDict;
  if ( !list )
    goto LABEL_26;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                                                             (System_Collections_Generic_Dictionary_int__object__o *)list,
                                                             v3,
                                                             &v27,
                                                             (const MethodInfo_3F6A7E4 *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TryGetValue__);
  if ( ((unsigned __int8)list & 1) != 0 )
  {
    if ( !v24 )
      goto LABEL_26;
    System_Collections_Generic_List_object___AddRange(
      v24,
      (System_Collections_Generic_IEnumerable_T__o *)v27,
      (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_QuestPhaseEntity__AddRange__);
  }
  else if ( !v24 )
  {
    goto LABEL_26;
  }
  return (QuestPhaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v24,
                                     (const MethodInfo_445164C *)Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__);
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
  if ( (byte_5938E0F & 1) == 0 )
  {
    this = (QuestPhaseMaster___c__DisplayClass7_0_o *)sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_5938E0F = 1;
  }
  if ( !x || (this = (QuestPhaseMaster___c__DisplayClass7_0_o *)v4->fields.hashQuestId) == 0 )
    sub_21FFECC(this, x);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.questId,
           (const MethodInfo_4280968 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}