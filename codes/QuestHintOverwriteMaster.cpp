void QuestHintOverwriteMaster___ctor(QuestHintOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938D15 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_QuestHintOverwriteMaster__QuestHintOverwriteEntity__string___ctor__);
    byte_5938D15 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    542,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_QuestHintOverwriteMaster__QuestHintOverwriteEntity__string___ctor__);
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
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x21
  System_Func_QuestHintOverwriteEntity__bool__c *v11; // x0
  System_Func_object__bool__o *v12; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  __int64 v14; // x1
  QuestHintOverwriteMaster___c_c *v15; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x19
  struct QuestHintOverwriteMaster___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__0_1; // x20
  Il2CppObject *v19; // x21
  struct QuestHintOverwriteMaster___c_StaticFields *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v28; // x19
  __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 v31; // x0
  __int64 IsOpen; // x0
  __int64 v33; // x1
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  __int64 v42; // x1
  QuestHintOverwriteEntity_o *v43; // x19
  int64_t condNum; // x22
  int32_t condType; // w20
  int32_t condId; // w21
  __int64 v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  __int64 v52; // [xsp+18h] [xbp-48h]

  if ( (byte_5938D14 & 1) == 0 )
  {
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderByDescending_QuestHintOverwriteEntity__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_QuestHintOverwriteEntity___);
    sub_21FFC50(&System_Func_QuestHintOverwriteEntity__int__TypeInfo);
    sub_21FFC50(&System_Func_QuestHintOverwriteEntity__bool__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_QuestHintOverwriteEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_QuestHintOverwriteEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_QuestHintOverwriteMaster___c__GetCompleteCondEntity_b__0_1__);
    sub_21FFC50(&Method_QuestHintOverwriteMaster___c__DisplayClass0_0__GetCompleteCondEntity_b__0__);
    sub_21FFC50(&QuestHintOverwriteMaster___c__DisplayClass0_0_TypeInfo);
    sub_21FFC50(&QuestHintOverwriteMaster___c_TypeInfo);
    byte_5938D14 = 1;
  }
  v7 = sub_21FFEBC(QuestHintOverwriteMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_47;
  list = this->fields.list;
  v11 = System_Func_QuestHintOverwriteEntity__bool__TypeInfo;
  *(_DWORD *)(v7 + 16) = questId;
  *(_DWORD *)(v7 + 20) = questPhase;
  v12 = (System_Func_object__bool__o *)sub_21FFEBC(v11);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v7,
    Method_QuestHintOverwriteMaster___c__DisplayClass0_0__GetCompleteCondEntity_b__0__,
    0);
  v13 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v12,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_QuestHintOverwriteEntity___);
  v15 = QuestHintOverwriteMaster___c_TypeInfo;
  v16 = v13;
  if ( !*(&QuestHintOverwriteMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(QuestHintOverwriteMaster___c_TypeInfo, v14);
    v15 = QuestHintOverwriteMaster___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__0_1 = (System_Func_object__int__o *)static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !*(&v15->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v15, v14);
      static_fields = QuestHintOverwriteMaster___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_QuestHintOverwriteEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__0_1,
      v19,
      Method_QuestHintOverwriteMaster___c__GetCompleteCondEntity_b__0_1__,
      0);
    v20 = QuestHintOverwriteMaster___c_TypeInfo->static_fields;
    v20->__9__0_1 = (struct System_Func_QuestHintOverwriteEntity__int__o *)_9__0_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v20->__9__0_1, (int32_t)_9__0_1, v21, v22, v23, v24, v25, v26);
  }
  v8 = System_Linq_Enumerable__OrderByDescending_object__int_(
         v16,
         (System_Func_TSource__TKey__o *)_9__0_1,
         (const MethodInfo_3855CFC *)Method_System_Linq_Enumerable_OrderByDescending_QuestHintOverwriteEntity__int___);
  if ( !v8 )
