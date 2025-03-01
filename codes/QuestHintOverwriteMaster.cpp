void __fastcall QuestHintOverwriteMaster___ctor(QuestHintOverwriteMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BFDC0B & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_QuestHintOverwriteMaster__QuestHintOverwriteEntity__string___ctor__, method);
    byte_4BFDC0B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    537,
    (const MethodInfo_327D914 *)Method_DataMasterBase_QuestHintOverwriteMaster__QuestHintOverwriteEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestHintOverwriteEntity_o *__fastcall QuestHintOverwriteMaster__GetCompleteCondEntity(
        QuestHintOverwriteMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        const MethodInfo *method)
{
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
  __int64 v19; // x22
  System_Linq_IOrderedEnumerable_TSource__o *v20; // x0
  __int64 v21; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v23; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  QuestHintOverwriteMaster___c_c *v25; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x19
  System_Func_object__int__o *_9__0_1; // x20
  Il2CppObject *v28; // x21
  struct QuestHintOverwriteMaster___c_StaticFields *static_fields; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v37; // x19
  __int64 v38; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v41; // x1
  __int64 v42; // x19
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  __int64 v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  __int64 v51; // x1
  QuestHintOverwriteEntity_o *v52; // x21
  int32_t condId; // w20
  int32_t condType; // w23
  int64_t condNum; // x22
  __int64 v56; // x8
  __int64 v57; // x9
  int *v58; // x10
  __int64 v59; // x0

  if ( (byte_4BFDC0A & 1) == 0 )
  {
    sub_1C2E12C(&CondType_TypeInfo, *(_QWORD *)&questId);
    sub_1C2E12C(&Method_System_Linq_Enumerable_OrderByDescending_QuestHintOverwriteEntity__int___, v7);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Where_QuestHintOverwriteEntity___, v8);
    sub_1C2E12C(&System_Func_QuestHintOverwriteEntity__int__TypeInfo, v9);
    sub_1C2E12C(&System_Func_QuestHintOverwriteEntity__bool__TypeInfo, v10);
    sub_1C2E12C(&System_IDisposable_TypeInfo, v11);
    sub_1C2E12C(&System_Collections_Generic_IEnumerable_QuestHintOverwriteEntity__TypeInfo, v12);
    sub_1C2E12C(&System_Collections_Generic_IEnumerator_QuestHintOverwriteEntity__TypeInfo, v13);
    sub_1C2E12C(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_1C2E12C(&Method_QuestHintOverwriteMaster___c__GetCompleteCondEntity_b__0_1__, v15);
    sub_1C2E12C(&Method_QuestHintOverwriteMaster___c__DisplayClass0_0__GetCompleteCondEntity_b__0__, v16);
    sub_1C2E12C(&QuestHintOverwriteMaster___c__DisplayClass0_0_TypeInfo, v17);
    sub_1C2E12C(&QuestHintOverwriteMaster___c_TypeInfo, v18);
    byte_4BFDC0A = 1;
  }
  v19 = sub_1C2E378(QuestHintOverwriteMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_45;
  *(_DWORD *)(v19 + 16) = questId;
  *(_DWORD *)(v19 + 20) = questPhase;
  list = this->fields.list;
  v23 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_QuestHintOverwriteEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v23,
    (Il2CppObject *)v19,
    Method_QuestHintOverwriteMaster___c__DisplayClass0_0__GetCompleteCondEntity_b__0__,
    0LL);
  v24 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v23,
          (const MethodInfo_3011CD0 *)Method_System_Linq_Enumerable_Where_QuestHintOverwriteEntity___);
  v25 = QuestHintOverwriteMaster___c_TypeInfo;
  v26 = v24;
  if ( !QuestHintOverwriteMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestHintOverwriteMaster___c_TypeInfo);
    v25 = QuestHintOverwriteMaster___c_TypeInfo;
  }
  _9__0_1 = (System_Func_object__int__o *)v25->static_fields->__9__0_1;
  if ( !_9__0_1 )
  {
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = QuestHintOverwriteMaster___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v25->static_fields->__9;
    _9__0_1 = (System_Func_object__int__o *)sub_1C2E378(System_Func_QuestHintOverwriteEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__0_1,
      v28,
      Method_QuestHintOverwriteMaster___c__GetCompleteCondEntity_b__0_1__,
      0LL);
    static_fields = QuestHintOverwriteMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_1 = (struct System_Func_QuestHintOverwriteEntity__int__o *)_9__0_1;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&static_fields->__9__0_1, (int64_t)_9__0_1, v30, v31, v32, v33, v34, v35);
  }
  v20 = System_Linq_Enumerable__OrderByDescending_object__int_(
          v26,
          (System_Func_TSource__TKey__o *)_9__0_1,
          (const MethodInfo_2FFB9E4 *)Method_System_Linq_Enumerable_OrderByDescending_QuestHintOverwriteEntity__int___);
  if ( !v20 )
