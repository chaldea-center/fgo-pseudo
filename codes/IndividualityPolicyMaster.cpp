void __fastcall IndividualityPolicyMaster___ctor(IndividualityPolicyMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C22284 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_IndividualityPolicyMaster__IndividualityPolicyEntity__int___ctor__, method);
    byte_4C22284 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    483,
    (const MethodInfo_3298B24 *)Method_DataMasterBase_IndividualityPolicyMaster__IndividualityPolicyEntity__int___ctor__);
}


int32_t __fastcall IndividualityPolicyMaster__GetPolicyValue(
        IndividualityPolicyMaster_o *this,
        System_Int32_array *individuality,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
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
  _QWORD *v23; // x0
  __int64 v24; // x1
  _QWORD *v25; // x21
  __int64 methodPtr_low; // x10
  __int64 v27; // x22
  System_Func_int__bool__o *v28; // x23
  int32_t v29; // w21
  System_Collections_Generic_IEnumerator_T__c *v30; // x8
  __int64 v31; // x9
  int32_t *v32; // x10
  __int64 v33; // x0

  if ( (byte_4C22282 & 1) == 0 )
  {
    sub_1C3B764(
      &Method_System_Collections_ObjectModel_Collection_IndividualityPolicyEntity__GetEnumerator__,
      individuality);
    sub_1C3B764(&Method_System_Linq_Enumerable_All_int___, v5);
    sub_1C3B764(&Method_System_Linq_Enumerable_Contains_int___, v6);
    sub_1C3B764(&System_Func_int__bool__TypeInfo, v7);
    sub_1C3B764(&System_IDisposable_TypeInfo, v8);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_IndividualityPolicyEntity__TypeInfo, v9);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1C3B764(&IndividualityPolicyEntity_TypeInfo, v11);
    byte_4C22282 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C3B9C0(0LL, individuality);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_IndividualityPolicyEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C3B9C0(0LL, v13);
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
      p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      while ( *((System_Collections_Generic_IEnumerator_IndividualityPolicyEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_IndividualityPolicyEntity__TypeInfo )
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
      v22 = sub_1C8D744(Enumerator, System_Collections_Generic_IEnumerator_IndividualityPolicyEntity__TypeInfo, 0LL);
    }
    v23 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
                      Enumerator,
                      *(_QWORD *)(v22 + 8));
    v25 = v23;
    if ( v23 )
    {
      methodPtr_low = LOBYTE(IndividualityPolicyEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*v23 + 304LL) >= (unsigned int)methodPtr_low
        && *(IndividualityPolicyEntity_c **)(*(_QWORD *)(*v23 + 200LL) + 8 * methodPtr_low - 8) == IndividualityPolicyEntity_TypeInfo )
      {
        v27 = v23[3];
        if ( !v27 )
          sub_1C3B9C0(v23, v24);
        if ( !individuality )
          sub_1C3B9C0(v23, v24);
        if ( *(_DWORD *)(v27 + 24) == individuality->max_length )
        {
          v28 = (System_Func_int__bool__o *)sub_1C3B9B0(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(v28, &individuality->obj, Method_System_Linq_Enumerable_Contains_int___, 0LL);
          if ( System_Linq_Enumerable__All_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v27,
                 (System_Func_TSource__bool__o *)v28,
                 (const MethodInfo_2FFA178 *)Method_System_Linq_Enumerable_All_int___) )
          {
            v29 = *((_DWORD *)v25 + 5);
            goto LABEL_27;
          }
        }
      }
    }
  }
  v29 = -1;
LABEL_27:
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
        goto LABEL_31;
    }
    v33 = (__int64)&v30->vtable[*v32].method;
  }
  else
  {
LABEL_31:
    v33 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v33)(Enumerator, *(_QWORD *)(v33 + 8));
  return v29;
}


bool __fastcall IndividualityPolicyMaster__TryGetEntityByPolicyValue(
        IndividualityPolicyMaster_o *this,
        IndividualityPolicyEntity_o **entity,
        int32_t policyValue,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  System_Func_object__bool__o *v14; // x21
  Il2CppObject *v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4C22283 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_FirstOrDefault_IndividualityPolicyEntity___, entity);
    sub_1C3B764(&System_Func_IndividualityPolicyEntity__bool__TypeInfo, v7);
    sub_1C3B764(&Method_IndividualityPolicyMaster___c__DisplayClass1_0__TryGetEntityByPolicyValue_b__0__, v8);
    sub_1C3B764(&IndividualityPolicyMaster___c__DisplayClass1_0_TypeInfo, v9);
    byte_4C22283 = 1;
  }
  v10 = sub_1C3B9B0(IndividualityPolicyMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1C3B9C0(v11, v12);
  *(_DWORD *)(v10 + 16) = policyValue;
  list = this->fields.list;
  v14 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_IndividualityPolicyEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v10,
    Method_IndividualityPolicyMaster___c__DisplayClass1_0__TryGetEntityByPolicyValue_b__0__,
    0LL);
  v15 = System_Linq_Enumerable__FirstOrDefault_object__50415372(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_301470C *)Method_System_Linq_Enumerable_FirstOrDefault_IndividualityPolicyEntity___);
  *entity = (IndividualityPolicyEntity_o *)v15;
  sub_1C3B708((PartyOrganizationUtility_o *)entity, (int64_t)v15, v16, v17, v18, v19, v20, v21);
  return *entity != 0LL;
}


void __fastcall IndividualityPolicyMaster___c__DisplayClass1_0___ctor(
        IndividualityPolicyMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall IndividualityPolicyMaster___c__DisplayClass1_0___TryGetEntityByPolicyValue_b__0(
        IndividualityPolicyMaster___c__DisplayClass1_0_o *this,
        IndividualityPolicyEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1C3B9C0(this, 0LL);
  return e->fields.policyValue == this->fields.policyValue;
}