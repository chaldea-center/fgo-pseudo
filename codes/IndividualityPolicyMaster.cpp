void IndividualityPolicyMaster___ctor(IndividualityPolicyMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5938B39 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_IndividualityPolicyMaster__IndividualityPolicyEntity__int___ctor__);
    byte_5938B39 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    485,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_IndividualityPolicyMaster__IndividualityPolicyEntity__int___ctor__);
}


int32_t IndividualityPolicyMaster__GetPolicyValue(
        IndividualityPolicyMaster_o *this,
        System_Int32_array *individuality,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v10; // x9
  int *p_offset; // x10
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  _QWORD *v19; // x0
  __int64 v20; // x1
  _QWORD *v21; // x20
  __int64 naturalAligment; // x10
  __int64 v23; // x21
  System_Func_int__bool__o *v24; // x22
  int32_t v25; // w20
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  System_Collections_Generic_IEnumerator_T__o *v31; // [xsp+18h] [xbp-58h]

  if ( (byte_5938B37 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_IndividualityPolicyEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Linq_Enumerable_All_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Contains_int___);
    sub_21FFC50(&System_Func_int__bool__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_IndividualityPolicyEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&IndividualityPolicyEntity_TypeInfo);
    byte_5938B37 = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, individuality);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_IndividualityPolicyEntity__GetEnumerator__);
  v31 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(0, v7);
  for ( i = Enumerator; ; i = v31 )
  {
    klass = i->klass;
    v10 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_10;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v12 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v13 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v12)(
            i,
            *(_QWORD *)(v12 + 8));
    if ( (v13 & 1) == 0 )
    {
      v25 = -1;
      goto LABEL_30;
    }
    if ( !v31 )
      sub_21FFECC(v13, v14);
    v15 = v31->klass;
    v16 = *(unsigned __int16 *)&v31->klass->_2.rank;
    if ( *(_WORD *)&v31->klass->_2.rank )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_IndividualityPolicyEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_IndividualityPolicyEntity__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_18;
      }
      v18 = (__int64)&v15->vtable[*v17];
    }
    else
    {
LABEL_18:
      v18 = sub_2237E2C(v31, System_Collections_Generic_IEnumerator_IndividualityPolicyEntity__TypeInfo, 0);
    }
    v19 = (_QWORD *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                      v31,
                      *(_QWORD *)(v18 + 8));
    v21 = v19;
    if ( v19 )
    {
      naturalAligment = IndividualityPolicyEntity_TypeInfo->_2.naturalAligment;
      if ( *(unsigned __int8 *)(*v19 + 304LL) >= (unsigned int)naturalAligment
        && *(IndividualityPolicyEntity_c **)(*(_QWORD *)(*v19 + 200LL) + 8 * naturalAligment - 8) == IndividualityPolicyEntity_TypeInfo )
      {
        v23 = v19[3];
        if ( !v23 )
          sub_21FFECC(v19, v20);
        if ( !individuality )
          sub_21FFECC(v19, v20);
        if ( *(_DWORD *)(v23 + 24) == LODWORD(individuality->max_length) )
        {
          v24 = (System_Func_int__bool__o *)sub_21FFEBC(System_Func_int__bool__TypeInfo);
          System_Func_int__bool____ctor(v24, &individuality->obj, Method_System_Linq_Enumerable_Contains_int___, 0);
          if ( System_Linq_Enumerable__All_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v23,
                 (System_Func_TSource__bool__o *)v24,
                 (const MethodInfo_3831218 *)Method_System_Linq_Enumerable_All_int___) )
          {
            break;
          }
        }
      }
    }
  }
  v25 = *((_DWORD *)v21 + 5);
LABEL_30:
  if ( v31 )
  {
    v26 = v31->klass;
    v27 = *(unsigned __int16 *)&v31->klass->_2.rank;
    if ( *(_WORD *)&v31->klass->_2.rank )
    {
      v28 = &v26->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_35;
      }
      v29 = (__int64)&v26->vtable[*v28];
    }
    else
    {
LABEL_35:
      v29 = sub_2237E2C(v31, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(v31, *(_QWORD *)(v29 + 8));
  }
  return v25;
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
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x21
  System_Func_object__bool__o *v11; // x20
  Il2CppObject *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_5938B38 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_IndividualityPolicyEntity___);
    sub_21FFC50(&System_Func_IndividualityPolicyEntity__bool__TypeInfo);
    sub_21FFC50(&Method_IndividualityPolicyMaster___c__DisplayClass1_0__TryGetEntityByPolicyValue_b__0__);
    sub_21FFC50(&IndividualityPolicyMaster___c__DisplayClass1_0_TypeInfo);
    byte_5938B38 = 1;
  }
  v7 = sub_21FFEBC(IndividualityPolicyMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_21FFECC(v8, v9);
  list = this->fields.list;
  *(_DWORD *)(v7 + 16) = policyValue;
  v11 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_IndividualityPolicyEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_IndividualityPolicyMaster___c__DisplayClass1_0__TryGetEntityByPolicyValue_b__0__,
    0);
  v12 = System_Linq_Enumerable__FirstOrDefault_object__59044732(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_IndividualityPolicyEntity___);
  *entity = (IndividualityPolicyEntity_o *)v12;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)entity, (int32_t)v12, v13, v14, v15, v16, v17, v18);
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
    sub_21FFECC(this, 0);
  return e->fields.policyValue == this->fields.policyValue;
}