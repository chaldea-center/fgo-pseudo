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

  if ( (byte_4A703A7 & 1) == 0 )
  {
    sub_1B90010(&QuestPhaseMaster_TypeInfo, v1);
    sub_1B90010(&StringLiteral_21557/*"movieFolder"*/, v4);
    sub_1B90010(&StringLiteral_21558/*"moviePlayType"*/, v5);
    byte_4A703A7 = 1;
  }
  QuestPhaseMaster_TypeInfo->static_fields->MOVIE_QUEST_SCRIPT_STR = (struct System_String_o *)StringLiteral_21557/*"movieFolder"*/;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)QuestPhaseMaster_TypeInfo->static_fields,
    StringLiteral_21557/*"movieFolder"*/,
    v2,
    v3);
  v6 = StringLiteral_21558/*"moviePlayType"*/;
  static_fields = QuestPhaseMaster_TypeInfo->static_fields;
  static_fields->MOVIE_QUEST_SCRIPT_TYPE_STR = (struct System_String_o *)StringLiteral_21558/*"moviePlayType"*/;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->MOVIE_QUEST_SCRIPT_TYPE_STR, v6, v8, v9);
}


void __fastcall QuestPhaseMaster___ctor(QuestPhaseMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_int__object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A7039A & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string___ctor__, method);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity____ctor__, v3);
    sub_1B90010(&System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TypeInfo, v4);
    byte_4A7039A = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B9025C(System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v5,
    (const MethodInfo_317BBF8 *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity____ctor__);
  *(_QWORD *)&this->fields.isCached = v5;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.isCached, (int32_t)v5, v6, v7);
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    71,
    (const MethodInfo_312C8C0 *)Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string___ctor__);
}


