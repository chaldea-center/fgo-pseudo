void __fastcall QuestPhaseMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w1
  struct QuestPhaseMaster_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B1CBFF & 1) == 0 )
  {
    sub_1BCAFF8(&QuestPhaseMaster_TypeInfo, v1);
    sub_1BCAFF8(&StringLiteral_21475/*"movieFolder"*/, v4);
    sub_1BCAFF8(&StringLiteral_21476/*"moviePlayType"*/, v5);
    byte_4B1CBFF = 1;
  }
  QuestPhaseMaster_TypeInfo->static_fields->MOVIE_QUEST_SCRIPT_STR = (struct System_String_o *)StringLiteral_21475/*"movieFolder"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)QuestPhaseMaster_TypeInfo->static_fields, StringLiteral_21475/*"movieFolder"*/, v2, v3);
  v6 = StringLiteral_21476/*"moviePlayType"*/;
  static_fields = QuestPhaseMaster_TypeInfo->static_fields;
  static_fields->MOVIE_QUEST_SCRIPT_TYPE_STR = (struct System_String_o *)StringLiteral_21476/*"moviePlayType"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->MOVIE_QUEST_SCRIPT_TYPE_STR, v6, v8, v9);
}


void __fastcall QuestPhaseMaster___ctor(QuestPhaseMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__object__o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B1CBF2 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string___ctor__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity____ctor__, v3);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TypeInfo, v4);
    byte_4B1CBF2 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCB244(System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v5,
    (const MethodInfo_3320910 *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity____ctor__);
  this->fields.cachedQuestPahseEntityDict = (struct System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___o *)v5;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.cachedQuestPahseEntityDict, (int32_t)v5, v6, v7);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    75,
    (const MethodInfo_32CA594 *)Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string___ctor__);
}


void __fastcall QuestPhaseMaster__Clear(QuestPhaseMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___o *cachedQuestPahseEntityDict; // x0

  if ( (byte_4B1CBF3 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__Clear__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___Clear__, v3);
    byte_4B1CBF3 = 1;
  }
  DataMasterBase_object__object__object___Clear(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    (const MethodInfo_32CB270 *)Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__Clear__);
  cachedQuestPahseEntityDict = this->fields.cachedQuestPahseEntityDict;
  if ( !cachedQuestPahseEntityDict )
    sub_1BCB254(0LL, v4);
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)cachedQuestPahseEntityDict,
    (const MethodInfo_332146C *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___Clear__);
  this->fields.isCached = 0;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall QuestPhaseMaster__GetBranchQuestIds(
        QuestPhaseMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int32_t *v20; // x10
  __int64 v21; // x0
  QuestPhaseEntity_o *v22; // x0
  const MethodInfo *v23; // x1
  System_Collections_Generic_IEnumerable_TSource__o *SelectableQuests; // x0
  System_Int32_array *v25; // x22
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0

  if ( (byte_4B1CBFB & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_ObjectModel_Collection_QuestPhaseEntity__GetEnumerator__,
      *(_QWORD *)&questId);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Contains_int___, v7);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v8);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo, v9);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v10);
    byte_4B1CBFB = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCB254(0LL, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3263BC0 *)Method_System_Collections_ObjectModel_Collection_QuestPhaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCB254(0LL, v12);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v18 = Enumerator->klass;
    v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestPhaseEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_16;
      }
      v21 = (__int64)&v18->vtable[*v20].method;
    }
    else
    {
LABEL_16:
      v21 = sub_1C1B560(Enumerator, System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo, 0LL);
    }
    v22 = (QuestPhaseEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                                  Enumerator,
                                  *(_QWORD *)(v21 + 8));
    if ( !v22 )
      sub_1BCB254(0LL, v23);
    if ( v22->fields.phase == phase )
    {
      SelectableQuests = (System_Collections_Generic_IEnumerable_TSource__o *)QuestPhaseEntity__GetSelectableQuests(
                                                                                v22,
                                                                                v23);
      v25 = (System_Int32_array *)SelectableQuests;
      if ( SelectableQuests )
      {
        if ( System_Linq_Enumerable__Contains_int_(
               SelectableQuests,
               questId,
               (const MethodInfo_3033A7C *)Method_System_Linq_Enumerable_Contains_int___) )
        {
          goto LABEL_24;
        }
      }
    }
  }
  v25 = 0LL;
LABEL_24:
  v26 = Enumerator->klass;
  v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v28 = &v26->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_28;
    }
    v29 = (__int64)&v26->vtable[*v28].method;
  }
  else
  {
LABEL_28:
    v29 = sub_1C1B560(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(Enumerator, *(_QWORD *)(v29 + 8));
  return v25;
}


// local variable allocation has failed, the output may be wrong!
QuestPhaseEntity_o *__fastcall QuestPhaseMaster__GetEntity(
        QuestPhaseMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B1CBF0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__GetEntity__, *(_QWORD *)&questId);
    byte_4B1CBF0 = 1;
  }
  PK = (Il2CppObject *)QuestPhaseEntity__CreatePK(questId, phase, *(const MethodInfo **)&phase);
  return (QuestPhaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_32CC8B8 *)Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__GetEntity__);
}


System_Int32_array *__fastcall QuestPhaseMaster__GetIndividualityList(
        QuestPhaseMaster_o *this,
        System_Int32_array *questIdArray,
        const MethodInfo *method)
{
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
  __int64 v19; // x21
  System_Collections_Generic_HashSet_int__o *v20; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_List_int__o *v25; // x19
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  System_Func_object__bool__o *v27; // x23
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x20
  __int64 v32; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v35; // x1
  __int64 v36; // x20
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  __int64 v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  QuestPhaseEntity_o *v45; // x0
  const MethodInfo *v46; // x1
  System_Int32_array *PrioredIndividuality; // x0
  __int64 v48; // x1
  __int64 v49; // x2
  System_Int32_array *v50; // x21
  __int64 v51; // x8
  unsigned __int64 v52; // x28
  int32_t v53; // w22
  struct System_Int32_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  __int64 v57; // x8
  __int64 v58; // x9
  int *v59; // x10
  __int64 v60; // x0

  if ( (byte_4B1CBF6 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_QuestPhaseEntity___, questIdArray);
    sub_1BCAFF8(&System_Func_QuestPhaseEntity__bool__TypeInfo, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_HashSet_int___ctor___76845584, v6);
    sub_1BCAFF8(&System_Collections_Generic_HashSet_int__TypeInfo, v7);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v8);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerable_QuestPhaseEntity__TypeInfo, v9);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo, v10);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Contains__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__ToArray__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v16);
    sub_1BCAFF8(&Method_QuestPhaseMaster___c__DisplayClass11_0__GetIndividualityList_b__0__, v17);
    sub_1BCAFF8(&QuestPhaseMaster___c__DisplayClass11_0_TypeInfo, v18);
    byte_4B1CBF6 = 1;
  }
  v19 = sub_1BCB244(QuestPhaseMaster___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  v20 = (System_Collections_Generic_HashSet_int__o *)sub_1BCB244(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_56036616(
    v20,
    (System_Collections_Generic_IEnumerable_T__o *)questIdArray,
    (const MethodInfo_3570D08 *)Method_System_Collections_Generic_HashSet_int___ctor___76845584);
  if ( !v19 )
    goto LABEL_53;
  *(_QWORD *)(v19 + 16) = v20;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v19 + 16), (int32_t)v20, v23, v24);
  v25 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v25,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  v27 = *(System_Func_object__bool__o **)(v19 + 24);
  if ( !v27 )
  {
    v27 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_QuestPhaseEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v27,
      (Il2CppObject *)v19,
      Method_QuestPhaseMaster___c__DisplayClass11_0__GetIndividualityList_b__0__,
      0LL);
    *(_QWORD *)(v19 + 24) = v27;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v19 + 24), (int32_t)v27, v28, v29);
  }
  v21 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v27,
          (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_QuestPhaseEntity___);
  if ( !v21 )
    goto LABEL_53;
  klass = v21->klass;
  v31 = v21;
  v32 = *(unsigned __int16 *)(&v21->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v21->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_QuestPhaseEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_QuestPhaseEntity__TypeInfo )
    {
      --v32;
      p_offset += 4;
      if ( !v32 )
        goto LABEL_11;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_11:
    p_method = sub_1C1B560(v21, System_Collections_Generic_IEnumerable_QuestPhaseEntity__TypeInfo, 0LL);
  }
  v36 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v31,
          *(_QWORD *)(p_method + 8));
  if ( !v36 )
    sub_1BCB254(0LL, v35);
  while ( 1 )
  {
    v37 = *(_QWORD *)v36;
    v38 = *(unsigned __int16 *)(*(_QWORD *)v36 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v36 + 302LL) )
    {
      v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v39 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_18;
      }
      v40 = v37 + 16LL * *v39 + 312;
    }
    else
    {
LABEL_18:
      v40 = sub_1C1B560(v36, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v36, *(_QWORD *)(v40 + 8)) & 1) == 0 )
      break;
    v41 = *(_QWORD *)v36;
    v42 = *(unsigned __int16 *)(*(_QWORD *)v36 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v36 + 302LL) )
    {
      v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_QuestPhaseEntity__c **)v43 - 1) != System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo )
      {
        --v42;
        v43 += 4;
        if ( !v42 )
          goto LABEL_25;
      }
      v44 = v41 + 16LL * *v43 + 312;
    }
    else
    {
LABEL_25:
      v44 = sub_1C1B560(v36, System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo, 0LL);
    }
    v45 = (QuestPhaseEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v36, *(_QWORD *)(v44 + 8));
    if ( !v45 )
      sub_1BCB254(0LL, v46);
    PrioredIndividuality = QuestPhaseEntity__GetPrioredIndividuality(v45, v46);
    v50 = PrioredIndividuality;
    if ( !PrioredIndividuality )
      sub_1BCB254(0LL, v48);
    v51 = *(_QWORD *)&PrioredIndividuality->max_length;
    if ( (int)v51 >= 1 )
    {
      v52 = 0LL;
      do
      {
        if ( v52 >= (unsigned int)v51 )
          sub_1BCB25C(PrioredIndividuality, v48, v49);
        if ( !v25 )
          sub_1BCB254(PrioredIndividuality, v48);
        v53 = v50->m_Items[v52 + 1];
        PrioredIndividuality = (System_Int32_array *)System_Collections_Generic_List_int___Contains(
                                                       v25,
                                                       v53,
                                                       (const MethodInfo_369CF24 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)PrioredIndividuality & 1) == 0 )
        {
          items = v25->fields._items;
          v55 = Method_System_Collections_Generic_List_int__Add__;
          ++v25->fields._version;
          if ( !items )
            sub_1BCB254(PrioredIndividuality, v48);
          size = v25->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v25,
              v53,
              *(const MethodInfo_369CBAC **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
          }
          else
          {
            v25->fields._size = size + 1;
            items->m_Items[size + 1] = v53;
          }
        }
        LODWORD(v51) = v50->max_length;
        ++v52;
      }
      while ( (__int64)v52 < (int)v51 );
    }
  }
  v57 = *(_QWORD *)v36;
  v58 = *(unsigned __int16 *)(*(_QWORD *)v36 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v36 + 302LL) )
  {
    v59 = (int *)(*(_QWORD *)(v57 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v59 - 1) != System_IDisposable_TypeInfo )
    {
      --v58;
      v59 += 4;
      if ( !v58 )
        goto LABEL_44;
    }
    v60 = v57 + 16LL * *v59 + 312;
  }
  else
  {
LABEL_44:
    v60 = sub_1C1B560(v36, System_IDisposable_TypeInfo, 0LL);
  }
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v60)(
                                                               v36,
                                                               *(_QWORD *)(v60 + 8));
  if ( !v25 )
LABEL_53:
    sub_1BCB254(v21, v22);
  return System_Collections_Generic_List_int___ToArray(
           v25,
           (const MethodInfo_369E664 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestPhaseMaster__GetMapModelEntryAnimationName(
        QuestPhaseMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  const MethodInfo *v8; // x1
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1CBFE & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_1/*""*/, *(_QWORD *)&questId);
    byte_4B1CBFE = 1;
  }
  entity = 0LL;
  if ( questId < 1 || !QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, v4) )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !entity )
    sub_1BCB254(0LL, v8);
  return QuestPhaseEntity__GetMapModelEntryAnimationName(entity, v8);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestPhaseMaster__GetMovieFolder(
        QuestPhaseMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  bool v10; // w8
  System_String_o *result; // x0
  QuestPhaseEntity_o *v12; // x19
  QuestPhaseMaster_c *v13; // x0
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1CBF8 & 1) == 0 )
  {
    sub_1BCAFF8(&QuestPhaseMaster_TypeInfo, *(_QWORD *)&questId);
    byte_4B1CBF8 = 1;
  }
  entity = 0LL;
  v10 = QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, v4);
  result = 0LL;
  if ( v10 )
  {
    v12 = entity;
    v13 = QuestPhaseMaster_TypeInfo;
    if ( !QuestPhaseMaster_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestPhaseMaster_TypeInfo);
    if ( !v12 )
      sub_1BCB254(v13, v8);
    return QuestPhaseEntity__getScriptStr(
             v12,
             QuestPhaseMaster_TypeInfo->static_fields->MOVIE_QUEST_SCRIPT_STR,
             0LL,
             v9);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall QuestPhaseMaster__GetMoviePlayType(
        QuestPhaseMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  QuestPhaseEntity_o *Entity; // x0
  const MethodInfo *v8; // x3
  QuestPhaseEntity_o *v9; // x19
  QuestPhaseMaster_c *v10; // x0

  if ( (byte_4B1CBF9 & 1) == 0 )
  {
    sub_1BCAFF8(&QuestPhaseMaster_TypeInfo, *(_QWORD *)&questId);
    byte_4B1CBF9 = 1;
  }
  Entity = QuestPhaseMaster__GetEntity(this, questId, phase, method);
  if ( Entity )
  {
    v9 = Entity;
    v10 = QuestPhaseMaster_TypeInfo;
    if ( !QuestPhaseMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestPhaseMaster_TypeInfo);
      v10 = QuestPhaseMaster_TypeInfo;
    }
    LODWORD(Entity) = QuestPhaseEntity__getScriptIntParam(v9, v10->static_fields->MOVIE_QUEST_SCRIPT_TYPE_STR, 1, v8);
  }
  return (int)Entity;
}


