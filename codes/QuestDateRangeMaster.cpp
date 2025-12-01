void QuestDateRangeMaster___ctor(QuestDateRangeMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC79EA & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_QuestDateRangeMaster__QuestDateRangeEntity__string___ctor__);
    byte_4CC79EA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    290,
    (const MethodInfo_340B614 *)Method_DataMasterBase_QuestDateRangeMaster__QuestDateRangeEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestDateRangeEntity_o *QuestDateRangeMaster__GetEntity(
        QuestDateRangeMaster_o *this,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CC79E8 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_QuestDateRangeMaster__QuestDateRangeEntity__string__GetEntity__);
    byte_4CC79E8 = 1;
  }
  PK = (Il2CppObject *)QuestDateRangeEntity__CreatePK(id, idx, *(const MethodInfo **)&idx);
  return (QuestDateRangeEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     PK,
                                     (const MethodInfo_340D938 *)Method_DataMasterBase_QuestDateRangeMaster__QuestDateRangeEntity__string__GetEntity__);
}


System_Collections_Generic_List_QuestDateRangeEntity__o *QuestDateRangeMaster__GetQuestDateRangeEntityList(
        QuestDateRangeMaster_o *this,
        int32_t questDateRangeId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
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
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  __int64 v26; // x8
  struct System_Object_array *items; // x9
  _QWORD *v28; // x10
  __int64 size; // x11
  Il2CppClass **v30; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0
  QuestDateRangeMaster___c_c *v35; // x8
  System_Comparison_T__o *_9__3_0; // x20
  Il2CppObject *v37; // x21
  struct QuestDateRangeMaster___c_StaticFields *static_fields; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7

  if ( (byte_4CC79EB & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_QuestDateRangeEntity__GetEnumerator__);
    sub_1C713B0(&System_Comparison_QuestDateRangeEntity__TypeInfo);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_QuestDateRangeEntity__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_QuestDateRangeEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_QuestDateRangeEntity__Sort__);
    sub_1C713B0(&Method_System_Collections_Generic_List_QuestDateRangeEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_QuestDateRangeEntity__TypeInfo);
    sub_1C713B0(&Method_QuestDateRangeMaster___c__GetQuestDateRangeEntityList_b__3_0__);
    sub_1C713B0(&QuestDateRangeMaster___c_TypeInfo);
    byte_4CC79EB = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_QuestDateRangeEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_QuestDateRangeEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_42;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33A21E0 *)Method_System_Collections_ObjectModel_Collection_QuestDateRangeEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C71608(0, v8);
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
      v13 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      while ( *((System_Collections_Generic_IEnumerator_QuestDateRangeEntity__c **)v16 - 1) != System_Collections_Generic_IEnumerator_QuestDateRangeEntity__TypeInfo )
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
      v17 = sub_1C47738(Enumerator, System_Collections_Generic_IEnumerator_QuestDateRangeEntity__TypeInfo, 0);
    }
    v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v17)(
            Enumerator,
            *(_QWORD *)(v17 + 8));
    v26 = v18;
    if ( !v18 )
      sub_1C71608(0, v19);
    if ( *(_DWORD *)(v18 + 16) == questDateRangeId )
    {
      if ( !v5 )
        sub_1C71608(v18, v19);
      items = v5->fields._items;
      v28 = Method_System_Collections_Generic_List_QuestDateRangeEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        sub_1C71608(v18, v19);
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)v18,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v26;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v30 + 4), v26, v20, v21, v22, v23, v24, v25);
      }
    }
  }
  v31 = Enumerator->klass;
  v32 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_29;
    }
    v34 = (__int64)&v31->vtable[*v33];
  }
  else
  {
LABEL_29:
    v34 = sub_1C47738(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(
                                                             Enumerator,
                                                             *(_QWORD *)(v34 + 8));
  v35 = QuestDateRangeMaster___c_TypeInfo;
  if ( !QuestDateRangeMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestDateRangeMaster___c_TypeInfo);
    v35 = QuestDateRangeMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Comparison_T__o *)v35->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v35 = QuestDateRangeMaster___c_TypeInfo;
    }
    v37 = (Il2CppObject *)v35->static_fields->__9;
    _9__3_0 = (System_Comparison_T__o *)sub_1C715FC(System_Comparison_QuestDateRangeEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__3_0,
      v37,
      Method_QuestDateRangeMaster___c__GetQuestDateRangeEntityList_b__3_0__,
      0);
    static_fields = QuestDateRangeMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Comparison_QuestDateRangeEntity__o *)_9__3_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v39, v40, v41, v42, v43, v44);
  }
  if ( !v5 )
