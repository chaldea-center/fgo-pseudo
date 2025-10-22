void QuestHintOverwriteMaster___ctor(QuestHintOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C57398 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_QuestHintOverwriteMaster__QuestHintOverwriteEntity__string___ctor__);
    byte_4C57398 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    540,
    (const MethodInfo_33B56EC *)Method_DataMasterBase_QuestHintOverwriteMaster__QuestHintOverwriteEntity__string___ctor__);
}


QuestHintOverwriteEntity_o *QuestHintOverwriteMaster__GetCompleteCondEntity(
        QuestHintOverwriteMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v7; // x22
  System_Linq_IOrderedEnumerable_TSource__o *v8; // x0
  __int64 v9; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v11; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  QuestHintOverwriteMaster___c_c *v13; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x19
  System_Func_object__int__o *_9__0_1; // x20
  Il2CppObject *v16; // x21
  struct QuestHintOverwriteMaster___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v21; // x19
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x19
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  __int64 v35; // x1
  QuestHintOverwriteEntity_o *v36; // x21
  int32_t condId; // w20
  int32_t condType; // w23
  int64_t condNum; // x22
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0

  if ( (byte_4C57397 & 1) == 0 )
  {
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_OrderByDescending_QuestHintOverwriteEntity__int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_QuestHintOverwriteEntity___);
    sub_1C3E564(&System_Func_QuestHintOverwriteEntity__int__TypeInfo);
    sub_1C3E564(&System_Func_QuestHintOverwriteEntity__bool__TypeInfo);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerable_QuestHintOverwriteEntity__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerator_QuestHintOverwriteEntity__TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    sub_1C3E564(&Method_QuestHintOverwriteMaster___c__GetCompleteCondEntity_b__0_1__);
    sub_1C3E564(&Method_QuestHintOverwriteMaster___c__DisplayClass0_0__GetCompleteCondEntity_b__0__);
    sub_1C3E564(&QuestHintOverwriteMaster___c__DisplayClass0_0_TypeInfo);
    sub_1C3E564(&QuestHintOverwriteMaster___c_TypeInfo);
    byte_4C57397 = 1;
  }
  v7 = sub_1C3E7B0(QuestHintOverwriteMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_45;
  *(_DWORD *)(v7 + 16) = questId;
  *(_DWORD *)(v7 + 20) = questPhase;
  list = this->fields.list;
  v11 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_QuestHintOverwriteEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_QuestHintOverwriteMaster___c__DisplayClass0_0__GetCompleteCondEntity_b__0__,
    0);
  v12 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_QuestHintOverwriteEntity___);
  v13 = QuestHintOverwriteMaster___c_TypeInfo;
  v14 = v12;
  if ( !QuestHintOverwriteMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintOverwriteMaster___c_TypeInfo);
    v13 = QuestHintOverwriteMaster___c_TypeInfo;
  }
  _9__0_1 = (System_Func_object__int__o *)v13->static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = QuestHintOverwriteMaster___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_1C3E7B0(System_Func_QuestHintOverwriteEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__0_1,
      v16,
      Method_QuestHintOverwriteMaster___c__GetCompleteCondEntity_b__0_1__,
      0);
    static_fields = QuestHintOverwriteMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_1 = (struct System_Func_QuestHintOverwriteEntity__int__o *)_9__0_1;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__0_1, (int32_t)_9__0_1, v18, v19);
  }
  v8 = System_Linq_Enumerable__OrderByDescending_object__int_(
         v14,
         (System_Func_TSource__TKey__o *)_9__0_1,
         (const MethodInfo_3129820 *)Method_System_Linq_Enumerable_OrderByDescending_QuestHintOverwriteEntity__int___);
  if ( !v8 )
LABEL_45:
    sub_1C3E7C0(v8, v9);
  klass = v8->klass;
  v21 = v8;
  v22 = *(unsigned __int16 *)&v8->klass->_2.rank;
  if ( *(_WORD *)&v8->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_QuestHintOverwriteEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_QuestHintOverwriteEntity__TypeInfo )
    {
      --v22;
      p_offset += 4;
      if ( !v22 )
        goto LABEL_15;
    }
    v24 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_15:
    v24 = sub_1C8ED7C(v8, System_Collections_Generic_IEnumerable_QuestHintOverwriteEntity__TypeInfo, 0);
  }
  v26 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v24)(v21, *(_QWORD *)(v24 + 8));
  if ( !v26 )
    sub_1C3E7C0(0, v25);
  while ( 1 )
  {
    v27 = *(_QWORD *)v26;
    v28 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
    {
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v29 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_22;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_22:
      v30 = sub_1C8ED7C(v26, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v26, *(_QWORD *)(v30 + 8)) & 1) == 0 )
      break;
    v31 = *(_QWORD *)v26;
    v32 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
    {
      v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_QuestHintOverwriteEntity__c **)v33 - 1) != System_Collections_Generic_IEnumerator_QuestHintOverwriteEntity__TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_29;
      }
      v34 = v31 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_29:
      v34 = sub_1C8ED7C(v26, System_Collections_Generic_IEnumerator_QuestHintOverwriteEntity__TypeInfo, 0);
    }
    v36 = (QuestHintOverwriteEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v26, *(_QWORD *)(v34 + 8));
    if ( !v36 )
      sub_1C3E7C0(0, v35);
    condType = v36->fields.condType;
    condId = v36->fields.condId;
    condNum = v36->fields.condNum;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(condType, condId, condNum, 0, 0, 0) )
      goto LABEL_37;
  }
  v36 = 0;
LABEL_37:
  v40 = *(_QWORD *)v26;
  v41 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
  {
    v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      --v41;
      v42 += 4;
      if ( !v41 )
        goto LABEL_41;
    }
    v43 = v40 + 16LL * *v42 + 312;
  }
  else
  {
LABEL_41:
    v43 = sub_1C8ED7C(v26, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v43)(v26, *(_QWORD *)(v43 + 8));
  return v36;
}


QuestHintOverwriteEntity_o *QuestHintOverwriteMaster__GetEntity(
        QuestHintOverwriteMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C57399 & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_QuestHintOverwriteMaster__QuestHintOverwriteEntity__string__GetEntity__);
    byte_4C57399 = 1;
  }
  PK = (Il2CppObject *)QuestHintOverwriteEntity__CreatePK(questId, questPhase, priority, 0);
  return (QuestHintOverwriteEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_33B7A10 *)Method_DataMasterBase_QuestHintOverwriteMaster__QuestHintOverwriteEntity__string__GetEntity__);
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

  if ( (byte_4C5739A & 1) == 0 )
  {
    sub_1C3E564(&Method_DataMasterBase_QuestHintOverwriteMaster__QuestHintOverwriteEntity__string__TryGetEntity__);
    byte_4C5739A = 1;
  }
  PK = (Il2CppObject *)QuestHintOverwriteEntity__CreatePK(questId, questPhase, priority, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33B7A5C *)Method_DataMasterBase_QuestHintOverwriteMaster__QuestHintOverwriteEntity__string__TryGetEntity__);
}


void QuestHintOverwriteMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C5739B & 1) == 0 )
  {
    sub_1C3E564(&QuestHintOverwriteMaster___c_TypeInfo);
    byte_4C5739B = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(QuestHintOverwriteMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestHintOverwriteMaster___c_TypeInfo->static_fields->__9 = (struct QuestHintOverwriteMaster___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)QuestHintOverwriteMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
  return x->fields.questId == this->fields.questId && x->fields.questPhase == this->fields.questPhase;
}