// local variable allocation has failed, the output may be wrong!
SpecifiedSceneInfo_o *__fastcall QuestPhaseMaster__GetSpecifiedSceneInfo(
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
  const MethodInfo *v15; // x3
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1CBFA & 1) == 0 )
  {
    sub_1BCAFF8(&SpecifiedSceneInfo_TypeInfo, *(_QWORD *)&eventId);
    byte_4B1CBFA = 1;
  }
  entity = 0LL;
  v9 = QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, method);
  v10 = 0LL;
  if ( v9 )
  {
    v10 = sub_1BCB244(SpecifiedSceneInfo_TypeInfo);
    SpecifiedSceneInfo___ctor((SpecifiedSceneInfo_o *)v10, 0LL);
    if ( !v10
      || (*(_DWORD *)(v10 + 16) = eventId, (v11 = entity) == 0LL)
      || (*(_DWORD *)(v10 + 20) = QuestPhaseEntity__GetNextSceneId(entity, v12), (v11 = entity) == 0LL) )
    {
      sub_1BCB254(v11, v12);
    }
    NextSceneParam = QuestPhaseEntity__GetNextSceneParam(entity, v12);
    *(_QWORD *)(v10 + 24) = NextSceneParam;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v10 + 24), (int32_t)NextSceneParam, v14, v15);
  }
  return (SpecifiedSceneInfo_o *)v10;
}


