void __fastcall QuestDateRangeMaster___ctor(QuestDateRangeMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B16652 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_QuestDateRangeMaster__QuestDateRangeEntity__string___ctor__, method, v2);
    byte_4B16652 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    284,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_QuestDateRangeMaster__QuestDateRangeEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestDateRangeEntity_o *__fastcall QuestDateRangeMaster__GetEntity(
        QuestDateRangeMaster_o *this,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B16650 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_QuestDateRangeMaster__QuestDateRangeEntity__string__GetEntity__,
      *(_QWORD *)&id,
      *(_QWORD *)&idx);
    byte_4B16650 = 1;
  }
  PK = (Il2CppObject *)QuestDateRangeEntity__CreatePK(id, idx, *(const MethodInfo **)&idx);
  return (QuestDateRangeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_31B3198 *)Method_DataMasterBase_QuestDateRangeMaster__QuestDateRangeEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestDateRangeEntity__o *__fastcall QuestDateRangeMaster__GetQuestDateRangeEntityList(
        QuestDateRangeMaster_o *this,
        int32_t questDateRangeId,
        const MethodInfo *method)
{
  __int64 v3; // x3
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
  System_Collections_Generic_List_object__o *v28; // x19
  __int64 v29; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v31; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v34; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0
  __int64 v41; // x0
  __int64 v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x8
  QuestDateRangeEntity_c *v50; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v53; // x10
  __int64 size; // x11
  Il2CppClass **v55; // x0
  System_Collections_Generic_IEnumerator_T__c *v56; // x8
  __int64 v57; // x9
  int32_t *v58; // x10
  __int64 v59; // x0
  __int64 v60; // x2
  __int64 v61; // x3
  QuestDateRangeMaster___c_c *v62; // x8
  System_Comparison_T__o *_9__3_0; // x20
  Il2CppObject *v64; // x21
  struct QuestDateRangeMaster___c_StaticFields *static_fields; // x0
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7

  if ( (byte_4B16653 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&questDateRangeId,
      method);
    sub_1BCA7E0(&System_Comparison_QuestDateRangeEntity__TypeInfo, v6, v7);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestDateRangeEntity__Add__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestDateRangeEntity__Sort__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_QuestDateRangeEntity___ctor__, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_List_QuestDateRangeEntity__TypeInfo, v20, v21);
    sub_1BCA7E0(&QuestDateRangeEntity_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_QuestDateRangeMaster___c__GetQuestDateRangeEntityList_b__3_0__, v24, v25);
    sub_1BCA7E0(&QuestDateRangeMaster___c_TypeInfo, v26, v27);
    byte_4B16653 = 1;
  }
  v28 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_QuestDateRangeEntity__TypeInfo,
                                                       *(_QWORD *)&questDateRangeId,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v28,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_QuestDateRangeEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_45;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v31);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v34 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v34;
        p_offset += 4;
        if ( !v34 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v37 = Enumerator->klass;
    v38 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v39 = &v37->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v39 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_16;
      }
      v40 = (__int64)&v37->vtable[*v39].method;
    }
    else
    {
LABEL_16:
      v40 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v41 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(
            Enumerator,
            *(_QWORD *)(v40 + 8));
    v49 = v41;
    if ( !v41 )
      goto LABEL_42;
    v50 = QuestDateRangeEntity_TypeInfo;
    methodPtr_low = LOBYTE(QuestDateRangeEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v41 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestDateRangeEntity_c **)(*(_QWORD *)(*(_QWORD *)v41 + 200LL) + 8 * methodPtr_low - 8) != QuestDateRangeEntity_TypeInfo )
    {
      sub_1BCACFC(v41);
LABEL_42:
      sub_1BCAA3C(v41, v42);
    }
    if ( *(_DWORD *)(v41 + 16) == questDateRangeId )
    {
      if ( !v28 )
        sub_1BCAA3C(v41, QuestDateRangeEntity_TypeInfo);
      items = v28->fields._items;
      v53 = Method_System_Collections_Generic_List_QuestDateRangeEntity__Add__;
      ++v28->fields._version;
      if ( !items )
        sub_1BCAA3C(v41, v50);
      size = v28->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v28,
          (Il2CppObject *)v41,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
      }
      else
      {
        v55 = &items->obj.klass + size;
        v28->fields._size = size + 1;
        v55[4] = (Il2CppClass *)v49;
        sub_1BCA784((PartyOrganizationUtility_o *)(v55 + 4), v49, v43, v44, v45, v46, v47, v48);
      }
    }
  }
  v56 = Enumerator->klass;
  v57 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v58 = &v56->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v58 - 1) != System_IDisposable_TypeInfo )
    {
      --v57;
      v58 += 4;
      if ( !v57 )
        goto LABEL_31;
    }
    v59 = (__int64)&v56->vtable[*v58].method;
  }
  else
  {
LABEL_31:
    v59 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v59)(
                                                             Enumerator,
                                                             *(_QWORD *)(v59 + 8));
  v62 = QuestDateRangeMaster___c_TypeInfo;
  if ( !QuestDateRangeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestDateRangeMaster___c_TypeInfo, v29);
    v62 = QuestDateRangeMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Comparison_T__o *)v62->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v62->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v62, v29);
      v62 = QuestDateRangeMaster___c_TypeInfo;
    }
    v64 = (Il2CppObject *)v62->static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_QuestDateRangeEntity__TypeInfo, v29, v60, v61);
    System_Comparison_object____ctor(
      _9__3_0,
      v64,
      Method_QuestDateRangeMaster___c__GetQuestDateRangeEntityList_b__3_0__,
      0LL);
    static_fields = QuestDateRangeMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_QuestDateRangeEntity__o *)_9__3_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)_9__3_0, v66, v67, v68, v69, v70, v71);
  }
  if ( !v28 )