LABEL_47:
    sub_21FFECC(v8, v9);
  klass = v8->klass;
  v28 = v8;
  v29 = *(unsigned __int16 *)&v8->klass->_2.rank;
  if ( *(_WORD *)&v8->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_QuestHintOverwriteEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_QuestHintOverwriteEntity__TypeInfo )
    {
      --v29;
      p_offset += 4;
      if ( !v29 )
        goto LABEL_15;
    }
    v31 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_15:
    v31 = sub_2237E2C(v8, System_Collections_Generic_IEnumerable_QuestHintOverwriteEntity__TypeInfo, 0);
  }
  IsOpen = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v31)(
             v28,
             *(_QWORD *)(v31 + 8));
  v52 = IsOpen;
  while ( 1 )
  {
    if ( !v52 )
      sub_21FFECC(IsOpen, v33);
    v34 = *(_QWORD *)v52;
    v35 = *(unsigned __int16 *)(*(_QWORD *)v52 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v52 + 302LL) )
    {
      v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v36 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_23;
      }
      v37 = v34 + 16LL * *v36 + 312;
    }
    else
    {
LABEL_23:
      v37 = sub_2237E2C(v52, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v52, *(_QWORD *)(v37 + 8)) & 1) == 0 )
      break;
    v38 = *(_QWORD *)v52;
    v39 = *(unsigned __int16 *)(*(_QWORD *)v52 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v52 + 302LL) )
    {
      v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_QuestHintOverwriteEntity__c **)v40 - 1) != System_Collections_Generic_IEnumerator_QuestHintOverwriteEntity__TypeInfo )
      {
        --v39;
        v40 += 4;
        if ( !v39 )
          goto LABEL_30;
      }
      v41 = v38 + 16LL * *v40 + 312;
    }
    else
    {
LABEL_30:
      v41 = sub_2237E2C(v52, System_Collections_Generic_IEnumerator_QuestHintOverwriteEntity__TypeInfo, 0);
    }
    v43 = (QuestHintOverwriteEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v52, *(_QWORD *)(v41 + 8));
    if ( !v43 )
      sub_21FFECC(0, v42);
    condNum = v43->fields.condNum;
    condType = v43->fields.condType;
    condId = v43->fields.condId;
    if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v42);
    IsOpen = CondType__IsOpen(condType, condId, condNum, 0, 0, 0);
    if ( (IsOpen & 1) != 0 )
      goto LABEL_38;
  }
  v43 = 0;
LABEL_38:
  v47 = *(_QWORD *)v52;
  v48 = *(unsigned __int16 *)(*(_QWORD *)v52 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v52 + 302LL) )
  {
    v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
    {
      --v48;
      v49 += 4;
      if ( !v48 )
        goto LABEL_42;
    }
    v50 = v47 + 16LL * *v49 + 312;
  }
  else
  {
LABEL_42:
    v50 = sub_2237E2C(v52, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v50)(v52, *(_QWORD *)(v50 + 8));
  return v43;
}


QuestHintOverwriteEntity_o *QuestHintOverwriteMaster__GetEntity(
        QuestHintOverwriteMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_5938D16 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_QuestHintOverwriteMaster__QuestHintOverwriteEntity__string__GetEntity__);
    byte_5938D16 = 1;
  }
  PK = (Il2CppObject *)QuestHintOverwriteEntity__CreatePK(questId, questPhase, priority, 0);
  return (QuestHintOverwriteEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_3EE2044 *)Method_DataMasterBase_QuestHintOverwriteMaster__QuestHintOverwriteEntity__string__GetEntity__);
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

  if ( (byte_5938D17 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_QuestHintOverwriteMaster__QuestHintOverwriteEntity__string__TryGetEntity__);
    byte_5938D17 = 1;
  }
  PK = (Il2CppObject *)QuestHintOverwriteEntity__CreatePK(questId, questPhase, priority, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_QuestHintOverwriteMaster__QuestHintOverwriteEntity__string__TryGetEntity__);
}


void QuestHintOverwriteMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5938D18 & 1) == 0 )
  {
    sub_21FFC50(&QuestHintOverwriteMaster___c_TypeInfo);
    byte_5938D18 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(QuestHintOverwriteMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestHintOverwriteMaster___c_TypeInfo->static_fields->__9 = (struct QuestHintOverwriteMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)QuestHintOverwriteMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_21FFECC(this, 0);
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
    sub_21FFECC(this, 0);
  return x->fields.questId == this->fields.questId && x->fields.questPhase == this->fields.questPhase;
}