bool __fastcall QuestPhaseMaster__IsAreaImproveQuest(
        QuestPhaseMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  QuestPhaseEntity_o *Entity; // x0
  const MethodInfo *v5; // x1

  Entity = QuestPhaseMaster__GetEntity(this, questId, 1, v3);
  if ( Entity )
    LOBYTE(Entity) = QuestPhaseEntity__IsAreaImporveQuest(Entity, v5);
  return (char)Entity;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestPhaseMaster__IsEnableMaterialPlayUseUserQuestRoute(
        QuestPhaseMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1CBFD & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_21290/*"materialPlayUseUserQuestRoute"*/, *(_QWORD *)&questId);
    byte_4B1CBFD = 1;
  }
  entity = 0LL;
  if ( !QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, v4) )
    return 0;
  if ( !entity )
    sub_1BCB254(0LL, v8);
  return QuestPhaseEntity__getScriptIntParam(entity, (System_String_o *)StringLiteral_21290/*"materialPlayUseUserQuestRoute"*/, 0, v9) == 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestPhaseMaster__IsHaveOverwriteEndScript(
        QuestPhaseMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  QuestPhaseEntity_array *List; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  int max_length; // w8
  QuestPhaseEntity_array *v9; // x19
  bool v10; // w20
  int v11; // w21

  if ( (byte_4B1CBFC & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_22343/*"overwriteEndScript"*/, *(_QWORD *)&questId);
    byte_4B1CBFC = 1;
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
        sub_1BCB25C(List, v6, v7);
      List = (QuestPhaseEntity_array *)v9->m_Items[v11];
      if ( !List )
        break;
      List = (QuestPhaseEntity_array *)QuestPhaseEntity__getScriptObj(
                                         (QuestPhaseEntity_o *)List,
                                         (System_String_o *)StringLiteral_22343/*"overwriteEndScript"*/,
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
    sub_1BCB254(List, v6);
  }
  return v10;
}


bool __fastcall QuestPhaseMaster__IsInvisibleConnectAndLoad(
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
bool __fastcall QuestPhaseMaster__IsMoviePhase(
        QuestPhaseMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  QuestPhaseEntity_o *Entity; // x0
  const MethodInfo *v8; // x3
  QuestPhaseEntity_o *v9; // x19
  QuestPhaseMaster_c *v10; // x0

  if ( (byte_4B1CBF7 & 1) == 0 )
  {
    sub_1BCAFF8(&QuestPhaseMaster_TypeInfo, *(_QWORD *)&questId);
    byte_4B1CBF7 = 1;
  }
  Entity = QuestPhaseMaster__GetEntity(this, questId, phase, method);
  if ( Entity )
  {
    v9 = Entity;
    v10 = QuestPhaseMaster_TypeInfo;
    if ( !QuestPhaseMaster_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestPhaseMaster_TypeInfo);
      v10 = QuestPhaseMaster_TypeInfo;
    }
    LOBYTE(Entity) = QuestPhaseEntity__getScriptStr(v9, v10->static_fields->MOVIE_QUEST_SCRIPT_STR, 0LL, v8) != 0LL;
  }
  return (char)Entity;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestPhaseMaster__TryGetEntity(
        QuestPhaseMaster_o *this,
        QuestPhaseEntity_o **entity,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B1CBF1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__TryGetEntity__, entity);
    byte_4B1CBF1 = 1;
  }
  PK = (Il2CppObject *)QuestPhaseEntity__CreatePK(questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32CC904 *)Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
QuestPhaseEntity_array *__fastcall QuestPhaseMaster__getList(
        QuestPhaseMaster_o *this,
        int32_t iQuestID,
        const MethodInfo *method)
{
  int32_t v3; // w22
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  int32_t v15; // w21
  int32_t v16; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v18; // x23
  int32_t klass; // w24
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_object__o *v22; // x25
  Il2CppClass *v23; // x8
  _QWORD *v24; // x9
  __int64 klass_low; // x10
  void **v26; // x8
  System_Collections_Generic_List_object__o *v27; // x21
  int32_t v29; // [xsp+Ch] [xbp-74h]
  Il2CppObject *v30; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *value; // [xsp+18h] [xbp-68h] BYREF

  v3 = iQuestID;
  if ( (byte_4B1CBF4 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_QuestPhaseEntity__get_Count__, *(_QWORD *)&iQuestID);
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_QuestPhaseEntity__get_Item__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TryGetValue__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___set_Item__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestPhaseEntity__AddRange__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestPhaseEntity__Add__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__, v11);
    sub_1BCAFF8(&System_Collections_Generic_List_QuestPhaseEntity__TypeInfo, v12);
    byte_4B1CBF4 = 1;
  }
  v30 = 0LL;
  value = 0LL;
  if ( !this->fields.isCached )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    v29 = v3;
    if ( !list )
      goto LABEL_26;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              list,
              (const MethodInfo_32635E8 *)Method_System_Collections_ObjectModel_Collection_QuestPhaseEntity__get_Count__);
    if ( Count >= 1 )
    {
      v15 = Count;
      v16 = 0;
      while ( 1 )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        if ( !list )
          break;
        Item = System_Collections_ObjectModel_Collection_object___get_Item(
                 list,
                 v16,
                 (const MethodInfo_3263678 *)Method_System_Collections_ObjectModel_Collection_QuestPhaseEntity__get_Item__);
        if ( Item )
        {
          v18 = Item;
          list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.cachedQuestPahseEntityDict;
          if ( !list )
            break;
          klass = (int32_t)v18[1].klass;
          if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                  (System_Collections_Generic_Dictionary_int__object__o *)list,
                  klass,
                  &value,
                  (const MethodInfo_3322A70 *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TryGetValue__) )
          {
            v22 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_QuestPhaseEntity__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v22,
              (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__);
            value = (Il2CppObject *)v22;
            list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.cachedQuestPahseEntityDict;
            if ( !list )
              break;
            System_Collections_Generic_Dictionary_int__object___set_Item(
              (System_Collections_Generic_Dictionary_int__object__o *)list,
              klass,
              (Il2CppObject *)v22,
              (const MethodInfo_33212D0 *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___set_Item__);
          }
          list = (System_Collections_ObjectModel_Collection_T__o *)value;
          if ( !value )
            break;
          v23 = value[1].klass;
          v24 = Method_System_Collections_Generic_List_QuestPhaseEntity__Add__;
          ++HIDWORD(value[1].monitor);
          if ( !v23 )
            break;
          klass_low = SLODWORD(list[1].klass);
          if ( (unsigned int)klass_low >= LODWORD(v23->_1.namespaze) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)list,
              v18,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v26 = &v23->_1.image + klass_low;
            LODWORD(list[1].klass) = klass_low + 1;
            v26[4] = v18;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v18, v20, v21);
          }
        }
        if ( v15 == ++v16 )
          goto LABEL_19;
      }
