void QuestHintOverwriteMaster___ctor(QuestHintOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C37FEA & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_QuestHintOverwriteMaster__QuestHintOverwriteEntity__string___ctor__);
    byte_4C37FEA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    540,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_QuestHintOverwriteMaster__QuestHintOverwriteEntity__string___ctor__);
}


QuestHintOverwriteEntity_o *QuestHintOverwriteMaster__GetCompleteCondEntity(
        QuestHintOverwriteMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v7; // x22
  System_Linq_IOrderedEnumerable_TSource__o *v8; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v10; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  QuestHintOverwriteMaster___c_c *v12; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  System_Func_object__int__o *_9__0_1; // x20
  Il2CppObject *v15; // x21
  struct QuestHintOverwriteMaster___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v20; // x19
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 v23; // x0
  __int64 v24; // x19
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  QuestHintOverwriteEntity_o *v33; // x21
  int32_t condId; // w20
  int32_t condType; // w23
  int64_t condNum; // x22
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0

  if ( (byte_4C37FE9 & 1) == 0 )
  {
    sub_1C32C20(&CondType_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderByDescending_QuestHintOverwriteEntity__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Where_QuestHintOverwriteEntity___);
    sub_1C32C20(&System_Func_QuestHintOverwriteEntity__int__TypeInfo);
    sub_1C32C20(&System_Func_QuestHintOverwriteEntity__bool__TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerable_QuestHintOverwriteEntity__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_QuestHintOverwriteEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_QuestHintOverwriteMaster___c__GetCompleteCondEntity_b__0_1__);
    sub_1C32C20(&Method_QuestHintOverwriteMaster___c__DisplayClass0_0__GetCompleteCondEntity_b__0__);
    sub_1C32C20(&QuestHintOverwriteMaster___c__DisplayClass0_0_TypeInfo);
    sub_1C32C20(&QuestHintOverwriteMaster___c_TypeInfo);
    byte_4C37FE9 = 1;
  }
  v7 = sub_1C32E6C(QuestHintOverwriteMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_45;
  *(_DWORD *)(v7 + 16) = questId;
  *(_DWORD *)(v7 + 20) = questPhase;
  list = this->fields.list;
  v10 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_QuestHintOverwriteEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v7,
    Method_QuestHintOverwriteMaster___c__DisplayClass0_0__GetCompleteCondEntity_b__0__,
    0);
  v11 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v10,
          (const MethodInfo_3123BA8 *)Method_System_Linq_Enumerable_Where_QuestHintOverwriteEntity___);
  v12 = QuestHintOverwriteMaster___c_TypeInfo;
  v13 = v11;
  if ( !QuestHintOverwriteMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintOverwriteMaster___c_TypeInfo);
    v12 = QuestHintOverwriteMaster___c_TypeInfo;
  }
  _9__0_1 = (System_Func_object__int__o *)v12->static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = QuestHintOverwriteMaster___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_QuestHintOverwriteEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__0_1,
      v15,
      Method_QuestHintOverwriteMaster___c__GetCompleteCondEntity_b__0_1__,
      0);
    static_fields = QuestHintOverwriteMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_1 = (struct System_Func_QuestHintOverwriteEntity__int__o *)_9__0_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__0_1, (int32_t)_9__0_1, v17, v18);
  }
  v8 = System_Linq_Enumerable__OrderByDescending_object__int_(
         v13,
         (System_Func_TSource__TKey__o *)_9__0_1,
         (const MethodInfo_310D0C4 *)Method_System_Linq_Enumerable_OrderByDescending_QuestHintOverwriteEntity__int___);
  if ( !v8 )
