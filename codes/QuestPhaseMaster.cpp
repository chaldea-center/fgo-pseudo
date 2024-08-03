void __fastcall QuestPhaseMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w1
  struct QuestPhaseMaster_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FC93B & 1) == 0 )
  {
    sub_1B640C8(&QuestPhaseMaster_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_21446/*"movieFolder"*/, v4);
    sub_1B640C8(&StringLiteral_21447/*"moviePlayType"*/, v5);
    byte_49FC93B = 1;
  }
  QuestPhaseMaster_TypeInfo->static_fields->MOVIE_QUEST_SCRIPT_STR = (struct System_String_o *)StringLiteral_21446/*"movieFolder"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)QuestPhaseMaster_TypeInfo->static_fields,
    StringLiteral_21446/*"movieFolder"*/,
    v2,
    v3);
  v6 = StringLiteral_21447/*"moviePlayType"*/;
  static_fields = QuestPhaseMaster_TypeInfo->static_fields;
  static_fields->MOVIE_QUEST_SCRIPT_TYPE_STR = (struct System_String_o *)StringLiteral_21447/*"moviePlayType"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->MOVIE_QUEST_SCRIPT_TYPE_STR, v6, v8, v9);
}


void __fastcall QuestPhaseMaster___ctor(QuestPhaseMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_int__object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_49FC92E & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string___ctor__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity____ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TypeInfo, v5);
    byte_49FC92E = 1;
  }
  v6 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                 System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TypeInfo,
                                                                 method,
                                                                 v2);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v6,
    (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity____ctor__);
  *(_QWORD *)&this->fields.isCached = v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.isCached, (int32_t)v6, v7, v8);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    71,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string___ctor__);
}


void __fastcall QuestPhaseMaster__Clear(QuestPhaseMaster_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x0

  if ( (byte_49FC92F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___Clear__, method);
    byte_49FC92F = 1;
  }
  DataMasterBase__Clear((DataMasterBase_o *)this, 0LL);
  v3 = *(System_Collections_Generic_Dictionary_int__object__o **)&this->fields.isCached;
  if ( !v3 )
    sub_1B64324(0LL);
  System_Collections_Generic_Dictionary_int__object___Clear(
    v3,
    (const MethodInfo_3123B0C *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___Clear__);
  *((_BYTE *)&this->fields.revision + 4) = 0;
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
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
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
  __int64 methodPtr_low; // x11
  System_Collections_Generic_IEnumerable_TSource__o *SelectableQuests; // x0
  System_Int32_array *v26; // x22
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0

  if ( (byte_49FC937 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_1B640C8(&Method_System_Linq_Enumerable_Contains_int___, v7);
    sub_1B640C8(&System_IDisposable_TypeInfo, v8);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1B640C8(&QuestPhaseEntity_TypeInfo, v11);
    byte_49FC937 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B64324(0LL);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
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
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v20 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
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
      v21 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v22 = (QuestPhaseEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
                                  Enumerator,
                                  *(_QWORD *)(v21 + 8));
    if ( !v22
      || (methodPtr_low = LOBYTE(QuestPhaseEntity_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v22->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
      || (QuestPhaseEntity_c *)v22->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestPhaseEntity_TypeInfo )
    {
      sub_1B64324(v22);
    }
    if ( v22->fields.phase == phase )
    {
      SelectableQuests = (System_Collections_Generic_IEnumerable_TSource__o *)QuestPhaseEntity__GetSelectableQuests(
                                                                                v22,
                                                                                v23);
      v26 = (System_Int32_array *)SelectableQuests;
      if ( SelectableQuests )
      {
        if ( System_Linq_Enumerable__Contains_int_(
               SelectableQuests,
               questId,
               (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___) )
        {
          goto LABEL_26;
        }
      }
    }
  }
  v26 = 0LL;
LABEL_26:
  v27 = Enumerator->klass;
  v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v29 = &v27->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
    {
      --v28;
      v29 += 4;
      if ( !v28 )
        goto LABEL_30;
    }
    v30 = (__int64)&v27->vtable[*v29].method;
  }
  else
  {
LABEL_30:
    v30 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(Enumerator, *(_QWORD *)(v30 + 8));
  return v26;
}


// local variable allocation has failed, the output may be wrong!
QuestPhaseEntity_o *__fastcall QuestPhaseMaster__GetEntity(
        QuestPhaseMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FC92C & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__GetEntity__, *(_QWORD *)&questId);
    byte_49FC92C = 1;
  }
  PK = (Il2CppObject *)QuestPhaseEntity__CreatePK(questId, phase, *(const MethodInfo **)&phase);
  return (QuestPhaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_30D41FC *)Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__GetEntity__);
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
  __int64 v19; // x1
  __int64 v20; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_HashSet_int__o *v23; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_List_int__o *v29; // x19
  System_Collections_Generic_IEnumerable_TResult__o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  System_Func_object__bool__o *v33; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x20
  int32_t v35; // w2
  int32_t v36; // w3
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x20
  __int64 v39; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v42; // x20
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  __int64 v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  QuestPhaseEntity_o *v51; // x0
  const MethodInfo *v52; // x1
  System_Int32_array *PrioredIndividuality; // x0
  __int64 v54; // x1
  System_Int32_array *v55; // x21
  __int64 v56; // x8
  unsigned __int64 v57; // x28
  int32_t v58; // w22
  struct System_Int32_array *items; // x8
  _QWORD *v60; // x9
  __int64 size; // x10
  __int64 v62; // x8
  __int64 v63; // x9
  int *v64; // x10
  __int64 v65; // x0

  if ( (byte_49FC932 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_OfType_QuestPhaseEntity___, questIdArray);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_QuestPhaseEntity___, v5);
    sub_1B640C8(&System_Func_QuestPhaseEntity__bool__TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int___ctor___75637208, v7);
    sub_1B640C8(&System_Collections_Generic_HashSet_int__TypeInfo, v8);
    sub_1B640C8(&System_IDisposable_TypeInfo, v9);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_QuestPhaseEntity__TypeInfo, v10);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo, v11);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Contains__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v16);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v17);
    sub_1B640C8(&Method_QuestPhaseMaster___c__DisplayClass11_0__GetIndividualityList_b__0__, v18);
    sub_1B640C8(&QuestPhaseMaster___c__DisplayClass11_0_TypeInfo, v19);
    byte_49FC932 = 1;
  }
  v20 = sub_1B64314(QuestPhaseMaster___c__DisplayClass11_0_TypeInfo, questIdArray, method);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  v23 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v21,
                                                       v22);
  System_Collections_Generic_HashSet_int____ctor_53885596(
    v23,
    (System_Collections_Generic_IEnumerable_T__o *)questIdArray,
    (const MethodInfo_3363A9C *)Method_System_Collections_Generic_HashSet_int___ctor___75637208);
  if ( !v20 )
    goto LABEL_53;
  *(_QWORD *)(v20 + 16) = v23;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 16), (int32_t)v23, v25, v26);
  v29 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v27, v28);
  System_Collections_Generic_List_int____ctor(
    v29,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  v30 = System_Linq_Enumerable__OfType_object_(
          (System_Collections_IEnumerable_o *)this->fields.list,
          (const MethodInfo_2E62C20 *)Method_System_Linq_Enumerable_OfType_QuestPhaseEntity___);
  v33 = *(System_Func_object__bool__o **)(v20 + 24);
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)v30;
  if ( !v33 )
  {
    v33 = (System_Func_object__bool__o *)sub_1B64314(System_Func_QuestPhaseEntity__bool__TypeInfo, v31, v32);
    System_Func_object__bool____ctor(
      v33,
      (Il2CppObject *)v20,
      Method_QuestPhaseMaster___c__DisplayClass11_0__GetIndividualityList_b__0__,
      0LL);
    *(_QWORD *)(v20 + 24) = v33;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 24), (int32_t)v33, v35, v36);
  }
  v24 = System_Linq_Enumerable__Where_object_(
          v34,
          (System_Func_TSource__bool__o *)v33,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_QuestPhaseEntity___);
  if ( !v24 )
    goto LABEL_53;
  klass = v24->klass;
  v38 = v24;
  v39 = *(unsigned __int16 *)(&v24->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v24->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_QuestPhaseEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_QuestPhaseEntity__TypeInfo )
    {
      --v39;
      p_offset += 4;
      if ( !v39 )
        goto LABEL_11;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_11:
    p_method = sub_1BB60A8(v24, System_Collections_Generic_IEnumerable_QuestPhaseEntity__TypeInfo, 0LL);
  }
  v42 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v38,
          *(_QWORD *)(p_method + 8));
  if ( !v42 )
    sub_1B64324(0LL);
  while ( 1 )
  {
    v43 = *(_QWORD *)v42;
    v44 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
    {
      v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v45 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v44;
        v45 += 4;
        if ( !v44 )
          goto LABEL_18;
      }
      v46 = v43 + 16LL * *v45 + 312;
    }
    else
    {
LABEL_18:
      v46 = sub_1BB60A8(v42, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v42, *(_QWORD *)(v46 + 8)) & 1) == 0 )
      break;
    v47 = *(_QWORD *)v42;
    v48 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
    {
      v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_QuestPhaseEntity__c **)v49 - 1) != System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo )
      {
        --v48;
        v49 += 4;
        if ( !v48 )
          goto LABEL_25;
      }
      v50 = v47 + 16LL * *v49 + 312;
    }
    else
    {
LABEL_25:
      v50 = sub_1BB60A8(v42, System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo, 0LL);
    }
    v51 = (QuestPhaseEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v42, *(_QWORD *)(v50 + 8));
    if ( !v51 )
      sub_1B64324(0LL);
    PrioredIndividuality = QuestPhaseEntity__GetPrioredIndividuality(v51, v52);
    v55 = PrioredIndividuality;
    if ( !PrioredIndividuality )
      sub_1B64324(0LL);
    v56 = *(_QWORD *)&PrioredIndividuality->max_length;
    if ( (int)v56 >= 1 )
    {
      v57 = 0LL;
      do
      {
        if ( v57 >= (unsigned int)v56 )
          sub_1B6432C(PrioredIndividuality, v54);
        if ( !v29 )
          sub_1B64324(PrioredIndividuality);
        v58 = v55->m_Items[v57 + 1];
        PrioredIndividuality = (System_Int32_array *)System_Collections_Generic_List_int___Contains(
                                                       v29,
                                                       v58,
                                                       (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)PrioredIndividuality & 1) == 0 )
        {
          items = v29->fields._items;
          v60 = Method_System_Collections_Generic_List_int__Add__;
          ++v29->fields._version;
          if ( !items )
            sub_1B64324(PrioredIndividuality);
          size = v29->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v29,
              v58,
              *(const MethodInfo_348FEDC **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
          }
          else
          {
            v29->fields._size = size + 1;
            items->m_Items[size + 1] = v58;
          }
        }
        LODWORD(v56) = v55->max_length;
        ++v57;
      }
      while ( (__int64)v57 < (int)v56 );
    }
  }
  v62 = *(_QWORD *)v42;
  v63 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
  {
    v64 = (int *)(*(_QWORD *)(v62 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v64 - 1) != System_IDisposable_TypeInfo )
    {
      --v63;
      v64 += 4;
      if ( !v63 )
        goto LABEL_44;
    }
    v65 = v62 + 16LL * *v64 + 312;
  }
  else
  {
LABEL_44:
    v65 = sub_1BB60A8(v42, System_IDisposable_TypeInfo, 0LL);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v65)(
                                                               v42,
                                                               *(_QWORD *)(v65 + 8));
  if ( !v29 )
LABEL_53:
    sub_1B64324(v24);
  return System_Collections_Generic_List_int___ToArray(
           v29,
           (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_49FC93A & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, *(_QWORD *)&questId);
    byte_49FC93A = 1;
  }
  entity = 0LL;
  if ( questId < 1 || !QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, v4) )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !entity )
    sub_1B64324(0LL);
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
  const MethodInfo *v8; // x3
  bool v9; // w8
  System_String_o *result; // x0
  QuestPhaseEntity_o *v11; // x19
  QuestPhaseMaster_c *v12; // x0
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FC934 & 1) == 0 )
  {
    sub_1B640C8(&QuestPhaseMaster_TypeInfo, *(_QWORD *)&questId);
    byte_49FC934 = 1;
  }
  entity = 0LL;
  v9 = QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, v4);
  result = 0LL;
  if ( v9 )
  {
    v11 = entity;
    v12 = QuestPhaseMaster_TypeInfo;
    if ( !QuestPhaseMaster_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestPhaseMaster_TypeInfo);
    if ( !v11 )
      sub_1B64324(v12);
    return QuestPhaseEntity__getScriptStr(
             v11,
             QuestPhaseMaster_TypeInfo->static_fields->MOVIE_QUEST_SCRIPT_STR,
             0LL,
             v8);
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

  if ( (byte_49FC935 & 1) == 0 )
  {
    sub_1B640C8(&QuestPhaseMaster_TypeInfo, *(_QWORD *)&questId);
    byte_49FC935 = 1;
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
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x20
  QuestPhaseEntity_o *v13; // x0
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1
  System_String_array *NextSceneParam; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49FC936 & 1) == 0 )
  {
    sub_1B640C8(&SpecifiedSceneInfo_TypeInfo, *(_QWORD *)&eventId);
    byte_49FC936 = 1;
  }
  entity = 0LL;
  v9 = QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, method);
  v12 = 0LL;
  if ( v9 )
  {
    v12 = sub_1B64314(SpecifiedSceneInfo_TypeInfo, v10, v11);
    SpecifiedSceneInfo___ctor((SpecifiedSceneInfo_o *)v12, 0LL);
    if ( !v12
      || (*(_DWORD *)(v12 + 16) = eventId, (v13 = entity) == 0LL)
      || (*(_DWORD *)(v12 + 20) = QuestPhaseEntity__GetNextSceneId(entity, v14), (v13 = entity) == 0LL) )
    {
      sub_1B64324(v13);
    }
    NextSceneParam = QuestPhaseEntity__GetNextSceneParam(entity, v15);
    *(_QWORD *)(v12 + 24) = NextSceneParam;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 24), (int32_t)NextSceneParam, v17, v18);
  }
  return (SpecifiedSceneInfo_o *)v12;
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
  const MethodInfo *v8; // x3
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FC939 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_21251/*"materialPlayUseUserQuestRoute"*/, *(_QWORD *)&questId);
    byte_49FC939 = 1;
  }
  entity = 0LL;
  if ( !QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, v4) )
    return 0;
  if ( !entity )
    sub_1B64324(0LL);
  return QuestPhaseEntity__getScriptIntParam(entity, (System_String_o *)StringLiteral_21251/*"materialPlayUseUserQuestRoute"*/, 0, v8) == 1;
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

  if ( (byte_49FC938 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_22297/*"overwriteEndScript"*/, *(_QWORD *)&questId);
    byte_49FC938 = 1;
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
        sub_1B6432C(List, v6);
      List = (QuestPhaseEntity_array *)v9->m_Items[v11];
      if ( !List )
        break;
      List = (QuestPhaseEntity_array *)QuestPhaseEntity__getScriptObj(
                                         (QuestPhaseEntity_o *)List,
                                         (System_String_o *)StringLiteral_22297/*"overwriteEndScript"*/,
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
    sub_1B64324(List);
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

  if ( (byte_49FC933 & 1) == 0 )
  {
    sub_1B640C8(&QuestPhaseMaster_TypeInfo, *(_QWORD *)&questId);
    byte_49FC933 = 1;
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

  if ( (byte_49FC92D & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__TryGetEntity__, entity);
    byte_49FC92D = 1;
  }
  PK = (Il2CppObject *)QuestPhaseEntity__CreatePK(questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
QuestPhaseEntity_array *__fastcall QuestPhaseMaster__getList(
        QuestPhaseMaster_o *this,
        int32_t iQuestID,
        const MethodInfo *method)
{
  int32_t v3; // w19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_QuestPhaseEntity__c **v14; // x28
  const MethodInfo_34ACEA0 **v15; // x25
  const MethodInfo_3125110 **v16; // x26
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  int32_t Count; // w0
  QuestPhaseEntity_c **v19; // x27
  void **v20; // x19
  int32_t v21; // w21
  int32_t v22; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v24; // x23
  __int64 methodPtr_low; // x10
  int32_t klass; // w24
  __int64 v27; // x1
  __int64 v28; // x2
  int32_t v29; // w3
  QuestPhaseEntity_c **v30; // x29
  void **v31; // x27
  const MethodInfo_3125110 **v32; // x19
  System_Collections_Generic_List_QuestPhaseEntity__c **v33; // x26
  System_Collections_Generic_List_object__o *v34; // x0
  const MethodInfo_34ACEA0 *v35; // x1
  const MethodInfo_34ACEA0 **v36; // x28
  Il2CppObject *v37; // x25
  Il2CppClass *v38; // x8
  _QWORD *v39; // x9
  __int64 klass_low; // x10
  void **v41; // x8
  System_Collections_Generic_List_object__o *v42; // x21
  int32_t v44; // [xsp+Ch] [xbp-74h]
  Il2CppObject *v45; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *value; // [xsp+18h] [xbp-68h] BYREF

  v3 = iQuestID;
  if ( (byte_49FC930 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&iQuestID);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TryGetValue__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___set_Item__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestPhaseEntity__AddRange__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestPhaseEntity__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__, v11);
    sub_1B640C8(&System_Collections_Generic_List_QuestPhaseEntity__TypeInfo, v12);
    sub_1B640C8(&QuestPhaseEntity_TypeInfo, v13);
    byte_49FC930 = 1;
  }
  v45 = 0LL;
  value = 0LL;
  v14 = &System_Collections_Generic_List_QuestPhaseEntity__TypeInfo;
  v15 = (const MethodInfo_34ACEA0 **)&Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__;
  v16 = (const MethodInfo_3125110 **)&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TryGetValue__;
  if ( !*((_BYTE *)&this->fields.revision + 4) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    v44 = v3;
    if ( !list )
      goto LABEL_28;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              list,
              (const MethodInfo_3070B08 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
    if ( Count >= 1 )
    {
      v19 = &QuestPhaseEntity_TypeInfo;
      v20 = &Method_System_Collections_Generic_List_QuestPhaseEntity__Add__;
      v21 = Count;
      v22 = 0;
      while ( 1 )
      {
        list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
        if ( !list )
          break;
        Item = System_Collections_ObjectModel_Collection_object___get_Item(
                 list,
                 v22,
                 (const MethodInfo_3070B98 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
        if ( Item )
        {
          v24 = Item;
          methodPtr_low = LOBYTE((*v19)->vtable._0_Equals.methodPtr);
          if ( LOBYTE(Item->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
            && (QuestPhaseEntity_c *)Item->klass->_2.typeHierarchy[methodPtr_low - 1] == *v19 )
          {
            list = *(System_Collections_ObjectModel_Collection_T__o **)&this->fields.isCached;
            if ( !list )
              break;
            klass = (int32_t)v24[1].klass;
            if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                    (System_Collections_Generic_Dictionary_int__object__o *)list,
                    klass,
                    &value,
                    *v16) )
            {
              v30 = v19;
              v31 = v20;
              v32 = v16;
              v33 = v14;
              v34 = (System_Collections_Generic_List_object__o *)sub_1B64314(*v14, v27, v28);
              v35 = *v15;
              v36 = v15;
              v37 = (Il2CppObject *)v34;
              System_Collections_Generic_List_object____ctor(v34, v35);
              value = v37;
              list = *(System_Collections_ObjectModel_Collection_T__o **)&this->fields.isCached;
              if ( !list )
                break;
              System_Collections_Generic_Dictionary_int__object___set_Item(
                (System_Collections_Generic_Dictionary_int__object__o *)list,
                klass,
                v37,
                (const MethodInfo_3123970 *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___set_Item__);
              v15 = v36;
              v14 = v33;
              v16 = v32;
              v20 = v31;
              v19 = v30;
            }
            list = (System_Collections_ObjectModel_Collection_T__o *)value;
            if ( !value )
              break;
            v38 = value[1].klass;
            v39 = *v20;
            ++HIDWORD(value[1].monitor);
            if ( !v38 )
              break;
            klass_low = SLODWORD(list[1].klass);
            if ( (unsigned int)klass_low >= LODWORD(v38->_1.namespaze) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)list,
                v24,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
            }
            else
            {
              v41 = &v38->_1.image + klass_low;
              LODWORD(list[1].klass) = klass_low + 1;
              v41[4] = v24;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v41 + 4), (int32_t)v24, v28, v29);
            }
          }
        }
        if ( v21 == ++v22 )
          goto LABEL_21;
      }
LABEL_28:
      sub_1B64324(list);
    }
LABEL_21:
    v3 = v44;
    *((_BYTE *)&this->fields.revision + 4) = 1;
  }
  v42 = (System_Collections_Generic_List_object__o *)sub_1B64314(*v14, *(_QWORD *)&iQuestID, method);
  System_Collections_Generic_List_object____ctor(v42, *v15);
  list = *(System_Collections_ObjectModel_Collection_T__o **)&this->fields.isCached;
  if ( !list )
    goto LABEL_28;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                                                             (System_Collections_Generic_Dictionary_int__object__o *)list,
                                                             v3,
                                                             &v45,
                                                             *v16);
  if ( ((unsigned __int8)list & 1) != 0 )
  {
    if ( !v42 )
      goto LABEL_28;
    System_Collections_Generic_List_object___AddRange(
      v42,
      (System_Collections_Generic_IEnumerable_T__o *)v45,
      (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_QuestPhaseEntity__AddRange__);
  }
  else if ( !v42 )
  {
    goto LABEL_28;
  }
  return (QuestPhaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v42,
                                     (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__);
}


QuestPhaseEntity_array *__fastcall QuestPhaseMaster__getList_39187424(
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
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *v13; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x1
  int32_t v26; // w2
  int32_t v27; // w3
  __int64 methodPtr_low; // x10
  __int64 v29; // x8
  signed int max_length; // w9
  int v31; // w10
  struct System_Object_array *items; // x9
  _QWORD *v33; // x10
  __int64 size; // x11
  Il2CppClass **v35; // x0
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0

  if ( (byte_49FC931 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, questIdList);
    sub_1B640C8(&System_IDisposable_TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestPhaseEntity__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_QuestPhaseEntity__TypeInfo, v11);
    sub_1B640C8(&QuestPhaseEntity_TypeInfo, v12);
    byte_49FC931 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_QuestPhaseEntity__TypeInfo,
                                                       questIdList,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_51;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
  while ( 1 )
  {
LABEL_5:
    klass = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v22 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_16;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_16:
      v23 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
            Enumerator,
            *(_QWORD *)(v23 + 8));
    if ( v24
      && (methodPtr_low = LOBYTE(QuestPhaseEntity_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)v24 + 304LL) >= (unsigned int)methodPtr_low) )
    {
      if ( *(QuestPhaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v24 + 200LL) + 8 * methodPtr_low - 8) == QuestPhaseEntity_TypeInfo )
        v29 = v24;
      else
        v29 = 0LL;
      if ( !questIdList )
LABEL_48:
        sub_1B64324(v24);
    }
    else
    {
      v29 = 0LL;
      if ( !questIdList )
        goto LABEL_48;
    }
    max_length = questIdList->max_length;
    if ( max_length >= 1 )
    {
      v31 = 0;
      while ( 1 )
      {
        if ( max_length == v31 )
          sub_1B6432C(v24, v25);
        if ( !v29 )
          sub_1B64324(v24);
        if ( *(_DWORD *)(v29 + 16) == questIdList->m_Items[v31 + 1] )
          break;
        if ( max_length == ++v31 )
          goto LABEL_5;
      }
      if ( !v13 )
        sub_1B64324(v24);
      items = v13->fields._items;
      v33 = Method_System_Collections_Generic_List_QuestPhaseEntity__Add__;
      ++v13->fields._version;
      if ( !items )
        sub_1B64324(v24);
      size = v13->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v13,
          (Il2CppObject *)v29,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &items->obj.klass + size;
        v13->fields._size = size + 1;
        v35[4] = (Il2CppClass *)v29;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v35 + 4), v29, v26, v27);
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
        goto LABEL_42;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_42:
    v39 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(
                                                             Enumerator,
                                                             *(_QWORD *)(v39 + 8));
  if ( !v13 )
LABEL_51:
    sub_1B64324(list);
  return (QuestPhaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v13,
                                     (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__);
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
  if ( (byte_49FC93C & 1) == 0 )
  {
    this = (QuestPhaseMaster___c__DisplayClass11_0_o *)sub_1B640C8(
                                                         &Method_System_Collections_Generic_HashSet_int__Contains__,
                                                         x);
    byte_49FC93C = 1;
  }
  if ( !x || (this = (QuestPhaseMaster___c__DisplayClass11_0_o *)v4->fields.hashQuestId) == 0LL )
    sub_1B64324(this);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.questId,
           (const MethodInfo_33640A0 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}