LABEL_42:
    sub_1C71608(list, v6);
  System_Collections_Generic_List_object___Sort_58794460(
    v5,
    _9__3_0,
    (const MethodInfo_38121DC *)Method_System_Collections_Generic_List_QuestDateRangeEntity__Sort__);
  return (System_Collections_Generic_List_QuestDateRangeEntity__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
bool QuestDateRangeMaster__IsPeriodFromOpenedToClosed(
        QuestDateRangeMaster_o *this,
        int32_t questDateRangeId,
        int64_t nowTime,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  char v14; // w22
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  _DWORD *v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0

  if ( (byte_4CC79EC & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_QuestDateRangeEntity__GetEnumerator__);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_QuestDateRangeEntity__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    byte_4CC79EC = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C71608(0, *(_QWORD *)&questDateRangeId);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33A21E0 *)Method_System_Collections_ObjectModel_Collection_QuestDateRangeEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C71608(0, v8);
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
      v13 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v14 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
            Enumerator,
            *(_QWORD *)(v13 + 8));
    if ( (v14 & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestDateRangeEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_QuestDateRangeEntity__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_16;
      }
      v18 = (__int64)&v15->vtable[*v17];
    }
    else
    {
LABEL_16:
      v18 = sub_1C47738(Enumerator, System_Collections_Generic_IEnumerator_QuestDateRangeEntity__TypeInfo, 0);
    }
    v19 = (_DWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                      Enumerator,
                      *(_QWORD *)(v18 + 8));
    if ( !v19 )
      sub_1C71608(0, v20);
    if ( v19[4] == questDateRangeId && (int)v19[6] <= nowTime && (int)v19[7] > nowTime )
      goto LABEL_24;
  }
  v14 = 0;
LABEL_24:
  v21 = Enumerator->klass;
  v22 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v23 = &v21->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v23 - 1) != System_IDisposable_TypeInfo )
    {
      --v22;
      v23 += 4;
      if ( !v22 )
        goto LABEL_28;
    }
    v24 = (__int64)&v21->vtable[*v23];
  }
  else
  {
LABEL_28:
    v24 = sub_1C47738(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(Enumerator, *(_QWORD *)(v24 + 8));
  return v14 & 1;
}


// local variable allocation has failed, the output may be wrong!
bool QuestDateRangeMaster__TryGetEntity(
        QuestDateRangeMaster_o *this,
        QuestDateRangeEntity_o **entity,
        int32_t id,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CC79E9 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_QuestDateRangeMaster__QuestDateRangeEntity__string__TryGetEntity__);
    byte_4CC79E9 = 1;
  }
  PK = (Il2CppObject *)QuestDateRangeEntity__CreatePK(id, idx, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_340D984 *)Method_DataMasterBase_QuestDateRangeMaster__QuestDateRangeEntity__string__TryGetEntity__);
}


void QuestDateRangeMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC79ED & 1) == 0 )
  {
    sub_1C713B0(&QuestDateRangeMaster___c_TypeInfo);
    byte_4CC79ED = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(QuestDateRangeMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestDateRangeMaster___c_TypeInfo->static_fields->__9 = (struct QuestDateRangeMaster___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)QuestDateRangeMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void QuestDateRangeMaster___c___ctor(QuestDateRangeMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t QuestDateRangeMaster___c___GetQuestDateRangeEntityList_b__3_0(
        QuestDateRangeMaster___c_o *this,
        QuestDateRangeEntity_o *a,
        QuestDateRangeEntity_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1C71608(this, a);
  return a->fields.idx - b->fields.idx;
}