LABEL_45:
    sub_1C32E7C(v8);
  klass = v8->klass;
  v20 = v8;
  v21 = *(unsigned __int16 *)&v8->klass->_2.rank;
  if ( *(_WORD *)&v8->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_QuestHintOverwriteEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_QuestHintOverwriteEntity__TypeInfo )
    {
      --v21;
      p_offset += 4;
      if ( !v21 )
        goto LABEL_15;
    }
    v23 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_15:
    v23 = sub_1C83438(v8, System_Collections_Generic_IEnumerable_QuestHintOverwriteEntity__TypeInfo, 0);
  }
  v24 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v23)(v20, *(_QWORD *)(v23 + 8));
  if ( !v24 )
    sub_1C32E7C(0);
  while ( 1 )
  {
    v25 = *(_QWORD *)v24;
    v26 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
    {
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v27 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_22;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_22:
      v28 = sub_1C83438(v24, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8)) & 1) == 0 )
      break;
    v29 = *(_QWORD *)v24;
    v30 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
    {
      v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_QuestHintOverwriteEntity__c **)v31 - 1) != System_Collections_Generic_IEnumerator_QuestHintOverwriteEntity__TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_29;
      }
      v32 = v29 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_29:
      v32 = sub_1C83438(v24, System_Collections_Generic_IEnumerator_QuestHintOverwriteEntity__TypeInfo, 0);
    }
    v33 = (QuestHintOverwriteEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v24, *(_QWORD *)(v32 + 8));
    if ( !v33 )
      sub_1C32E7C(0);
    condType = v33->fields.condType;
    condId = v33->fields.condId;
    condNum = v33->fields.condNum;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(condType, condId, condNum, 0, 0, 0) )
      goto LABEL_37;
  }
  v33 = 0;
LABEL_37:
  v37 = *(_QWORD *)v24;
  v38 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
  {
    v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_41;
    }
    v40 = v37 + 16LL * *v39 + 312;
  }
  else
  {
LABEL_41:
    v40 = sub_1C83438(v24, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v40)(v24, *(_QWORD *)(v40 + 8));
  return v33;
}


QuestHintOverwriteEntity_o *QuestHintOverwriteMaster__GetEntity(
        QuestHintOverwriteMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C37FEB & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_QuestHintOverwriteMaster__QuestHintOverwriteEntity__string__GetEntity__);
    byte_4C37FEB = 1;
  }
  PK = (Il2CppObject *)QuestHintOverwriteEntity__CreatePK(questId, questPhase, priority, 0);
  return (QuestHintOverwriteEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_339B2F0 *)Method_DataMasterBase_QuestHintOverwriteMaster__QuestHintOverwriteEntity__string__GetEntity__);
}


bool QuestHintOverwriteMaster__TryGetEntity(
        QuestHintOverwriteMaster_o *this,
        QuestHintOverwriteEntity_o **entity,
        int32_t questId,
        int32_t questPhase,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C37FEC & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_QuestHintOverwriteMaster__QuestHintOverwriteEntity__string__TryGetEntity__);
    byte_4C37FEC = 1;
  }
  PK = (Il2CppObject *)QuestHintOverwriteEntity__CreatePK(questId, questPhase, priority, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_339B33C *)Method_DataMasterBase_QuestHintOverwriteMaster__QuestHintOverwriteEntity__string__TryGetEntity__);
}


void QuestHintOverwriteMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C37FED & 1) == 0 )
  {
    sub_1C32C20(&QuestHintOverwriteMaster___c_TypeInfo);
    byte_4C37FED = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(QuestHintOverwriteMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestHintOverwriteMaster___c_TypeInfo->static_fields->__9 = (struct QuestHintOverwriteMaster___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)QuestHintOverwriteMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void QuestHintOverwriteMaster___c___ctor(QuestHintOverwriteMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t QuestHintOverwriteMaster___c___GetCompleteCondEntity_b__0_1(
        QuestHintOverwriteMaster___c_o *this,
        QuestHintOverwriteEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.priority;
}


void QuestHintOverwriteMaster___c__DisplayClass0_0___ctor(
        QuestHintOverwriteMaster___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool QuestHintOverwriteMaster___c__DisplayClass0_0___GetCompleteCondEntity_b__0(
        QuestHintOverwriteMaster___c__DisplayClass0_0_o *this,
        QuestHintOverwriteEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.questId == this->fields.questId && x->fields.questPhase == this->fields.questPhase;
}