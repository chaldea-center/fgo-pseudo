void __fastcall QuestPhasePresentMaster___ctor(QuestPhasePresentMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FC941 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string___ctor__, method);
    byte_49FC941 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    490,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
QuestPhasePresentEntity_o *__fastcall QuestPhasePresentMaster__GetEntity(
        QuestPhasePresentMaster_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_49FC942 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string__GetEntity__,
      *(_QWORD *)&questId);
    byte_49FC942 = 1;
  }
  PK = (Il2CppObject *)QuestPhasePresentEntity__CreatePK(questId, phase, *(const MethodInfo **)&phase);
  return (QuestPhasePresentEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                        PK,
                                        (const MethodInfo_30D41FC *)Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string__GetEntity__);
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
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 v26; // x8
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v29; // x10
  __int64 size; // x11
  Il2CppClass **v31; // x0
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0

  if ( (byte_49FC940 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, *(_QWORD *)&questId);
    sub_1B640C8(&System_IDisposable_TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v6);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestPhasePresentEntity__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestPhasePresentEntity___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_QuestPhasePresentEntity__TypeInfo, v10);
    sub_1B640C8(&QuestPhasePresentEntity_TypeInfo, v11);
    byte_49FC940 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_QuestPhasePresentEntity__TypeInfo,
                                                       *(_QWORD *)&questId,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_QuestPhasePresentEntity___ctor__);
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
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v22 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
            Enumerator,
            *(_QWORD *)(v22 + 8));
    v26 = v23;
    if ( !v23 )
      goto LABEL_35;
    methodPtr_low = LOBYTE(QuestPhasePresentEntity_TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)v23 + 304LL) < (unsigned int)methodPtr_low
      || *(QuestPhasePresentEntity_c **)(*(_QWORD *)(*(_QWORD *)v23 + 200LL) + 8 * methodPtr_low - 8) != QuestPhasePresentEntity_TypeInfo )
    {
      sub_1B645E4(v23);
LABEL_35:
      sub_1B64324(v23);
    }
    if ( *(_DWORD *)(v23 + 16) == questId )
    {
      if ( !v12 )
        sub_1B64324(v23);
      items = v12->fields._items;
      v29 = Method_System_Collections_Generic_List_QuestPhasePresentEntity__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1B64324(v23);
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          (Il2CppObject *)v23,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v31[4] = (Il2CppClass *)v26;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v31 + 4), v26, v24, v25);
      }
    }
  }
  v32 = Enumerator->klass;
  v33 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v34 = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      v34 += 4;
      if ( !v33 )
        goto LABEL_31;
    }
    v35 = (__int64)&v32->vtable[*v34].method;
  }
  else
  {
LABEL_31:
    v35 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(Enumerator, *(_QWORD *)(v35 + 8));
  return (System_Collections_Generic_List_QuestPhasePresentEntity__o *)v12;
}


// local variable allocation has failed, the output may be wrong!
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
  int32_t v19; // w2
  int32_t v20; // w3
  const MethodInfo *v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  int size; // w24
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x21
  QuestPhasePresentMaster___c_c *v26; // x0
  System_Func_object__int__o *_9__0_0; // x22
  Il2CppObject *v28; // x23
  struct QuestPhasePresentMaster___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  System_Func_object__bool__o *v35; // x22
  Il2CppObject *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3

  if ( (byte_49FC93F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_QuestPhasePresentEntity___, presentEnt);
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderBy_QuestPhasePresentEntity__int___, v9);
    sub_1B640C8(&System_Func_QuestPhasePresentEntity__int__TypeInfo, v10);
    sub_1B640C8(&System_Func_QuestPhasePresentEntity__bool__TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestPhasePresentEntity__get_Count__, v12);
    sub_1B640C8(&Method_QuestPhasePresentMaster___c__IsContainEntityFromPhase_b__0_0__, v13);
    sub_1B640C8(&Method_QuestPhasePresentMaster___c__DisplayClass0_0__IsContainEntityFromPhase_b__1__, v14);
    sub_1B640C8(&QuestPhasePresentMaster___c__DisplayClass0_0_TypeInfo, v15);
    sub_1B640C8(&QuestPhasePresentMaster___c_TypeInfo, v16);
    byte_49FC93F = 1;
  }
  v17 = sub_1B64314(QuestPhasePresentMaster___c__DisplayClass0_0_TypeInfo, presentEnt, *(_QWORD *)&questId);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17
    || (*(_DWORD *)(v17 + 16) = currentPhase,
        *presentEnt = 0LL,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)presentEnt, 0, v19, v20),
        (List = QuestPhasePresentMaster__GetList(this, questId, v21)) == 0LL) )
  {
    sub_1B64324(List);
  }
  size = List->fields._size;
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)List;
  if ( size >= 1 )
  {
    v26 = QuestPhasePresentMaster___c_TypeInfo;
    if ( !QuestPhasePresentMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(QuestPhasePresentMaster___c_TypeInfo);
      v26 = QuestPhasePresentMaster___c_TypeInfo;
    }
    _9__0_0 = (System_Func_object__int__o *)v26->static_fields->__9__0_0;
    if ( !_9__0_0 )
    {
      if ( !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        v26 = QuestPhasePresentMaster___c_TypeInfo;
      }
      v28 = (Il2CppObject *)v26->static_fields->__9;
      _9__0_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_QuestPhasePresentEntity__int__TypeInfo, v22, v23);
      System_Func_object__int____ctor(
        _9__0_0,
        v28,
        Method_QuestPhasePresentMaster___c__IsContainEntityFromPhase_b__0_0__,
        0LL);
      static_fields = QuestPhasePresentMaster___c_TypeInfo->static_fields;
      static_fields->__9__0_0 = (struct System_Func_QuestPhasePresentEntity__int__o *)_9__0_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v30, v31);
    }
    v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                 v25,
                                                                 (System_Func_TSource__TKey__o *)_9__0_0,
                                                                 (const MethodInfo_2E630C0 *)Method_System_Linq_Enumerable_OrderBy_QuestPhasePresentEntity__int___);
    v35 = (System_Func_object__bool__o *)sub_1B64314(System_Func_QuestPhasePresentEntity__bool__TypeInfo, v33, v34);
    System_Func_object__bool____ctor(
      v35,
      (Il2CppObject *)v17,
      Method_QuestPhasePresentMaster___c__DisplayClass0_0__IsContainEntityFromPhase_b__1__,
      0LL);
    v36 = System_Linq_Enumerable__FirstOrDefault_object__48617700(
            v32,
            (System_Func_TSource__bool__o *)v35,
            (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_QuestPhasePresentEntity___);
    *presentEnt = (QuestPhasePresentEntity_o *)v36;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)presentEnt, (int32_t)v36, v37, v38);
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

  if ( (byte_49FC943 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string__TryGetEntity__, entity);
    byte_49FC943 = 1;
  }
  PK = (Il2CppObject *)QuestPhasePresentEntity__CreatePK(questId, phase, *(const MethodInfo **)&questId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_30D424C *)Method_DataMasterBase_QuestPhasePresentMaster__QuestPhasePresentEntity__string__TryGetEntity__);
}


void __fastcall QuestPhasePresentMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FC944 & 1) == 0 )
  {
    sub_1B640C8(&QuestPhasePresentMaster___c_TypeInfo, v1);
    byte_49FC944 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(QuestPhasePresentMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  QuestPhasePresentMaster___c_TypeInfo->static_fields->__9 = (struct QuestPhasePresentMaster___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)QuestPhasePresentMaster___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return x->fields.phase > this->fields.currentPhase;
}