void __fastcall QuestPhaseMaster__Clear(QuestPhaseMaster_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_int__object__o *v4; // x0

  if ( (byte_4A7039B & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___Clear__, method);
    byte_4A7039B = 1;
  }
  DataMasterBase__Clear((DataMasterBase_o *)this, 0LL);
  v4 = *(System_Collections_Generic_Dictionary_int__object__o **)&this->fields.isCached;
  if ( !v4 )
    sub_1B9026C(0LL, v3);
  System_Collections_Generic_Dictionary_int__object___Clear(
    v4,
    (const MethodInfo_317C754 *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___Clear__);
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
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  QuestPhaseEntity_o *v23; // x0
  const MethodInfo *v24; // x1
  __int64 methodPtr_low; // x11
  System_Collections_Generic_IEnumerable_TSource__o *SelectableQuests; // x0
  System_Int32_array *v27; // x22
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0

  if ( (byte_4A703A3 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_1B90010(&Method_System_Linq_Enumerable_Contains_int___, v7);
    sub_1B90010(&System_IDisposable_TypeInfo, v8);
    sub_1B90010(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9);
    sub_1B90010(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1B90010(&QuestPhaseEntity_TypeInfo, v11);
    byte_4A703A3 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B9026C(0LL, *(_QWORD *)&questId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30C97CC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B9026C(0LL, v13);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BE1FF0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v21 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_16;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_16:
      v22 = sub_1BE1FF0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v23 = (QuestPhaseEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                                  Enumerator,
                                  *(_QWORD *)(v22 + 8));
    if ( !v23
      || (methodPtr_low = LOBYTE(QuestPhaseEntity_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v23->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
      || (QuestPhaseEntity_c *)v23->klass->_2.typeHierarchy[methodPtr_low - 1] != QuestPhaseEntity_TypeInfo )
    {
      sub_1B9026C(v23, v24);
    }
    if ( v23->fields.phase == phase )
    {
      SelectableQuests = (System_Collections_Generic_IEnumerable_TSource__o *)QuestPhaseEntity__GetSelectableQuests(
                                                                                v23,
                                                                                v24);
      v27 = (System_Int32_array *)SelectableQuests;
      if ( SelectableQuests )
      {
        if ( System_Linq_Enumerable__Contains_int_(
               SelectableQuests,
               questId,
               (const MethodInfo_2EA8328 *)Method_System_Linq_Enumerable_Contains_int___) )
        {
          goto LABEL_26;
        }
      }
    }
  }
  v27 = 0LL;
LABEL_26:
  v28 = Enumerator->klass;
  v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_30;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_30:
    v31 = sub_1BE1FF0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  return v27;
}


// local variable allocation has failed, the output may be wrong!
QuestPhaseEntity_o *__fastcall QuestPhaseMaster__GetEntity(
        QuestPhaseMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A70398 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__GetEntity__, *(_QWORD *)&questId);
    byte_4A70398 = 1;
  }
  PK = (Il2CppObject *)QuestPhaseEntity__CreatePK(questId, phase, *(const MethodInfo **)&phase);
  return (QuestPhaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_312C900 *)Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__GetEntity__);
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
  System_Collections_Generic_HashSet_int__o *v21; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  System_Collections_Generic_List_int__o *v26; // x19
  System_Collections_Generic_IEnumerable_TResult__o *v27; // x0
  System_Func_object__bool__o *v28; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x20
  int32_t v30; // w2
  int32_t v31; // w3
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x20
  __int64 v34; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v37; // x1
  __int64 v38; // x20
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  QuestPhaseEntity_o *v47; // x0
  const MethodInfo *v48; // x1
  System_Int32_array *PrioredIndividuality; // x0
  __int64 v50; // x1
  System_Int32_array *v51; // x21
  __int64 v52; // x8
  unsigned __int64 v53; // x28
  int32_t v54; // w22
  struct System_Int32_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  __int64 v58; // x8
  __int64 v59; // x9
  int *v60; // x10
  __int64 v61; // x0

  if ( (byte_4A7039E & 1) == 0 )
  {
    sub_1B90010(&Method_System_Linq_Enumerable_OfType_QuestPhaseEntity___, questIdArray);
    sub_1B90010(&Method_System_Linq_Enumerable_Where_QuestPhaseEntity___, v5);
    sub_1B90010(&System_Func_QuestPhaseEntity__bool__TypeInfo, v6);
    sub_1B90010(&Method_System_Collections_Generic_HashSet_int___ctor___76100600, v7);
    sub_1B90010(&System_Collections_Generic_HashSet_int__TypeInfo, v8);
    sub_1B90010(&System_IDisposable_TypeInfo, v9);
    sub_1B90010(&System_Collections_Generic_IEnumerable_QuestPhaseEntity__TypeInfo, v10);
    sub_1B90010(&System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo, v11);
    sub_1B90010(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1B90010(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_1B90010(&Method_System_Collections_Generic_List_int__Contains__, v14);
    sub_1B90010(&Method_System_Collections_Generic_List_int__ToArray__, v15);
    sub_1B90010(&Method_System_Collections_Generic_List_int___ctor__, v16);
    sub_1B90010(&System_Collections_Generic_List_int__TypeInfo, v17);
    sub_1B90010(&Method_QuestPhaseMaster___c__DisplayClass11_0__GetIndividualityList_b__0__, v18);
    sub_1B90010(&QuestPhaseMaster___c__DisplayClass11_0_TypeInfo, v19);
    byte_4A7039E = 1;
  }
  v20 = sub_1B9025C(QuestPhaseMaster___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  v21 = (System_Collections_Generic_HashSet_int__o *)sub_1B9025C(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_54285492(
    v21,
    (System_Collections_Generic_IEnumerable_T__o *)questIdArray,
    (const MethodInfo_33C54B4 *)Method_System_Collections_Generic_HashSet_int___ctor___76100600);
  if ( !v20 )
    goto LABEL_53;
  *(_QWORD *)(v20 + 16) = v21;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v20 + 16), (int32_t)v21, v24, v25);
  v26 = (System_Collections_Generic_List_int__o *)sub_1B9025C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v26,
    (const MethodInfo_34F3148 *)Method_System_Collections_Generic_List_int___ctor__);
  v27 = System_Linq_Enumerable__OfType_object_(
          (System_Collections_IEnumerable_o *)this->fields.list,
          (const MethodInfo_2EB82A0 *)Method_System_Linq_Enumerable_OfType_QuestPhaseEntity___);
  v28 = *(System_Func_object__bool__o **)(v20 + 24);
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)v27;
  if ( !v28 )
  {
    v28 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_QuestPhaseEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v28,
      (Il2CppObject *)v20,
      Method_QuestPhaseMaster___c__DisplayClass11_0__GetIndividualityList_b__0__,
      0LL);
    *(_QWORD *)(v20 + 24) = v28;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v20 + 24), (int32_t)v28, v30, v31);
  }
  v22 = System_Linq_Enumerable__Where_object_(
          v29,
          (System_Func_TSource__bool__o *)v28,
          (const MethodInfo_2ECC92C *)Method_System_Linq_Enumerable_Where_QuestPhaseEntity___);
  if ( !v22 )
    goto LABEL_53;
  klass = v22->klass;
  v33 = v22;
  v34 = *(unsigned __int16 *)(&v22->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v22->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_QuestPhaseEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_QuestPhaseEntity__TypeInfo )
    {
      --v34;
      p_offset += 4;
      if ( !v34 )
        goto LABEL_11;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_11:
    p_method = sub_1BE1FF0(v22, System_Collections_Generic_IEnumerable_QuestPhaseEntity__TypeInfo, 0LL);
  }
  v38 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v33,
          *(_QWORD *)(p_method + 8));
  if ( !v38 )
    sub_1B9026C(0LL, v37);
  while ( 1 )
  {
    v39 = *(_QWORD *)v38;
    v40 = *(unsigned __int16 *)(*(_QWORD *)v38 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v38 + 302LL) )
    {
      v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v41 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_18;
      }
      v42 = v39 + 16LL * *v41 + 312;
    }
    else
    {
LABEL_18:
      v42 = sub_1BE1FF0(v38, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v38, *(_QWORD *)(v42 + 8)) & 1) == 0 )
      break;
    v43 = *(_QWORD *)v38;
    v44 = *(unsigned __int16 *)(*(_QWORD *)v38 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v38 + 302LL) )
    {
      v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_QuestPhaseEntity__c **)v45 - 1) != System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo )
      {
        --v44;
        v45 += 4;
        if ( !v44 )
          goto LABEL_25;
      }
      v46 = v43 + 16LL * *v45 + 312;
    }
    else
    {
LABEL_25:
      v46 = sub_1BE1FF0(v38, System_Collections_Generic_IEnumerator_QuestPhaseEntity__TypeInfo, 0LL);
    }
    v47 = (QuestPhaseEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v38, *(_QWORD *)(v46 + 8));
    if ( !v47 )
      sub_1B9026C(0LL, v48);
    PrioredIndividuality = QuestPhaseEntity__GetPrioredIndividuality(v47, v48);
    v51 = PrioredIndividuality;
    if ( !PrioredIndividuality )
      sub_1B9026C(0LL, v50);
    v52 = *(_QWORD *)&PrioredIndividuality->max_length;
    if ( (int)v52 >= 1 )
    {
      v53 = 0LL;
      do
      {
        if ( v53 >= (unsigned int)v52 )
          sub_1B90274(PrioredIndividuality, v50);
        if ( !v26 )
          sub_1B9026C(PrioredIndividuality, v50);
        v54 = v51->m_Items[v53 + 1];
        PrioredIndividuality = (System_Int32_array *)System_Collections_Generic_List_int___Contains(
                                                       v26,
                                                       v54,
                                                       (const MethodInfo_34F3D14 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)PrioredIndividuality & 1) == 0 )
        {
          items = v26->fields._items;
          v56 = Method_System_Collections_Generic_List_int__Add__;
          ++v26->fields._version;
          if ( !items )
            sub_1B9026C(PrioredIndividuality, v50);
          size = v26->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v26,
              v54,
              *(const MethodInfo_34F399C **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
          }
          else
          {
            v26->fields._size = size + 1;
            items->m_Items[size + 1] = v54;
          }
        }
        LODWORD(v52) = v51->max_length;
        ++v53;
      }
      while ( (__int64)v53 < (int)v52 );
    }
  }
  v58 = *(_QWORD *)v38;
  v59 = *(unsigned __int16 *)(*(_QWORD *)v38 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v38 + 302LL) )
  {
    v60 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v60 - 1) != System_IDisposable_TypeInfo )
    {
      --v59;
      v60 += 4;
      if ( !v59 )
        goto LABEL_44;
    }
    v61 = v58 + 16LL * *v60 + 312;
  }
  else
  {
LABEL_44:
    v61 = sub_1BE1FF0(v38, System_IDisposable_TypeInfo, 0LL);
  }
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v61)(
                                                               v38,
                                                               *(_QWORD *)(v61 + 8));
  if ( !v26 )
