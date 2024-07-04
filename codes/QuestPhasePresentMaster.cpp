void __fastcall QuestPhasePresentMaster___ctor(QuestPhasePresentMaster_o *this, const MethodInfo *method)
{
  if ( (byte_48E2D03 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string___ctor__, method);
    byte_48E2D03 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    489,
    (const MethodInfo_2FE6D64 *)Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestPhasePresentEntity_o *__fastcall QuestPhasePresentMaster__GetEntity(
        QuestPhasePresentMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_48E2D04 & 1) == 0 )
  {
    sub_1B00CCC(
      &Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_48E2D04 = 1;
  }
  PK = (Il2CppObject *)QuestPhasePresentEntity__CreatePK(questId, phase, *(const MethodInfo **)&phase);
  return (QuestPhasePresentEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_2FE6DA4 *)Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_QuestPhasePresentEntity__o *__fastcall QuestPhasePresentMaster__GetList(
        QuestPhasePresentMaster_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x20
  __int64 v13; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v15; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v21; // x8
  __int64 v22; // x9
  int32_t *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v29; // x8
  QuestPhasePresentEntity_c *v30; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v33; // x10
  __int64 size; // x11
  Il2CppClass **v35; // x0
  System_Collections_Generic_IEnumerator_T__c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0

  if ( (byte_48E2D02 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_1B00CCC(&System_IDisposable_TypeInfo, v5);
    sub_1B00CCC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1B00CCC(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestPhasePresentEntity__Add__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestPhasePresentEntity___ctor__, v9);
    sub_1B00CCC(&System_Collections_Generic_List_QuestPhasePresentEntity__TypeInfo, v10);
    sub_1B00CCC(&QuestPhasePresentEntity_TypeInfo, v11);
    byte_48E2D02 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_QuestPhasePresentEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_QuestPhasePresentEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1B00F28(0LL, v13);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_2F83C88 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B00F28(0LL, v15);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v18 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        p_offset += 4;
        if ( !v18 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1B52CAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v21 = Enumerator->klass;
    v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v23 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_16;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_16:
      v24 = sub_1B52CAC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v24)(
            Enumerator,
            *(_QWORD *)(v24 + 8));
    v29 = v25;
    if ( !v25 )
      goto LABEL_35;
    v30 = QuestPhasePresentEntity_TypeInfo;
    methodPtr_low = LOBYTE(QuestPhasePresentEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v25 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestPhasePresentEntity_c **)(*(_QWORD *)(*(_QWORD *)v25 + 200LL) + 8 * methodPtr_low - 8) != QuestPhasePresentEntity_TypeInfo )
    {
      sub_1B011E8(v25);
LABEL_35:
      sub_1B00F28(v25, v26);
    }
    if ( *(_DWORD *)(v25 + 16) == questId )
    {
      if ( !v12 )
        sub_1B00F28(v25, QuestPhasePresentEntity_TypeInfo);
      items = v12->fields._items;
      v33 = Method_System_Collections_Generic_List_QuestPhasePresentEntity__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1B00F28(v25, v30);
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          (Il2CppObject *)v25,
          *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v35[4] = (Il2CppClass *)v29;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v35 + 4), v29, v27, v28);
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
        goto LABEL_31;
    }
    v39 = (__int64)&v36->vtable[*v38].method;
  }
  else
  {
LABEL_31:
    v39 = sub_1B52CAC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v39)(Enumerator, *(_QWORD *)(v39 + 8));
  return (System_Collections_Generic_List_QuestPhasePresentEntity__o *)v12;
}