LABEL_45:
    sub_1C2E388(v20, v21);
  klass = v20->klass;
  v37 = v20;
  v38 = *(unsigned __int16 *)(&v20->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v20->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_QuestHintOverwriteEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_QuestHintOverwriteEntity__TypeInfo )
    {
      --v38;
      p_offset += 4;
      if ( !v38 )
        goto LABEL_15;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_15:
    p_method = sub_1C8010C(v20, System_Collections_Generic_IEnumerable_QuestHintOverwriteEntity__TypeInfo, 0LL);
  }
  v42 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
          v37,
          *(_QWORD *)(p_method + 8));
  if ( !v42 )
    sub_1C2E388(0LL, v41);
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
          goto LABEL_22;
      }
      v46 = v43 + 16LL * *v45 + 312;
    }
    else
    {
LABEL_22:
      v46 = sub_1C8010C(v42, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v42, *(_QWORD *)(v46 + 8)) & 1) == 0 )
      break;
    v47 = *(_QWORD *)v42;
    v48 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
    {
      v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_QuestHintOverwriteEntity__c **)v49 - 1) != System_Collections_Generic_IEnumerator_QuestHintOverwriteEntity__TypeInfo )
      {
        --v48;
        v49 += 4;
        if ( !v48 )
          goto LABEL_29;
      }
      v50 = v47 + 16LL * *v49 + 312;
    }
    else
    {
LABEL_29:
      v50 = sub_1C8010C(v42, System_Collections_Generic_IEnumerator_QuestHintOverwriteEntity__TypeInfo, 0LL);
    }
    v52 = (QuestHintOverwriteEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v42, *(_QWORD *)(v50 + 8));
    if ( !v52 )
      sub_1C2E388(0LL, v51);
    condType = v52->fields.condType;
    condId = v52->fields.condId;
    condNum = v52->fields.condNum;
    if ( !CondType_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
    if ( CondType__IsOpen(condType, condId, condNum, 0, 0LL, 0LL) )
      goto LABEL_37;
  }
  v52 = 0LL;
LABEL_37:
  v56 = *(_QWORD *)v42;
  v57 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
  {
    v58 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v58 - 1) != System_IDisposable_TypeInfo )
    {
      --v57;
      v58 += 4;
      if ( !v57 )
        goto LABEL_41;
    }
    v59 = v56 + 16LL * *v58 + 312;
  }
  else
  {
LABEL_41:
    v59 = sub_1C8010C(v42, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v59)(v42, *(_QWORD *)(v59 + 8));
  return v52;
}


// local variable allocation has failed, the output may be wrong!
QuestHintOverwriteEntity_o *__fastcall QuestHintOverwriteMaster__GetEntity(
        QuestHintOverwriteMaster_o *this,
        int32_t questId,
        int32_t questPhase,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4BFDC0C & 1) == 0 )
  {
    sub_1C2E12C(
      &Method_DataMasterBase_QuestHintOverwriteMaster__QuestHintOverwriteEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_4BFDC0C = 1;
  }
  PK = (Il2CppObject *)QuestHintOverwriteEntity__CreatePK(questId, questPhase, priority, 0LL);
  return (QuestHintOverwriteEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_327FC38 *)Method_DataMasterBase_QuestHintOverwriteMaster__QuestHintOverwriteEntity__string__GetEntity__);
}


bool __fastcall QuestHintOverwriteMaster__TryGetEntity(
        QuestHintOverwriteMaster_o *this,
        QuestHintOverwriteEntity_o **entity,
        int32_t questId,
        int32_t questPhase,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4BFDC0D & 1) == 0 )
  {
    sub_1C2E12C(
      &Method_DataMasterBase_QuestHintOverwriteMaster__QuestHintOverwriteEntity__string__TryGetEntity__,
      entity);
    byte_4BFDC0D = 1;
  }
  PK = (Il2CppObject *)QuestHintOverwriteEntity__CreatePK(questId, questPhase, priority, 0LL);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_327FC84 *)Method_DataMasterBase_QuestHintOverwriteMaster__QuestHintOverwriteEntity__string__TryGetEntity__);
}


void __fastcall QuestHintOverwriteMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BFDC0E & 1) == 0 )
  {
    sub_1C2E12C(&QuestHintOverwriteMaster___c_TypeInfo, v1);
    byte_4BFDC0E = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(QuestHintOverwriteMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestHintOverwriteMaster___c_TypeInfo->static_fields->__9 = (struct QuestHintOverwriteMaster___c_o *)v2;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)QuestHintOverwriteMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall QuestHintOverwriteMaster___c___ctor(QuestHintOverwriteMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall QuestHintOverwriteMaster___c___GetCompleteCondEntity_b__0_1(
        QuestHintOverwriteMaster___c_o *this,
        QuestHintOverwriteEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2E388(this, 0LL);
  return x->fields.priority;
}


void __fastcall QuestHintOverwriteMaster___c__DisplayClass0_0___ctor(
        QuestHintOverwriteMaster___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestHintOverwriteMaster___c__DisplayClass0_0___GetCompleteCondEntity_b__0(
        QuestHintOverwriteMaster___c__DisplayClass0_0_o *this,
        QuestHintOverwriteEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2E388(this, 0LL);
  return x->fields.questId == this->fields.questId && x->fields.questPhase == this->fields.questPhase;
}