LABEL_53:
    sub_1B9026C(v22, v23);
  return System_Collections_Generic_List_int___ToArray(
           v26,
           (const MethodInfo_34F5454 *)Method_System_Collections_Generic_List_int__ToArray__);
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

  if ( (byte_4A703A6 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_1/*""*/, *(_QWORD *)&questId);
    byte_4A703A6 = 1;
  }
  entity = 0LL;
  if ( questId < 1 || !QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, v4) )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !entity )
    sub_1B9026C(0LL, v8);
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

  if ( (byte_4A703A0 & 1) == 0 )
  {
    sub_1B90010(&QuestPhaseMaster_TypeInfo, *(_QWORD *)&questId);
    byte_4A703A0 = 1;
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
      sub_1B9026C(v13, v8);
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

  if ( (byte_4A703A1 & 1) == 0 )
  {
    sub_1B90010(&QuestPhaseMaster_TypeInfo, *(_QWORD *)&questId);
    byte_4A703A1 = 1;
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
  int32_t v15; // w3
  QuestPhaseEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A703A2 & 1) == 0 )
  {
    sub_1B90010(&SpecifiedSceneInfo_TypeInfo, *(_QWORD *)&eventId);
    byte_4A703A2 = 1;
  }
  entity = 0LL;
  v9 = QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, method);
  v10 = 0LL;
  if ( v9 )
  {
    v10 = sub_1B9025C(SpecifiedSceneInfo_TypeInfo);
    SpecifiedSceneInfo___ctor((SpecifiedSceneInfo_o *)v10, 0LL);
    if ( !v10
      || (*(_DWORD *)(v10 + 16) = eventId, (v11 = entity) == 0LL)
      || (*(_DWORD *)(v10 + 20) = QuestPhaseEntity__GetNextSceneId(entity, v12), (v11 = entity) == 0LL) )
    {
      sub_1B9026C(v11, v12);
    }
    NextSceneParam = QuestPhaseEntity__GetNextSceneParam(entity, v12);
    *(_QWORD *)(v10 + 24) = NextSceneParam;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v10 + 24), (int32_t)NextSceneParam, v14, v15);
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

  if ( (byte_4A703A5 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_21362/*"materialPlayUseUserQuestRoute"*/, *(_QWORD *)&questId);
    byte_4A703A5 = 1;
  }
  entity = 0LL;
  if ( !QuestPhaseMaster__TryGetEntity(this, &entity, questId, phase, v4) )
    return 0;
  if ( !entity )
    sub_1B9026C(0LL, v8);
  return QuestPhaseEntity__getScriptIntParam(entity, (System_String_o *)StringLiteral_21362/*"materialPlayUseUserQuestRoute"*/, 0, v9) == 1;
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

  if ( (byte_4A703A4 & 1) == 0 )
  {
    sub_1B90010(&StringLiteral_22418/*"overwriteEndScript"*/, *(_QWORD *)&questId);
    byte_4A703A4 = 1;
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
        sub_1B90274(List, v6);
      List = (QuestPhaseEntity_array *)v9->m_Items[v11];
      if ( !List )
        break;
      List = (QuestPhaseEntity_array *)QuestPhaseEntity__getScriptObj(
                                         (QuestPhaseEntity_o *)List,
                                         (System_String_o *)StringLiteral_22418/*"overwriteEndScript"*/,
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
    sub_1B9026C(List, v6);
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

  if ( (byte_4A7039F & 1) == 0 )
  {
    sub_1B90010(&QuestPhaseMaster_TypeInfo, *(_QWORD *)&questId);
    byte_4A7039F = 1;
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

  if ( (byte_4A70399 & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__TryGetEntity__, entity);
    byte_4A70399 = 1;
  }
  PK = (Il2CppObject *)QuestPhaseEntity__CreatePK(questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_312C950 *)Method_DataMasterBase_QuestPhaseMaster__QuestPhaseEntity__string__TryGetEntity__);
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
  const MethodInfo_351018C **v15; // x25
  const MethodInfo_317DD58 **v16; // x26
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
  int32_t v27; // w2
  int32_t v28; // w3
  QuestPhaseEntity_c **v29; // x29
  void **v30; // x27
  const MethodInfo_317DD58 **v31; // x19
  System_Collections_Generic_List_QuestPhaseEntity__c **v32; // x26
  System_Collections_Generic_List_object__o *v33; // x0
  const MethodInfo_351018C *v34; // x1
  const MethodInfo_351018C **v35; // x28
  Il2CppObject *v36; // x25
  Il2CppClass *v37; // x8
  _QWORD *v38; // x9
  __int64 klass_low; // x10
  void **v40; // x8
  System_Collections_Generic_List_object__o *v41; // x21
  int32_t v43; // [xsp+Ch] [xbp-74h]
  Il2CppObject *v44; // [xsp+10h] [xbp-70h] BYREF
  Il2CppObject *value; // [xsp+18h] [xbp-68h] BYREF

  v3 = iQuestID;
  if ( (byte_4A7039C & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__, *(_QWORD *)&iQuestID);
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__, v5);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TryGetValue__, v6);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___set_Item__, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_QuestPhaseEntity__AddRange__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_QuestPhaseEntity__Add__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__, v10);
    sub_1B90010(&Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__, v11);
    sub_1B90010(&System_Collections_Generic_List_QuestPhaseEntity__TypeInfo, v12);
    sub_1B90010(&QuestPhaseEntity_TypeInfo, v13);
    byte_4A7039C = 1;
  }
  v44 = 0LL;
  value = 0LL;
  v14 = &System_Collections_Generic_List_QuestPhaseEntity__TypeInfo;
  v15 = (const MethodInfo_351018C **)&Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__;
  v16 = (const MethodInfo_317DD58 **)&Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___TryGetValue__;
  if ( !*((_BYTE *)&this->fields.revision + 4) )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    v43 = v3;
    if ( !list )
      goto LABEL_28;
    Count = System_Collections_ObjectModel_Collection_object___get_Count(
              list,
              (const MethodInfo_30C91F4 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Count__);
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
                 (const MethodInfo_30C9284 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__get_Item__);
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
              v29 = v19;
              v30 = v20;
              v31 = v16;
              v32 = v14;
              v33 = (System_Collections_Generic_List_object__o *)sub_1B9025C(*v14);
              v34 = *v15;
              v35 = v15;
              v36 = (Il2CppObject *)v33;
              System_Collections_Generic_List_object____ctor(v33, v34);
              value = v36;
              list = *(System_Collections_ObjectModel_Collection_T__o **)&this->fields.isCached;
              if ( !list )
                break;
              System_Collections_Generic_Dictionary_int__object___set_Item(
                (System_Collections_Generic_Dictionary_int__object__o *)list,
                klass,
                v36,
                (const MethodInfo_317C5B8 *)Method_System_Collections_Generic_Dictionary_int__List_QuestPhaseEntity___set_Item__);
              v15 = v35;
              v14 = v32;
              v16 = v31;
              v20 = v30;
              v19 = v29;
            }
            list = (System_Collections_ObjectModel_Collection_T__o *)value;
            if ( !value )
              break;
            v37 = value[1].klass;
            v38 = *v20;
            ++HIDWORD(value[1].monitor);
            if ( !v37 )
              break;
            klass_low = SLODWORD(list[1].klass);
            if ( (unsigned int)klass_low >= LODWORD(v37->_1.namespaze) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)list,
                v24,
                *(const MethodInfo_35109C0 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
            }
            else
            {
              v40 = &v37->_1.image + klass_low;
              LODWORD(list[1].klass) = klass_low + 1;
              v40[4] = v24;
              sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v40 + 4), (int32_t)v24, v27, v28);
            }
          }
        }
        if ( v21 == ++v22 )
          goto LABEL_21;
      }