bool __fastcall QuestPhasePresentMaster__IsContainEntityFromPhase(
        QuestPhasePresentMaster_o *this,
        QuestPhasePresentEntity_o **presentEnt,
        int32_t questId,
        int32_t currentPhase,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x20
  System_Collections_Generic_List_QuestPhasePresentEntity__o *List; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  const MethodInfo *v22; // x2
  int size; // w24
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x21
  QuestPhasePresentMaster___c_c *v25; // x0
  System_Func_object__int__o *_9__0_0; // x22
  Il2CppObject *v27; // x23
  struct QuestPhasePresentMaster___c_StaticFields *static_fields; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x21
  System_Func_object__bool__o *v32; // x22
  Il2CppObject *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3

  if ( (byte_48E2D01 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Linq_Enumerable_FirstOrDefault_QuestPhasePresentEntity___, presentEnt);
    sub_1B00CCC(&Method_System_Linq_Enumerable_OrderBy_QuestPhasePresentEntity__int___, v9);
    sub_1B00CCC(&System_Func_QuestPhasePresentEntity__int__TypeInfo, v10);
    sub_1B00CCC(&System_Func_QuestPhasePresentEntity__bool__TypeInfo, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_QuestPhasePresentEntity__get_Count__, v12);
    sub_1B00CCC(&Method_QuestPhasePresentMaster___c__IsContainEntityFromPhase_b__0_0__, v13);
    sub_1B00CCC(&Method_QuestPhasePresentMaster___c__DisplayClass0_0__IsContainEntityFromPhase_b__1__, v14);
    sub_1B00CCC(&QuestPhasePresentMaster___c__DisplayClass0_0_TypeInfo, v15);
    sub_1B00CCC(&QuestPhasePresentMaster___c_TypeInfo, v16);
    byte_48E2D01 = 1;
  }
  v17 = sub_1B00F18(QuestPhasePresentMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17
    || (*(_DWORD *)(v17 + 16) = currentPhase,
        *presentEnt = 0LL,
        sub_1B00C70((ServantStatusBattleListViewItem_o *)presentEnt, 0, v20, v21),
        (List = QuestPhasePresentMaster__GetList(this, questId, v22)) == 0LL) )
  {
    sub_1B00F28(List, v19);
  }
  size = List->fields._size;
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)List;
  if ( size >= 1 )
  {
    v25 = QuestPhasePresentMaster___c_TypeInfo;
    if ( !QuestPhasePresentMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestPhasePresentMaster___c_TypeInfo);
      v25 = QuestPhasePresentMaster___c_TypeInfo;
    }
    _9__0_0 = (System_Func_object__int__o *)v25->static_fields->__9__0_0;
    if ( !_9__0_0 )
    {
      if ( !v25->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v25);
        v25 = QuestPhasePresentMaster___c_TypeInfo;
      }
      v27 = (Il2CppObject *)v25->static_fields->__9;
      _9__0_0 = (System_Func_object__int__o *)sub_1B00F18(System_Func_QuestPhasePresentEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__0_0,
        v27,
        Method_QuestPhasePresentMaster___c__IsContainEntityFromPhase_b__0_0__,
        0LL);
      static_fields = QuestPhasePresentMaster___c_TypeInfo->static_fields;
      static_fields->__9__0_0 = (struct System_Func_QuestPhasePresentEntity__int__o *)_9__0_0;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v29, v30);
    }
    v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                 v24,
                                                                 (System_Func_TSource__TKey__o *)_9__0_0,
                                                                 (const MethodInfo_2D89D0C *)Method_System_Linq_Enumerable_OrderBy_QuestPhasePresentEntity__int___);
    v32 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_QuestPhasePresentEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v32,
      (Il2CppObject *)v17,
      Method_QuestPhasePresentMaster___c__DisplayClass0_0__IsContainEntityFromPhase_b__1__,
      0LL);
    v33 = System_Linq_Enumerable__FirstOrDefault_object__47729964(
            v31,
            (System_Func_TSource__bool__o *)v32,
            (const MethodInfo_2D84D2C *)Method_System_Linq_Enumerable_FirstOrDefault_QuestPhasePresentEntity___);
    *presentEnt = (QuestPhasePresentEntity_o *)v33;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)presentEnt, (int32_t)v33, v34, v35);
  }
  return size > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestPhasePresentMaster__TryGetEntity(
        QuestPhasePresentMaster_o *this,
        QuestPhasePresentEntity_o **entity,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_48E2D05 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string__TryGetEntity__, entity);
    byte_48E2D05 = 1;
  }
  PK = (Il2CppObject *)QuestPhasePresentEntity__CreatePK(questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_2FE6DF4 *)Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string__TryGetEntity__);
}


void __fastcall QuestPhasePresentMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_48E2D06 & 1) == 0 )
  {
    sub_1B00CCC(&QuestPhasePresentMaster___c_TypeInfo, v1);
    byte_48E2D06 = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(QuestPhasePresentMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  QuestPhasePresentMaster___c_TypeInfo->static_fields->__9 = (struct QuestPhasePresentMaster___c_o *)v2;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)QuestPhasePresentMaster___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall QuestPhasePresentMaster___c___ctor(QuestPhasePresentMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall QuestPhasePresentMaster___c___IsContainEntityFromPhase_b__0_0(
        QuestPhasePresentMaster___c_o *this,
        QuestPhasePresentEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B00F28(this, 0LL);
  return x->fields.phase;
}


void __fastcall QuestPhasePresentMaster___c__DisplayClass0_0___ctor(
        QuestPhasePresentMaster___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall QuestPhasePresentMaster___c__DisplayClass0_0___IsContainEntityFromPhase_b__1(
        QuestPhasePresentMaster___c__DisplayClass0_0_o *this,
        QuestPhasePresentEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B00F28(this, 0LL);
  return x->fields.phase > this->fields.currentPhase;
}