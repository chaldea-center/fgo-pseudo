void QuestPhaseMaster___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct QuestPhaseMaster_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C279D8 & 1) == 0 )
  {
    sub_1C2D490(&QuestPhaseMaster_TypeInfo);
    sub_1C2D490(&StringLiteral_21654/*"movieFolder"*/);
    sub_1C2D490(&StringLiteral_21655/*"moviePlayType"*/);
    byte_4C279D8 = 1;
  }
  QuestPhaseMaster_TypeInfo->static_fields->MOVIE_QUEST_SCRIPT_STR = (struct System_String_o *)StringLiteral_21654/*"movieFolder"*/;
  sub_1C2D434((CGThumbnailListItem_o *)QuestPhaseMaster_TypeInfo->static_fields, StringLiteral_21654/*"movieFolder"*/, v1, v2);
  v3 = StringLiteral_21655/*"moviePlayType"*/;
  static_fields = QuestPhaseMaster_TypeInfo->static_fields;
  static_fields->MOVIE_QUEST_SCRIPT_TYPE_STR = (struct System_String_o *)StringLiteral_21655/*"moviePlayType"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->MOVIE_QUEST_SCRIPT_TYPE_STR, v3, v5, v6);
}


void QuestPhaseMaster___ctor(QuestPhaseMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C279CB & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity____ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TypeInfo);
    byte_4C279CB = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_33E08A8 *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity____ctor__);
  this->fields.cachedQuestPahseEntityDict = (struct System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.cachedQuestPahseEntityDict, (int32_t)v3, v4, v5);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    75,
    (const MethodInfo_338A52C *)Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string___ctor__);
}


void QuestPhaseMaster__Clear(QuestPhaseMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___o *cachedQuestPahseEntityDict; // x0

  if ( (byte_4C279CC & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___Clear__);
    byte_4C279CC = 1;
  }
  DataMasterBase_object__object__object___Clear(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    (const MethodInfo_338B208 *)Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__Clear__);
  cachedQuestPahseEntityDict = this->fields.cachedQuestPahseEntityDict;
  if ( !cachedQuestPahseEntityDict )
    sub_1C2D6EC(0, v3);
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)cachedQuestPahseEntityDict,
    (const MethodInfo_33E1404 *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___Clear__);
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

  if ( (byte_4C279D4 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_QuestPhaseEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    byte_4C279D4 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C2D6EC(0, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_QuestPhaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v8);
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
      v13 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v17 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo, 0);
    }
    v18 = (QuestPhaseEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                                  Enumerator,
                                  *(_QWORD *)(v17 + 8));
    if ( !v18 )
      sub_1C2D6EC(0, v19);
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
               (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___) )
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
    v25 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
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

  if ( (byte_4C279C9 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__GetEntity__);
    byte_4C279C9 = 1;
  }
  PK = (Il2CppObject *)QuestPhaseEntity__CreatePK(questId, phase, *(const MethodInfo **)&phase);
  return (QuestPhaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_338C850 *)Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__GetEntity__);
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
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_int__o *v11; // x19
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  System_Func_object__bool__o *v13; // x23
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x20
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x20
  __int64 v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  QuestPhaseEntity_o *v31; // x0
  const MethodInfo *v32; // x1
  System_Int32_array *PrioredIndividuality; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  System_Int32_array *v36; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v38; // x28
  int32_t v39; // w22
  struct System_Int32_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0

  if ( (byte_4C279CF & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_QuestPhaseEntity___);
    sub_1C2D490(&System_Func_QuestPhaseEntity__bool__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_int___ctor___77923784);
    sub_1C2D490(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerable_QuestPhaseEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&Method_QuestPhaseMaster___c__DisplayClass11_0__GetIndividualityList_b__0__);
    sub_1C2D490(&QuestPhaseMaster___c__DisplayClass11_0_TypeInfo);
    byte_4C279CF = 1;
  }
  v5 = sub_1C2D6DC(QuestPhaseMaster___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  v6 = (System_Collections_Generic_HashSet_int__o *)sub_1C2D6DC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_56862832(
    v6,
    (System_Collections_Generic_IEnumerable_T__o *)questIdArray,
    (const MethodInfo_363A870 *)Method_System_Collections_Generic_HashSet_int___ctor___77923784);
  if ( !v5 )
    goto LABEL_53;
  *(_QWORD *)(v5 + 16) = v6;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)v6, v9, v10);
  v11 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  list = this->fields.list;
  v13 = *(System_Func_object__bool__o **)(v5 + 24);
  if ( !v13 )
  {
    v13 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_QuestPhaseEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v13,
      (Il2CppObject *)v5,
      Method_QuestPhaseMaster___c__DisplayClass11_0__GetIndividualityList_b__0__,
      0);
    *(_QWORD *)(v5 + 24) = v13;
    sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)v13, v14, v15);
  }
  v7 = System_Linq_Enumerable__Where_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)list,
         (System_Func_TSource__bool__o *)v13,
         (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_QuestPhaseEntity___);
  if ( !v7 )
    goto LABEL_53;
  klass = v7->klass;
  v17 = v7;
  v18 = *(unsigned __int16 *)&v7->klass->_2.rank;
  if ( *(_WORD *)&v7->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_QuestPhaseEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_QuestPhaseEntity__TypeInfo )
    {
      --v18;
      p_offset += 4;
      if ( !v18 )
        goto LABEL_11;
    }
    v20 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_11:
    v20 = sub_1C7DCA8(v7, System_Collections_Generic_IEnumerable_QuestPhaseEntity__TypeInfo, 0);
  }
  v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v20)(
          v17,
          *(_QWORD *)(v20 + 8));
  if ( !v22 )
    sub_1C2D6EC(0, v21);
  while ( 1 )
  {
    v23 = *(_QWORD *)v22;
    v24 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
    {
      v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v25 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_18;
      }
      v26 = v23 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_18:
      v26 = sub_1C7DCA8(v22, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v22, *(_QWORD *)(v26 + 8)) & 1) == 0 )
      break;
    v27 = *(_QWORD *)v22;
    v28 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
    {
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_QuestPhaseEntity__c **)v29 - 1) != System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_25;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_25:
      v30 = sub_1C7DCA8(v22, System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo, 0);
    }
    v31 = (QuestPhaseEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v22, *(_QWORD *)(v30 + 8));
    if ( !v31 )
      sub_1C2D6EC(0, v32);
    PrioredIndividuality = QuestPhaseEntity__GetPrioredIndividuality(v31, v32);
    v36 = PrioredIndividuality;
    if ( !PrioredIndividuality )
      sub_1C2D6EC(0, v34);
    max_length = PrioredIndividuality->max_length;
    if ( (int)max_length >= 1 )
    {
      v38 = 0;
      do
      {
        if ( v38 >= (unsigned int)max_length )
          sub_1C2D6F4(PrioredIndividuality, v34, v35);
        if ( !v11 )
          sub_1C2D6EC(PrioredIndividuality, v34);
        v39 = v36->m_Items[v38];
        PrioredIndividuality = (System_Int32_array *)System_Collections_Generic_List_int___Contains(
                                                       v11,
                                                       v39,
                                                       (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)PrioredIndividuality & 1) == 0 )
        {
          items = v11->fields._items;
          v41 = Method_System_Collections_Generic_List_int__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1C2D6EC(PrioredIndividuality, v34);
          size = v11->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v11,
              v39,
              *(const MethodInfo_376CB60 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
          }
          else
          {
            v11->fields._size = size + 1;
            items->m_Items[size] = v39;
          }
        }
        LODWORD(max_length) = v36->max_length;
        ++v38;
      }
      while ( (__int64)v38 < (int)max_length );
    }
  }
  v43 = *(_QWORD *)v22;
  v44 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
  {
    v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
    {
      --v44;
      v45 += 4;
      if ( !v44 )
        goto LABEL_44;
    }
    v46 = v43 + 16LL * *v45 + 312;
  }
  else
  {
LABEL_44:
    v46 = sub_1C7DCA8(v22, System_IDisposable_TypeInfo, 0);
  }
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v46)(
                                                              v22,
                                                              *(_QWORD *)(v46 + 8));
  if ( !v11 )
LABEL_53:
    sub_1C2D6EC(v7, v8);
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4C279D7 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C279D7 = 1;
  }
  entity = 0;
  if ( questId < 1 || !QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, v4) )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !entity )
    sub_1C2D6EC(0, v8);
  return QuestPhaseEntity__GetMapModelEntryAnimationName(entity, v8);
}


System_String_o *QuestPhaseMaster__GetMovieFolder(
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

  if ( (byte_4C279D1 & 1) == 0 )
  {
    sub_1C2D490(&QuestPhaseMaster_TypeInfo);
    byte_4C279D1 = 1;
  }
  entity = 0;
  v10 = QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, v4);
  result = 0;
  if ( v10 )
  {
    v12 = entity;
    v13 = QuestPhaseMaster_TypeInfo;
    if ( !QuestPhaseMaster_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestPhaseMaster_TypeInfo);
    if ( !v12 )
      sub_1C2D6EC(v13, v8);
    return QuestPhaseEntity__getScriptStr(v12, QuestPhaseMaster_TypeInfo->static_fields->MOVIE_QUEST_SCRIPT_STR, 0, v9);
  }
  return result;
}


int32_t QuestPhaseMaster__GetMoviePlayType(
        QuestPhaseMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  QuestPhaseEntity_o *Entity; // x0
  const MethodInfo *v8; // x3
  QuestPhaseEntity_o *v9; // x19
  QuestPhaseMaster_c *v10; // x0

  if ( (byte_4C279D2 & 1) == 0 )
  {
    sub_1C2D490(&QuestPhaseMaster_TypeInfo);
    byte_4C279D2 = 1;
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
  const MethodInfo *v15; // x3
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C279D3 & 1) == 0 )
  {
    sub_1C2D490(&SpecifiedSceneInfo_TypeInfo);
    byte_4C279D3 = 1;
  }
  entity = 0;
  v9 = QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, method);
  v10 = 0;
  if ( v9 )
  {
    v10 = sub_1C2D6DC(SpecifiedSceneInfo_TypeInfo);
    SpecifiedSceneInfo___ctor((SpecifiedSceneInfo_o *)v10, 0);
    if ( !v10
      || (*(_DWORD *)(v10 + 16) = eventId, (v11 = entity) == 0)
      || (*(_DWORD *)(v10 + 20) = QuestPhaseEntity__GetNextSceneId(entity, v12), (v11 = entity) == 0) )
    {
      sub_1C2D6EC(v11, v12);
    }
    NextSceneParam = QuestPhaseEntity__GetNextSceneParam(entity, v12);
    *(_QWORD *)(v10 + 24) = NextSceneParam;
    sub_1C2D434((CGThumbnailListItem_o *)(v10 + 24), (int32_t)NextSceneParam, v14, v15);
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

  if ( (byte_4C279D6 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_21467/*"materialPlayUseUserQuestRoute"*/);
    byte_4C279D6 = 1;
  }
  entity = 0;
  if ( !QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, v4) )
    return 0;
  if ( !entity )
    sub_1C2D6EC(0, v8);
  return QuestPhaseEntity__getScriptIntParam(entity, (System_String_o *)StringLiteral_21467/*"materialPlayUseUserQuestRoute"*/, 0, v9) == 1;
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

  if ( (byte_4C279D5 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_22525/*"overwriteEndScript"*/);
    byte_4C279D5 = 1;
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
        sub_1C2D6F4(List, v6, v7);
      List = (QuestPhaseEntity_array *)v9->m_Items[v11];
      if ( !List )
        break;
      List = (QuestPhaseEntity_array *)QuestPhaseEntity__getScriptObj(
                                         (QuestPhaseEntity_o *)List,
                                         (System_String_o *)StringLiteral_22525/*"overwriteEndScript"*/,
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
    sub_1C2D6EC(List, v6);
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


bool QuestPhaseMaster__IsMoviePhase(QuestPhaseMaster_o *this, int32_t questId, int32_t phase, const MethodInfo *method)
{
  QuestPhaseEntity_o *Entity; // x0
  const MethodInfo *v8; // x3
  QuestPhaseEntity_o *v9; // x19
  QuestPhaseMaster_c *v10; // x0

  if ( (byte_4C279D0 & 1) == 0 )
  {
    sub_1C2D490(&QuestPhaseMaster_TypeInfo);
    byte_4C279D0 = 1;
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
    LOBYTE(Entity) = QuestPhaseEntity__getScriptStr(v9, v10->static_fields->MOVIE_QUEST_SCRIPT_STR, 0, v8) != 0;
  }
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

  if ( (byte_4C279CA & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__TryGetEntity__);
    byte_4C279CA = 1;
  }
  PK = (Il2CppObject *)QuestPhaseEntity__CreatePK(questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__TryGetEntity__);
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
  const MethodInfo *v13; // x3
  System_Collections_Generic_List_object__o *v14; // x25
  Il2CppClass *v15; // x8
  _QWORD *v16; // x9
  __int64 klass_low; // x10
  void **v18; // x8
  System_Collections_Generic_List_object__o *v19; // x21
  int32_t v21; // [xsp+Ch] [xbp-74h]
  Il2CppObject *v22; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *value; // [xsp+18h] [xbp-68h] BYREF

  v3 = iQuestID;
  if ( (byte_4C279CD & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_QuestPhaseEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_QuestPhaseEntity__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TryGetValue__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___set_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestPhaseEntity__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestPhaseEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_QuestPhaseEntity__TypeInfo);
    byte_4C279CD = 1;
  }
  v22 = 0;
  value = 0;
  if ( !this->fields.isCached )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    v21 = v3;
    if ( !list )
      goto LABEL_26;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              list,
              (const MethodInfo_3321208 *)Method_System_Collections_ObjectModel_Collection_QuestPhaseEntity__get_Count__);
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
                 (const MethodInfo_3321298 *)Method_System_Collections_ObjectModel_Collection_QuestPhaseEntity__get_Item__);
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
                  (const MethodInfo_33E2A08 *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TryGetValue__) )
          {
            v14 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_QuestPhaseEntity__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v14,
              (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__);
            value = (Il2CppObject *)v14;
            list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.cachedQuestPahseEntityDict;
            if ( !list )
              break;
            System_Collections_Generic_Dictionary_int__object___set_Item(
              (System_Collections_Generic_Dictionary_int__object__o *)list,
              klass,
              (Il2CppObject *)v14,
              (const MethodInfo_33E1268 *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___set_Item__);
          }
          list = (System_Collections_ObjectModel_Collection_T__o *)value;
          if ( !value )
            break;
          v15 = value[1].klass;
          v16 = Method_System_Collections_Generic_List_QuestPhaseEntity__Add__;
          ++HIDWORD(value[1].monitor);
          if ( !v15 )
            break;
          klass_low = SLODWORD(list[1].klass);
          if ( (unsigned int)klass_low >= LODWORD(v15->_1.namespaze) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)list,
              v10,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &v15->_1.image + klass_low;
            LODWORD(list[1].klass) = klass_low + 1;
            v18[4] = v10;
            sub_1C2D434((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v10, v12, v13);
          }
        }
        if ( v7 == ++v8 )
          goto LABEL_19;
      }