LABEL_28:
      sub_1B9026C(list, *(_QWORD *)&iQuestID);
    }
LABEL_21:
    v3 = v43;
    *((_BYTE *)&this->fields.revision + 4) = 1;
  }
  v41 = (System_Collections_Generic_List_object__o *)sub_1B9025C(*v14);
  System_Collections_Generic_List_object____ctor(v41, *v15);
  list = *(System_Collections_ObjectModel_Collection_T__o **)&this->fields.isCached;
  if ( !list )
    goto LABEL_28;
  list = (System_Collections_ObjectModel_Collection_T__o *)System_Collections_Generic_Dictionary_int__object___TryGetValue(
                                                             (System_Collections_Generic_Dictionary_int__object__o *)list,
                                                             v3,
                                                             &v44,
                                                             *v16);
  if ( ((unsigned __int8)list & 1) != 0 )
  {
    if ( !v41 )
      goto LABEL_28;
    System_Collections_Generic_List_object___AddRange(
      v41,
      (System_Collections_Generic_IEnumerable_T__o *)v44,
      (const MethodInfo_3510BCC *)Method_System_Collections_Generic_List_QuestPhaseEntity__AddRange__);
  }
  else if ( !v41 )
  {
    goto LABEL_28;
  }
  return (QuestPhaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v41,
                                     (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__);
}


