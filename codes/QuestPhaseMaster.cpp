void __fastcall QuestPhaseMaster___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  int32_t v3; // w1
  struct QuestPhaseMaster_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A5B69B & 1) == 0 )
  {
    sub_1B885B0(&QuestPhaseMaster_TypeInfo);
    sub_1B885B0(&StringLiteral_21528/*"movieFolder"*/);
    sub_1B885B0(&StringLiteral_21529/*"moviePlayType"*/);
    byte_4A5B69B = 1;
  }
  QuestPhaseMaster_TypeInfo->static_fields->MOVIE_QUEST_SCRIPT_STR = (struct System_String_o *)StringLiteral_21528/*"movieFolder"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)QuestPhaseMaster_TypeInfo->static_fields,
    StringLiteral_21528/*"movieFolder"*/,
    v1,
    v2);
  v3 = StringLiteral_21529/*"moviePlayType"*/;
  static_fields = QuestPhaseMaster_TypeInfo->static_fields;
  static_fields->MOVIE_QUEST_SCRIPT_TYPE_STR = (struct System_String_o *)StringLiteral_21529/*"moviePlayType"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->MOVIE_QUEST_SCRIPT_TYPE_STR, v3, v5, v6);
}


void __fastcall QuestPhaseMaster___ctor(QuestPhaseMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5B68E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity____ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TypeInfo);
    byte_4A5B68E = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity____ctor__);
  *(_QWORD *)&this->fields.isCached = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.isCached, (int32_t)v3, v4, v5);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    71,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string___ctor__);
}


void __fastcall QuestPhaseMaster__Clear(QuestPhaseMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__object__o *v4; // x0

  if ( (byte_4A5B68F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___Clear__);
    byte_4A5B68F = 1;
  }
  DataMasterBase__Clear((DataMasterBase_o *)this, 0LL);
  v4 = *(System_Collections_Generic_Dictionary_int__object__o **)&this->fields.isCached;
  if ( !v4 )
    sub_1B8880C(0LL, v3);
  System_Collections_Generic_Dictionary_int__object___Clear(
    v4,
    (const MethodInfo_316DAE0 *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___Clear__);
  *((_BYTE *)&this->fields.revision + 4) = 0;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall QuestPhaseMaster__GetBranchQuestIds(
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
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  QuestPhaseEntity_o *v18; // x0
  const MethodInfo *v19; // x1
  __int64 methodPtr_low; // x11
  System_Collections_Generic_IEnumerable_TSource__o *SelectableQuests; // x0
  System_Int32_array *v22; // x22
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0

  if ( (byte_4A5B697 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&QuestPhaseEntity_TypeInfo);
    byte_4A5B697 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v8);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_16:
      v17 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (QuestPhaseEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
                                  Enumerator,
                                  *(_QWORD *)(v17 + 8));
    if ( !v18
      || (methodPtr_low = LOBYTE(QuestPhaseEntity_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v18->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
      || (QuestPhaseEntity_c *)v18->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestPhaseEntity_TypeInfo )
    {
      sub_1B8880C(v18, v19);
    }
    if ( v18->fields.phase == phase )
    {
      SelectableQuests = (System_Collections_Generic_IEnumerable_TSource__o *)QuestPhaseEntity__GetSelectableQuests(
                                                                                v18,
                                                                                v19);
      v22 = (System_Int32_array *)SelectableQuests;
      if ( SelectableQuests )
      {
        if ( System_Linq_Enumerable__Contains_int_(
               SelectableQuests,
               questId,
               (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___) )
        {
          goto LABEL_26;
        }
      }
    }
  }
  v22 = 0LL;
LABEL_26:
  v23 = Enumerator->klass;
  v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      --v24;
      v25 += 4;
      if ( !v24 )
        goto LABEL_30;
    }
    v26 = (__int64)&v23->vtable[*v25].method;
  }
  else
  {
LABEL_30:
    v26 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
  return v22;
}


// local variable allocation has failed, the output may be wrong!
QuestPhaseEntity_o *__fastcall QuestPhaseMaster__GetEntity(
        QuestPhaseMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5B68C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__GetEntity__);
    byte_4A5B68C = 1;
  }
  PK = (Il2CppObject *)QuestPhaseEntity__CreatePK(questId, phase, *(const MethodInfo **)&phase);
  return (QuestPhaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_311DC8C *)Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__GetEntity__);
}


System_Int32_array *__fastcall QuestPhaseMaster__GetIndividualityList(
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
  System_Collections_Generic_List_int__o *v11; // x19
  System_Collections_Generic_IEnumerable_TResult__o *v12; // x0
  System_Func_object__bool__o *v13; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x20
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v22; // x1
  __int64 v23; // x20
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  QuestPhaseEntity_o *v32; // x0
  const MethodInfo *v33; // x1
  System_Int32_array *PrioredIndividuality; // x0
  __int64 v35; // x1
  System_Int32_array *v36; // x21
  __int64 v37; // x8
  unsigned __int64 v38; // x28
  int32_t v39; // w22
  struct System_Int32_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0

  if ( (byte_4A5B692 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_OfType_QuestPhaseEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_QuestPhaseEntity___);
    sub_1B885B0(&System_Func_QuestPhaseEntity__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int___ctor___76016464);
    sub_1B885B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_QuestPhaseEntity__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&Method_QuestPhaseMaster___c__DisplayClass11_0__GetIndividualityList_b__0__);
    sub_1B885B0(&QuestPhaseMaster___c__DisplayClass11_0_TypeInfo);
    byte_4A5B692 = 1;
  }
  v5 = sub_1B887FC(QuestPhaseMaster___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  v6 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_54209644(
    v6,
    (System_Collections_Generic_IEnumerable_T__o *)questIdArray,
    (const MethodInfo_33B2C6C *)Method_System_Collections_Generic_HashSet_int___ctor___76016464);
  if ( !v5 )
    goto LABEL_53;
  *(_QWORD *)(v5 + 16) = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)v6, v9, v10);
  v11 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  v12 = System_Linq_Enumerable__OfType_object_(
          (System_Collections_IEnumerable_o *)this->fields.list,
          (const MethodInfo_2EA998C *)Method_System_Linq_Enumerable_OfType_QuestPhaseEntity___);
  v13 = *(System_Func_object__bool__o **)(v5 + 24);
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)v12;
  if ( !v13 )
  {
    v13 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_QuestPhaseEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v13,
      (Il2CppObject *)v5,
      Method_QuestPhaseMaster___c__DisplayClass11_0__GetIndividualityList_b__0__,
      0LL);
    *(_QWORD *)(v5 + 24) = v13;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)v13, v15, v16);
  }
  v7 = System_Linq_Enumerable__Where_object_(
         v14,
         (System_Func_TSource__bool__o *)v13,
         (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_QuestPhaseEntity___);
  if ( !v7 )
    goto LABEL_53;
  klass = v7->klass;
  v18 = v7;
  v19 = *(unsigned __int16 *)(&v7->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v7->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_QuestPhaseEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_QuestPhaseEntity__TypeInfo )
    {
      --v19;
      p_offset += 4;
      if ( !v19 )
        goto LABEL_11;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_11:
    p_method = sub_1BDA590(v7, System_Collections_Generic_IEnumerable_QuestPhaseEntity__TypeInfo, 0LL);
  }
  v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v18,
          *(_QWORD *)(p_method + 8));
  if ( !v23 )
    sub_1B8880C(0LL, v22);
  while ( 1 )
  {
    v24 = *(_QWORD *)v23;
    v25 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
    {
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v26 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_18;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_18:
      v27 = sub_1BDA590(v23, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8)) & 1) == 0 )
      break;
    v28 = *(_QWORD *)v23;
    v29 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
    {
      v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_QuestPhaseEntity__c **)v30 - 1) != System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_25;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_25:
      v31 = sub_1BDA590(v23, System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo, 0LL);
    }
    v32 = (QuestPhaseEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v23, *(_QWORD *)(v31 + 8));
    if ( !v32 )
      sub_1B8880C(0LL, v33);
    PrioredIndividuality = QuestPhaseEntity__GetPrioredIndividuality(v32, v33);
    v36 = PrioredIndividuality;
    if ( !PrioredIndividuality )
      sub_1B8880C(0LL, v35);
    v37 = *(_QWORD *)&PrioredIndividuality->max_length;
    if ( (int)v37 >= 1 )
    {
      v38 = 0LL;
      do
      {
        if ( v38 >= (unsigned int)v37 )
          sub_1B88814(PrioredIndividuality, v35);
        if ( !v11 )
          sub_1B8880C(PrioredIndividuality, v35);
        v39 = v36->m_Items[v38 + 1];
        PrioredIndividuality = (System_Int32_array *)System_Collections_Generic_List_int___Contains(
                                                       v11,
                                                       v39,
                                                       (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)PrioredIndividuality & 1) == 0 )
        {
          items = v11->fields._items;
          v41 = Method_System_Collections_Generic_List_int__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1B8880C(PrioredIndividuality, v35);
          size = v11->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v11,
              v39,
              *(const MethodInfo_34E0810 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
          }
          else
          {
            v11->fields._size = size + 1;
            items->m_Items[size + 1] = v39;
          }
        }
        LODWORD(v37) = v36->max_length;
        ++v38;
      }
      while ( (__int64)v38 < (int)v37 );
    }
  }
  v43 = *(_QWORD *)v23;
  v44 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
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
    v46 = sub_1BDA590(v23, System_IDisposable_TypeInfo, 0LL);
  }
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v46)(
                                                              v23,
                                                              *(_QWORD *)(v46 + 8));
  if ( !v11 )
LABEL_53:
    sub_1B8880C(v7, v8);
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_String_o *__fastcall QuestPhaseMaster__GetMapModelEntryAnimationName(
        QuestPhaseMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  const MethodInfo *v8; // x1
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5B69A & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5B69A = 1;
  }
  entity = 0LL;
  if ( questId < 1 || !QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, v4) )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !entity )
    sub_1B8880C(0LL, v8);
  return QuestPhaseEntity__GetMapModelEntryAnimationName(entity, v8);
}


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

  if ( (byte_4A5B694 & 1) == 0 )
  {
    sub_1B885B0(&QuestPhaseMaster_TypeInfo);
    byte_4A5B694 = 1;
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
      sub_1B8880C(v13, v8);
    return QuestPhaseEntity__getScriptStr(
             v12,
             QuestPhaseMaster_TypeInfo->static_fields->MOVIE_QUEST_SCRIPT_STR,
             0LL,
             v9);
  }
  return result;
}


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

  if ( (byte_4A5B695 & 1) == 0 )
  {
    sub_1B885B0(&QuestPhaseMaster_TypeInfo);
    byte_4A5B695 = 1;
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
  int32_t v15; // w3
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5B696 & 1) == 0 )
  {
    sub_1B885B0(&SpecifiedSceneInfo_TypeInfo);
    byte_4A5B696 = 1;
  }
  entity = 0LL;
  v9 = QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, method);
  v10 = 0LL;
  if ( v9 )
  {
    v10 = sub_1B887FC(SpecifiedSceneInfo_TypeInfo);
    SpecifiedSceneInfo___ctor((SpecifiedSceneInfo_o *)v10, 0LL);
    if ( !v10
      || (*(_DWORD *)(v10 + 16) = eventId, (v11 = entity) == 0LL)
      || (*(_DWORD *)(v10 + 20) = QuestPhaseEntity__GetNextSceneId(entity, v12), (v11 = entity) == 0LL) )
    {
      sub_1B8880C(v11, v12);
    }
    NextSceneParam = QuestPhaseEntity__GetNextSceneParam(entity, v12);
    *(_QWORD *)(v10 + 24) = NextSceneParam;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 24), (int32_t)NextSceneParam, v14, v15);
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

  if ( (byte_4A5B699 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_21333/*"materialPlayUseUserQuestRoute"*/);
    byte_4A5B699 = 1;
  }
  entity = 0LL;
  if ( !QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, v4) )
    return 0;
  if ( !entity )
    sub_1B8880C(0LL, v8);
  return QuestPhaseEntity__getScriptIntParam(entity, (System_String_o *)StringLiteral_21333/*"materialPlayUseUserQuestRoute"*/, 0, v9) == 1;
}


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

  if ( (byte_4A5B698 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_22385/*"overwriteEndScript"*/);
    byte_4A5B698 = 1;
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
        sub_1B88814(List, v6);
      List = (QuestPhaseEntity_array *)v9->m_Items[v11];
      if ( !List )
        break;
      List = (QuestPhaseEntity_array *)QuestPhaseEntity__getScriptObj(
                                         (QuestPhaseEntity_o *)List,
                                         (System_String_o *)StringLiteral_22385/*"overwriteEndScript"*/,
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
    sub_1B8880C(List, v6);
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

  if ( (byte_4A5B693 & 1) == 0 )
  {
    sub_1B885B0(&QuestPhaseMaster_TypeInfo);
    byte_4A5B693 = 1;
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

  if ( (byte_4A5B68D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__TryGetEntity__);
    byte_4A5B68D = 1;
  }
  PK = (Il2CppObject *)QuestPhaseEntity__CreatePK(questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
QuestPhaseEntity_array *__fastcall QuestPhaseMaster__getList(
        QuestPhaseMaster_o *this,
        int32_t iQuestID,
        const MethodInfo *method)
{
  int32_t v3; // w19
  System_Collections_Generic_List_QuestPhaseEntity__c **v5; // x28
  const MethodInfo_34FD000 **v6; // x25
  const MethodInfo_316F0E4 **v7; // x26
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  QuestPhaseEntity_c **v10; // x27
  void **v11; // x19
  int32_t v12; // w21
  int32_t v13; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v15; // x23
  __int64 methodPtr_low; // x10
  int32_t klass; // w24
  int32_t v18; // w2
  int32_t v19; // w3
  QuestPhaseEntity_c **v20; // x29
  void **v21; // x27
  const MethodInfo_316F0E4 **v22; // x19
  System_Collections_Generic_List_QuestPhaseEntity__c **v23; // x26
  System_Collections_Generic_List_object__o *v24; // x0
  const MethodInfo_34FD000 *v25; // x1
  const MethodInfo_34FD000 **v26; // x28
  Il2CppObject *v27; // x25
  Il2CppClass *v28; // x8
  _QWORD *v29; // x9
  __int64 klass_low; // x10
  void **v31; // x8
  System_Collections_Generic_List_object__o *v32; // x21
  int32_t v34; // [xsp+Ch] [xbp-74h]
  Il2CppObject *v35; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *value; // [xsp+18h] [xbp-68h] BYREF

  v3 = iQuestID;
  if ( (byte_4A5B690 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TryGetValue__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___set_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestPhaseEntity__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestPhaseEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_QuestPhaseEntity__TypeInfo);
    sub_1B885B0(&QuestPhaseEntity_TypeInfo);
    byte_4A5B690 = 1;
  }
  v35 = 0LL;
  value = 0LL;
  v5 = &System_Collections_Generic_List_QuestPhaseEntity__TypeInfo;
  v6 = (const MethodInfo_34FD000 **)&Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__;
  v7 = (const MethodInfo_316F0E4 **)&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TryGetValue__;
  if ( !*((_BYTE *)&this->fields.revision + 4) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    v34 = v3;
    if ( !list )
      goto LABEL_28;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              list,
              (const MethodInfo_30BA580 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v10 = &QuestPhaseEntity_TypeInfo;
      v11 = &Method_System_Collections_Generic_List_QuestPhaseEntity__Add__;
      v12 = Count;
      v13 = 0;
      while ( 1 )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        if ( !list )
          break;
        Item = System_Collections_ObjectModel_Collection_object___get_Item(
                 list,
                 v13,
                 (const MethodInfo_30BA610 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( Item )
        {
          v15 = Item;
          methodPtr_low = LOBYTE((*v10)->vtable._0_Equals.methodPtr);
          if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
            && (QuestPhaseEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == *v10 )
          {
            list = *(System_Collections_ObjectModel_Collection_T__o **)&this->fields.isCached;
            if ( !list )
              break;
            klass = (int32_t)v15[1].klass;
            if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                    (System_Collections_Generic_Dictionary_int__object__o *)list,
                    klass,
                    &value,
                    *v7) )
            {
              v20 = v10;
              v21 = v11;
              v22 = v7;
              v23 = v5;
              v24 = (System_Collections_Generic_List_object__o *)sub_1B887FC(*v5);
              v25 = *v6;
              v26 = v6;
              v27 = (Il2CppObject *)v24;
              System_Collections_Generic_List_object____ctor(v24, v25);
              value = v27;
              list = *(System_Collections_ObjectModel_Collection_T__o **)&this->fields.isCached;
              if ( !list )
                break;
              System_Collections_Generic_Dictionary_int__object___set_Item(
                (System_Collections_Generic_Dictionary_int__object__o *)list,
                klass,
                v27,
                (const MethodInfo_316D944 *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___set_Item__);
              v6 = v26;
              v5 = v23;
              v7 = v22;
              v11 = v21;
              v10 = v20;
            }
            list = (System_Collections_ObjectModel_Collection_T__o *)value;
            if ( !value )
              break;
            v28 = value[1].klass;
            v29 = *v11;
            ++HIDWORD(value[1].monitor);
            if ( !v28 )
              break;
            klass_low = SLODWORD(list[1].klass);
            if ( (unsigned int)klass_low >= LODWORD(v28->_1.namespaze) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)list,
                v15,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
            }
            else
            {
              v31 = &v28->_1.image + klass_low;
              LODWORD(list[1].klass) = klass_low + 1;
              v31[4] = v15;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)v15, v18, v19);
            }
          }
        }
        if ( v12 == ++v13 )
          goto LABEL_21;
      }
LABEL_28:
      sub_1B8880C(list, *(_QWORD *)&iQuestID);
    }
LABEL_21:
    v3 = v34;
    *((_BYTE *)&this->fields.revision + 4) = 1;
  }
  v32 = (System_Collections_Generic_List_object__o *)sub_1B887FC(*v5);
  System_Collections_Generic_List_object____ctor(v32, *v6);
  list = *(System_Collections_ObjectModel_Collection_T__o **)&this->fields.isCached;
  if ( !list )
    goto LABEL_28;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                                                             (System_Collections_Generic_Dictionary_int__object__o *)list,
                                                             v3,
                                                             &v35,
                                                             *v7);
  if ( ((unsigned __int8)list & 1) != 0 )
  {
    if ( !v32 )
      goto LABEL_28;
    System_Collections_Generic_List_object___AddRange(
      v32,
      (System_Collections_Generic_IEnumerable_T__o *)v35,
      (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_QuestPhaseEntity__AddRange__);
  }
  else if ( !v32 )
  {
    goto LABEL_28;
  }
  return (QuestPhaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v32,
                                     (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__);
}


QuestPhaseEntity_array *__fastcall QuestPhaseMaster__getList_39511436(
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
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v14; // x8
  __int64 v15; // x9
  int32_t *v16; // x10
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 methodPtr_low; // x10
  __int64 v23; // x8
  signed int max_length; // w9
  int v25; // w10
  struct System_Object_array *items; // x9
  _QWORD *v27; // x10
  __int64 size; // x11
  Il2CppClass **v29; // x0
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0

  if ( (byte_4A5B691 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestPhaseEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_QuestPhaseEntity__TypeInfo);
    sub_1B885B0(&QuestPhaseEntity_TypeInfo);
    byte_4A5B691 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestPhaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_51;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v8);
  while ( 1 )
  {
LABEL_5:
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v16 = &v14->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v16 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v15;
        v16 += 4;
        if ( !v15 )
          goto LABEL_16;
      }
      v17 = (__int64)&v14->vtable[*v16].method;
    }
    else
    {
LABEL_16:
      v17 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    if ( v18
      && (methodPtr_low = LOBYTE(QuestPhaseEntity_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)v18 + 304LL) >= (unsigned int)methodPtr_low) )
    {
      if ( *(QuestPhaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v18 + 200LL) + 8 * methodPtr_low - 8) == QuestPhaseEntity_TypeInfo )
        v23 = v18;
      else
        v23 = 0LL;
      if ( !questIdList )
LABEL_48:
        sub_1B8880C(v18, v19);
    }
    else
    {
      v23 = 0LL;
      if ( !questIdList )
        goto LABEL_48;
    }
    max_length = questIdList->max_length;
    if ( max_length >= 1 )
    {
      v25 = 0;
      while ( 1 )
      {
        if ( max_length == v25 )
          sub_1B88814(v18, v19);
        if ( !v23 )
          sub_1B8880C(v18, v19);
        if ( *(_DWORD *)(v23 + 16) == questIdList->m_Items[v25 + 1] )
          break;
        if ( max_length == ++v25 )
          goto LABEL_5;
      }
      if ( !v5 )
        sub_1B8880C(v18, v19);
      items = v5->fields._items;
      v27 = Method_System_Collections_Generic_List_QuestPhaseEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1B8880C(v18, v19);
      size = v5->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v23,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v23;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v29 + 4), v23, v20, v21);
      }
    }
  }
  v30 = Enumerator->klass;
  v31 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v32 = &v30->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_42;
    }
    v33 = (__int64)&v30->vtable[*v32].method;
  }
  else
  {
LABEL_42:
    v33 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(
                                                             Enumerator,
                                                             *(_QWORD *)(v33 + 8));
  if ( !v5 )
LABEL_51:
    sub_1B8880C(list, v6);
  return (QuestPhaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v5,
                                     (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__);
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
  if ( (byte_4A5B69C & 1) == 0 )
  {
    this = (QuestPhaseMaster___c__DisplayClass11_0_o *)sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_4A5B69C = 1;
  }
  if ( !x || (this = (QuestPhaseMaster___c__DisplayClass11_0_o *)v4->fields.hashQuestId) == 0LL )
    sub_1B8880C(this, x);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.questId,
           (const MethodInfo_33B3270 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}