LABEL_26:
      sub_1BCB254(list, *(_QWORD *)&iQuestID);
    }
LABEL_19:
    v3 = v29;
    this->fields.isCached = 1;
  }
  v27 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_QuestPhaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.cachedQuestPahseEntityDict;
  if ( !list )
    goto LABEL_26;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                                                             (System_Collections_Generic_Dictionary_int__object__o *)list,
                                                             v3,
                                                             &v30,
                                                             (const MethodInfo_3322A70 *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TryGetValue__);
  if ( ((unsigned __int8)list & 1) != 0 )
  {
    if ( !v27 )
      goto LABEL_26;
    System_Collections_Generic_List_object___AddRange(
      v27,
      (System_Collections_Generic_IEnumerable_T__o *)v30,
      (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_QuestPhaseEntity__AddRange__);
  }
  else if ( !v27 )
  {
    goto LABEL_26;
  }
  return (QuestPhaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v27,
                                     (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__);
}


QuestPhaseEntity_array *__fastcall QuestPhaseMaster__getList_41666572(
        QuestPhaseMaster_o *this,
        System_Int32_array *questIdList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x20
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  const MethodInfo *v28; // x3
  signed int max_length; // w9
  __int64 v30; // x8
  int v31; // w10
  struct System_Object_array *items; // x9
  _QWORD *v33; // x10
  __int64 size; // x11
  Il2CppClass **v35; // x0
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0

  if ( (byte_4B1CBF5 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_QuestPhaseEntity__GetEnumerator__, questIdList);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v5);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo, v6);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestPhaseEntity__Add__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__, v10);
    sub_1BCAFF8(&System_Collections_Generic_List_QuestPhaseEntity__TypeInfo, v11);
    byte_4B1CBF5 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_QuestPhaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_44;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3263BC0 *)Method_System_Collections_ObjectModel_Collection_QuestPhaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCB254(0LL, v15);
  while ( 1 )
  {
LABEL_5:
    klass = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestPhaseEntity__c **)v23 - 1) != System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_16;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_16:
      v24 = sub_1C1B560(Enumerator, System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo, 0LL);
    }
    v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
            Enumerator,
            *(_QWORD *)(v24 + 8));
    if ( !questIdList )
      sub_1BCB254(v25, v26);
    max_length = questIdList->max_length;
    if ( max_length >= 1 )
    {
      v30 = v25;
      v31 = 0;
      while ( 1 )
      {
        if ( max_length == v31 )
          sub_1BCB25C(v25, v26, v27);
        if ( !v25 )
          sub_1BCB254(0LL, v26);
        if ( *(_DWORD *)(v25 + 16) == questIdList->m_Items[v31 + 1] )
          break;
        if ( max_length == ++v31 )
          goto LABEL_5;
      }
      if ( !v12 )
        sub_1BCB254(v25, v26);
      items = v12->fields._items;
      v33 = Method_System_Collections_Generic_List_QuestPhaseEntity__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1BCB254(v25, v26);
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          (Il2CppObject *)v25,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v35[4] = (Il2CppClass *)v30;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v35 + 4), v30, v27, v28);
      }
    }
  }
  v36 = Enumerator->klass;
  v37 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v38 = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_35;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_35:
    v39 = sub_1C1B560(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(
                                                             Enumerator,
                                                             *(_QWORD *)(v39 + 8));
  if ( !v12 )
LABEL_44:
    sub_1BCB254(list, v13);
  return (QuestPhaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v12,
                                     (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__);
}


void __fastcall QuestPhaseMaster___c__DisplayClass11_0___ctor(
        QuestPhaseMaster___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestPhaseMaster___c__DisplayClass11_0___GetIndividualityList_b__0(
        QuestPhaseMaster___c__DisplayClass11_0_o *this,
        QuestPhaseEntity_o *x,
        const MethodInfo *method)
{
  QuestPhaseMaster___c__DisplayClass11_0_o *v4; // x20

  v4 = this;
  if ( (byte_4B1CC00 & 1) == 0 )
  {
    this = (QuestPhaseMaster___c__DisplayClass11_0_o *)sub_1BCAFF8(
                                                         &Method_System_Collections_Generic_HashSet_int__Contains__,
                                                         x);
    byte_4B1CC00 = 1;
  }
  if ( !x || (this = (QuestPhaseMaster___c__DisplayClass11_0_o *)v4->fields.hashQuestId) == 0LL )
    sub_1BCB254(this, x);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.questId,
           (const MethodInfo_357130C *)Method_System_Collections_Generic_HashSet_int__Contains__);
}