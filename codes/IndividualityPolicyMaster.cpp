void IndividualityPolicyMaster___ctor(IndividualityPolicyMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB673E & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_IndividualityPolicyMaster__IndividualityPolicyEntity__int___ctor__);
    byte_4CB673E = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    483,
    (const MethodInfo_33F6DB8 *)Method_DataMasterBase_IndividualityPolicyMaster__IndividualityPolicyEntity__int___ctor__);
}


int32_t IndividualityPolicyMaster__GetPolicyValue(
        IndividualityPolicyMaster_o *this,
        System_Int32_array *individuality,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  System_Collections_Generic_IEnumerator_T__c *v12; // x8
  __int64 v13; // x9
  int32_t *v14; // x10
  __int64 v15; // x0
  _QWORD *v16; // x0
  __int64 v17; // x1
  _QWORD *v18; // x21
  __int64 naturalAligment; // x10
  __int64 v20; // x22
  System_Func_int__bool__o *v21; // x23
  int32_t v22; // w21
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0

  if ( (byte_4CB673C & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_IndividualityPolicyEntity__GetEnumerator__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_All_int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C6BA08(&System_Func_int__bool__TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_IndividualityPolicyEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&IndividualityPolicyEntity_TypeInfo);
    byte_4CB673C = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C6BC60(0, individuality);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_339243C *)Method_System_Collections_ObjectModel_Collection_IndividualityPolicyEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C6BC60(0, v6);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v9 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v9;
        p_offset += 4;
        if ( !v9 )
          goto LABEL_9;
      }
      v11 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v11 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v11)(
            Enumerator,
            *(_QWORD *)(v11 + 8))
        & 1) == 0 )
      break;
    v12 = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v14 = &v12->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_IndividualityPolicyEntity__c **)v14 - 1) != System_Collections_Generic_IEnumerator_IndividualityPolicyEntity__TypeInfo )
      {
        --v13;
        v14 += 4;
        if ( !v13 )
          goto LABEL_16;
      }
      v15 = (__int64)&v12->vtable[*v14];
    }
    else
    {
LABEL_16:
      v15 = sub_1C41D90(Enumerator, System_Collections_Generic_IEnumerator_IndividualityPolicyEntity__TypeInfo, 0);
    }
    v16 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
                      Enumerator,
                      *(_QWORD *)(v15 + 8));
    v18 = v16;
    if ( v16 )
    {
      naturalAligment = IndividualityPolicyEntity_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*v16 + 304LL) >= (unsigned int)naturalAligment
        && *(IndividualityPolicyEntity_c **)(*(_QWORD *)(*v16 + 200LL) + 8 * naturalAligment - 8) == IndividualityPolicyEntity_TypeInfo )
      {
        v20 = v16[3];
        if ( !v20 )
          sub_1C6BC60(v16, v17);
        if ( !individuality )
          sub_1C6BC60(v16, v17);
        if ( *(_DWORD *)(v20 + 24) == LODWORD(individuality->max_length) )
        {
          v21 = (System_Func_int__bool__o *)sub_1C6BC54(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(v21, &individuality->obj, Method_System_Linq_Enumerable_Contains_int___, 0);
          if ( System_Linq_Enumerable__All_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v20,
                 (System_Func_TSource__bool__o *)v21,
                 (const MethodInfo_31451C0 *)Method_System_Linq_Enumerable_All_int___) )
          {
            v22 = *((_DWORD *)v18 + 5);
            goto LABEL_27;
          }
        }
      }
    }
  }
  v22 = -1;
LABEL_27:
  v23 = Enumerator->klass;
  v24 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v25 = &v23->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
    {
      --v24;
      v25 += 4;
      if ( !v24 )
        goto LABEL_31;
    }
    v26 = (__int64)&v23->vtable[*v25];
  }
  else
  {
LABEL_31:
    v26 = sub_1C41D90(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(Enumerator, *(_QWORD *)(v26 + 8));
  return v22;
}


bool IndividualityPolicyMaster__TryGetEntityByPolicyValue(
        IndividualityPolicyMaster_o *this,
        IndividualityPolicyEntity_o **entity,
        int32_t policyValue,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  System_Func_object__bool__o *v11; // x21
  Il2CppObject *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4CB673D & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_FirstOrDefault_IndividualityPolicyEntity___);
    sub_1C6BA08(&System_Func_IndividualityPolicyEntity__bool__TypeInfo);
    sub_1C6BA08(&Method_IndividualityPolicyMaster___c__DisplayClass1_0__TryGetEntityByPolicyValue_b__0__);
    sub_1C6BA08(&IndividualityPolicyMaster___c__DisplayClass1_0_TypeInfo);
    byte_4CB673D = 1;
  }
  v7 = sub_1C6BC54(IndividualityPolicyMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C6BC60(v8, v9);
  *(_DWORD *)(v7 + 16) = policyValue;
  list = this->fields.list;
  v11 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_IndividualityPolicyEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_IndividualityPolicyMaster___c__DisplayClass1_0__TryGetEntityByPolicyValue_b__0__,
    0);
  v12 = System_Linq_Enumerable__FirstOrDefault_object__51793644(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_3164EEC *)Method_System_Linq_Enumerable_FirstOrDefault_IndividualityPolicyEntity___);
  *entity = (IndividualityPolicyEntity_o *)v12;
  sub_1C6B9AC((CGThumbnailListItem_o *)entity, (int32_t)v12, v13, v14);
  return *entity != 0;
}


void IndividualityPolicyMaster___c__DisplayClass1_0___ctor(
        IndividualityPolicyMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool IndividualityPolicyMaster___c__DisplayClass1_0___TryGetEntityByPolicyValue_b__0(
        IndividualityPolicyMaster___c__DisplayClass1_0_o *this,
        IndividualityPolicyEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C6BC60(this, 0);
  return e->fields.policyValue == this->fields.policyValue;
}