LABEL_26:
      sub_1C2D6EC(list, *(_QWORD *)&iQuestID);
    }
LABEL_19:
    v3 = v21;
    this->fields.isCached = 1;
  }
  v19 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_QuestPhaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.cachedQuestPahseEntityDict;
  if ( !list )
    goto LABEL_26;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                                                             (System_Collections_Generic_Dictionary_int__object__o *)list,
                                                             v3,
                                                             &v22,
                                                             (const MethodInfo_33E2A08 *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TryGetValue__);
  if ( ((unsigned __int8)list & 1) != 0 )
  {
    if ( !v19 )
      goto LABEL_26;
    System_Collections_Generic_List_object___AddRange(
      v19,
      (System_Collections_Generic_IEnumerable_T__o *)v22,
      (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_QuestPhaseEntity__AddRange__);
  }
  else if ( !v19 )
  {
    goto LABEL_26;
  }
  return (QuestPhaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v19,
                                     (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__);
}


QuestPhaseEntity_array *QuestPhaseMaster__getList_42283088(
        QuestPhaseMaster_o *this,
        System_Int32_array *questIdList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 v6; // x1
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
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  const MethodInfo *v21; // x3
  int max_length; // w9
  __int64 v23; // x8
  int v24; // w10
  struct System_Object_array *items; // x9
  _QWORD *v26; // x10
  __int64 size; // x11
  Il2CppClass **v28; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0

  if ( (byte_4C279CE & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_QuestPhaseEntity__GetEnumerator__);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestPhaseEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_QuestPhaseEntity__TypeInfo);
    byte_4C279CE = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_QuestPhaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_44;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_QuestPhaseEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v8);
  while ( 1 )
  {
LABEL_5:
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
      v13 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v17 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    if ( !questIdList )
      sub_1C2D6EC(v18, v19);
    max_length = questIdList->max_length;
    if ( max_length >= 1 )
    {
      v23 = v18;
      v24 = 0;
      while ( 1 )
      {
        if ( max_length == v24 )
          sub_1C2D6F4(v18, v19, v20);
        if ( !v18 )
          sub_1C2D6EC(0, v19);
        if ( *(_DWORD *)(v18 + 16) == questIdList->m_Items[v24] )
          break;
        if ( max_length == ++v24 )
          goto LABEL_5;
      }
      if ( !v5 )
        sub_1C2D6EC(v18, v19);
      items = v5->fields._items;
      v26 = Method_System_Collections_Generic_List_QuestPhaseEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1C2D6EC(v18, v19);
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v18,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v23;
        sub_1C2D434((CGThumbnailListItem_o *)(v28 + 4), v23, v20, v21);
      }
    }
  }
  v29 = Enumerator->klass;
  v30 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v31 = &v29->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      --v30;
      v31 += 4;
      if ( !v30 )
        goto LABEL_35;
    }
    v32 = (__int64)&v29->vtable[*v31];
  }
  else
  {
LABEL_35:
    v32 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
                                                             Enumerator,
                                                             *(_QWORD *)(v32 + 8));
  if ( !v5 )
LABEL_44:
    sub_1C2D6EC(list, v6);
  return (QuestPhaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v5,
                                     (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__);
}


void QuestPhaseMaster___c__DisplayClass11_0___ctor(
        QuestPhaseMaster___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestPhaseMaster___c__DisplayClass11_0___GetIndividualityList_b__0(
        QuestPhaseMaster___c__DisplayClass11_0_o *this,
        QuestPhaseEntity_o *x,
        const MethodInfo *method)
{
  QuestPhaseMaster___c__DisplayClass11_0_o *v4; // x20

  v4 = this;
  if ( (byte_4C279D9 & 1) == 0 )
  {
    this = (QuestPhaseMaster___c__DisplayClass11_0_o *)sub_1C2D490(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_4C279D9 = 1;
  }
  if ( !x || (this = (QuestPhaseMaster___c__DisplayClass11_0_o *)v4->fields.hashQuestId) == 0 )
    sub_1C2D6EC(this, x);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.questId,
           (const MethodInfo_363AE74 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}