LABEL_45:
    sub_1BCAA3C(list, v29);
  System_Collections_Generic_List_object___Sort_56244000(
    v28,
    _9__3_0,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_QuestDateRangeEntity__Sort__);
  return (System_Collections_Generic_List_QuestDateRangeEntity__o *)v28;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestDateRangeMaster__IsPeriodFromOpenedToClosed(
        QuestDateRangeMaster_o *this,
        int32_t questDateRangeId,
        int64_t nowTime,
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  char v22; // w22
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  _DWORD *v27; // x0
  __int64 v28; // x1
  __int64 methodPtr_low; // x9
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0

  if ( (byte_4B16654 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__,
      *(_QWORD *)&questDateRangeId,
      nowTime);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v11, v12);
    sub_1BCA7E0(&QuestDateRangeEntity_TypeInfo, v13, v14);
    byte_4B16654 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCAA3C(0LL, *(_QWORD *)&questDateRangeId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v16);
  while ( 1 )
  {
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
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8));
    if ( (v22 & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v25 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_16;
      }
      v26 = (__int64)&v23->vtable[*v25].method;
    }
    else
    {
LABEL_16:
      v26 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v27 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                      Enumerator,
                      *(_QWORD *)(v26 + 8));
    if ( !v27 )
      goto LABEL_34;
    methodPtr_low = LOBYTE(QuestDateRangeEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v27 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestDateRangeEntity_c **)(*(_QWORD *)(*(_QWORD *)v27 + 200LL) + 8 * methodPtr_low - 8) != QuestDateRangeEntity_TypeInfo )
    {
      sub_1BCACFC(v27);
LABEL_34:
      sub_1BCAA3C(v27, v28);
    }
    if ( v27[4] == questDateRangeId && (int)v27[6] <= nowTime && (int)v27[7] > nowTime )
      goto LABEL_26;
  }
  v22 = 0;
LABEL_26:
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
        goto LABEL_30;
    }
    v33 = (__int64)&v30->vtable[*v32].method;
  }
  else
  {
LABEL_30:
    v33 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(Enumerator, *(_QWORD *)(v33 + 8));
  return v22 & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestDateRangeMaster__TryGetEntity(
        QuestDateRangeMaster_o *this,
        QuestDateRangeEntity_o **entity,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B16651 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_QuestDateRangeMaster__QuestDateRangeEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&id);
    byte_4B16651 = 1;
  }
  PK = (Il2CppObject *)QuestDateRangeEntity__CreatePK(id, idx, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_QuestDateRangeMaster__QuestDateRangeEntity__string__TryGetEntity__);
}


void __fastcall QuestDateRangeMaster___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B16655 & 1) == 0 )
  {
    sub_1BCA7E0(&QuestDateRangeMaster___c_TypeInfo, v1, v2);
    byte_4B16655 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(QuestDateRangeMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  QuestDateRangeMaster___c_TypeInfo->static_fields->__9 = (struct QuestDateRangeMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)QuestDateRangeMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall QuestDateRangeMaster___c___ctor(QuestDateRangeMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall QuestDateRangeMaster___c___GetQuestDateRangeEntityList_b__3_0(
        QuestDateRangeMaster___c_o *this,
        QuestDateRangeEntity_o *a,
        QuestDateRangeEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1BCAA3C(this, a);
  return a->fields.idx - b->fields.idx;
}