QuestPhaseEntity_array *__fastcall QuestPhaseMaster__getList_39564844(
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
  __int64 v14; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v22; // x8
  __int64 v23; // x9
  int32_t *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  __int64 methodPtr_low; // x10
  __int64 v31; // x8
  signed int max_length; // w9
  int v33; // w10
  struct System_Object_array *items; // x9
  _QWORD *v35; // x10
  __int64 size; // x11
  Il2CppClass **v37; // x0
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  __int64 v39; // x9
  int32_t *v40; // x10
  __int64 v41; // x0

  if ( (byte_4A7039D & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, questIdList);
    sub_1B90010(&System_IDisposable_TypeInfo, v5);
    sub_1B90010(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1B90010(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B90010(&Method_System_Collections_Generic_List_QuestPhaseEntity__Add__, v8);
    sub_1B90010(&Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__, v9);
    sub_1B90010(&Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__, v10);
    sub_1B90010(&System_Collections_Generic_List_QuestPhaseEntity__TypeInfo, v11);
    sub_1B90010(&QuestPhaseEntity_TypeInfo, v12);
    byte_4A7039D = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_QuestPhaseEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_QuestPhaseEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_51;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30C97CC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B9026C(0LL, v16);
  while ( 1 )
  {
LABEL_5:
    klass = Enumerator->klass;
    v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        p_offset += 4;
        if ( !v19 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1BE1FF0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v22 = Enumerator->klass;
    v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v24 = &v22->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v24 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_16;
      }
      v25 = (__int64)&v22->vtable[*v24].method;
    }
    else
    {
LABEL_16:
      v25 = sub_1BE1FF0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v25)(
            Enumerator,
            *(_QWORD *)(v25 + 8));
    if ( v26
      && (methodPtr_low = LOBYTE(QuestPhaseEntity_TypeInfo->vtable._0_Equals.methodPtr),
          *(unsigned __int8 *)(*(_QWORD *)v26 + 304LL) >= (unsigned int)methodPtr_low) )
    {
      if ( *(QuestPhaseEntity_c **)(*(_QWORD *)(*(_QWORD *)v26 + 200LL) + 8 * methodPtr_low - 8) == QuestPhaseEntity_TypeInfo )
        v31 = v26;
      else
        v31 = 0LL;
      if ( !questIdList )
LABEL_48:
        sub_1B9026C(v26, v27);
    }
    else
    {
      v31 = 0LL;
      if ( !questIdList )
        goto LABEL_48;
    }
    max_length = questIdList->max_length;
    if ( max_length >= 1 )
    {
      v33 = 0;
      while ( 1 )
      {
        if ( max_length == v33 )
          sub_1B90274(v26, v27);
        if ( !v31 )
          sub_1B9026C(v26, v27);
        if ( *(_DWORD *)(v31 + 16) == questIdList->m_Items[v33 + 1] )
          break;
        if ( max_length == ++v33 )
          goto LABEL_5;
      }
      if ( !v13 )
        sub_1B9026C(v26, v27);
      items = v13->fields._items;
      v35 = Method_System_Collections_Generic_List_QuestPhaseEntity__Add__;
      ++v13->fields._version;
      if ( !items )
        sub_1B9026C(v26, v27);
      size = v13->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v13,
          (Il2CppObject *)v31,
          *(const MethodInfo_35109C0 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = &items->obj.klass + size;
        v13->fields._size = size + 1;
        v37[4] = (Il2CppClass *)v31;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v37 + 4), v31, v28, v29);
      }
    }
  }
  v38 = Enumerator->klass;
  v39 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v40 = &v38->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      --v39;
      v40 += 4;
      if ( !v39 )
        goto LABEL_42;
    }
    v41 = (__int64)&v38->vtable[*v40].method;
  }
  else
  {
LABEL_42:
    v41 = sub_1BE1FF0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(
                                                             Enumerator,
                                                             *(_QWORD *)(v41 + 8));
  if ( !v13 )
LABEL_51:
    sub_1B9026C(list, v14);
  return (QuestPhaseEntity_array *)System_Collections_Generic_List_object___ToArray(
                                     v13,
                                     (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_QuestPhaseEntity__ToArray__);
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
  if ( (byte_4A703A8 & 1) == 0 )
  {
    this = (QuestPhaseMaster___c__DisplayClass11_0_o *)sub_1B90010(
                                                         &Method_System_Collections_Generic_HashSet_int__Contains__,
                                                         x);
    byte_4A703A8 = 1;
  }
  if ( !x || (this = (QuestPhaseMaster___c__DisplayClass11_0_o *)v4->fields.hashQuestId) == 0LL )
    sub_1B9026C(this, x);
  return System_Collections_Generic_HashSet_int___Contains(
           (System_Collections_Generic_HashSet_int__o *)this,
           x->fields.questId,
           (const MethodInfo_33C5AB8 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}