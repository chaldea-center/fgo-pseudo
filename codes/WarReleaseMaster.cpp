void __fastcall WarReleaseMaster___ctor(WarReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C1FD & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_WarReleaseMaster__WarReleaseEntity__string___ctor__);
    byte_4A5C1FD = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    517,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_WarReleaseMaster__WarReleaseEntity__string___ctor__);
}


WarReleaseEntity_array *__fastcall WarReleaseMaster__GetEntities(
        WarReleaseMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x19
  System_Func_object__bool__o *v9; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_4A5C1FB & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Cast_WarReleaseEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_WarReleaseEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_WarReleaseEntity___);
    sub_1B885B0(&System_Func_WarReleaseEntity__bool__TypeInfo);
    sub_1B885B0(&Method_WarReleaseMaster___c__DisplayClass0_0__GetEntities_b__0__);
    sub_1B885B0(&WarReleaseMaster___c__DisplayClass0_0_TypeInfo);
    byte_4A5C1FB = 1;
  }
  v5 = sub_1B887FC(WarReleaseMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_DWORD *)(v5 + 16) = warId;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.list,
                                                              (const MethodInfo_2E8FA18 *)Method_System_Linq_Enumerable_Cast_WarReleaseEntity___);
  v9 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_WarReleaseEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarReleaseMaster___c__DisplayClass0_0__GetEntities_b__0__,
    0LL);
  v10 = System_Linq_Enumerable__Where_object_(
          v8,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_WarReleaseEntity___);
  return (WarReleaseEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                     v10,
                                     (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_WarReleaseEntity___);
}


WarReleaseEntity_o *__fastcall WarReleaseMaster__GetEntity(
        WarReleaseMaster_o *this,
        int32_t warId,
        int32_t condType,
        int32_t condId,
        int64_t condNum,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A5C1FE & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_WarReleaseMaster__WarReleaseEntity__string__GetEntity__);
    byte_4A5C1FE = 1;
  }
  PK = (Il2CppObject *)WarReleaseEntity__CreatePK(warId, condType, condId, condNum, (const MethodInfo *)condNum);
  return (WarReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_311DC8C *)Method_DataMasterBase_WarReleaseMaster__WarReleaseEntity__string__GetEntity__);
}


WarReleaseEntity_o *__fastcall WarReleaseMaster__GetOpenEntity(
        WarReleaseMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  WarReleaseEntity_array *Entities; // x0
  WarReleaseMaster___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  System_Func_object__int__o *_9__1_0; // x20
  Il2CppObject *v9; // x21
  struct WarReleaseMaster___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v13; // x0
  __int64 v14; // x1
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v16; // x19
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v20; // x1
  __int64 v21; // x19
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  WarReleaseEntity_o *v30; // x0
  const MethodInfo *v31; // x1
  WarReleaseEntity_o *v32; // x21
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0

  if ( (byte_4A5C1FC & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderByDescending_WarReleaseEntity__int___);
    sub_1B885B0(&System_Func_WarReleaseEntity__int__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_WarReleaseEntity__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_WarReleaseEntity__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_WarReleaseMaster___c__GetOpenEntity_b__1_0__);
    sub_1B885B0(&WarReleaseMaster___c_TypeInfo);
    byte_4A5C1FC = 1;
  }
  Entities = WarReleaseMaster__GetEntities(this, warId, method);
  v6 = WarReleaseMaster___c_TypeInfo;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)Entities;
  if ( !WarReleaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarReleaseMaster___c_TypeInfo);
    v6 = WarReleaseMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Func_object__int__o *)v6->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = WarReleaseMaster___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__1_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_WarReleaseEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__1_0, v9, Method_WarReleaseMaster___c__GetOpenEntity_b__1_0__, 0LL);
    static_fields = WarReleaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_WarReleaseEntity__int__o *)_9__1_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v11, v12);
  }
  v13 = System_Linq_Enumerable__OrderByDescending_object__int_(
          v7,
          (System_Func_TSource__TKey__o *)_9__1_0,
          (const MethodInfo_2EAA2F0 *)Method_System_Linq_Enumerable_OrderByDescending_WarReleaseEntity__int___);
  if ( !v13 )
    sub_1B8880C(0LL, v14);
  klass = v13->klass;
  v16 = v13;
  v17 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_WarReleaseEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_WarReleaseEntity__TypeInfo )
    {
      --v17;
      p_offset += 4;
      if ( !v17 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_14:
    p_method = sub_1BDA590(v13, System_Collections_Generic_IEnumerable_WarReleaseEntity__TypeInfo, 0LL);
  }
  v21 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
          v16,
          *(_QWORD *)(p_method + 8));
  if ( !v21 )
    sub_1B8880C(0LL, v20);
  while ( 1 )
  {
    v22 = *(_QWORD *)v21;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v24 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_21;
      }
      v25 = v22 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_21:
      v25 = sub_1BDA590(v21, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v21, *(_QWORD *)(v25 + 8)) & 1) == 0 )
      break;
    v26 = *(_QWORD *)v21;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_WarReleaseEntity__c **)v28 - 1) != System_Collections_Generic_IEnumerator_WarReleaseEntity__TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_28;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_28:
      v29 = sub_1BDA590(v21, System_Collections_Generic_IEnumerator_WarReleaseEntity__TypeInfo, 0LL);
    }
    v30 = (WarReleaseEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v21, *(_QWORD *)(v29 + 8));
    v32 = v30;
    if ( !v30 )
      sub_1B8880C(0LL, v31);
    if ( WarReleaseEntity__IsRelease(v30, v31) )
      goto LABEL_34;
  }
  v32 = 0LL;
LABEL_34:
  v33 = *(_QWORD *)v21;
  v34 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
  {
    v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_38;
    }
    v36 = v33 + 16LL * *v35 + 312;
  }
  else
  {
LABEL_38:
    v36 = sub_1BDA590(v21, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v36)(v21, *(_QWORD *)(v36 + 8));
  return v32;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarReleaseMaster__TryGetEntity(
        WarReleaseMaster_o *this,
        WarReleaseEntity_o **entity,
        int32_t warId,
        int32_t condType,
        int32_t condId,
        int64_t condNum,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4A5C1FF & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_WarReleaseMaster__WarReleaseEntity__string__TryGetEntity__);
    byte_4A5C1FF = 1;
  }
  PK = (Il2CppObject *)WarReleaseEntity__CreatePK(warId, condType, condId, condNum, *(const MethodInfo **)&condId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_311DCDC *)Method_DataMasterBase_WarReleaseMaster__WarReleaseEntity__string__TryGetEntity__);
}


void __fastcall WarReleaseMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5C200 & 1) == 0 )
  {
    sub_1B885B0(&WarReleaseMaster___c_TypeInfo);
    byte_4A5C200 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(WarReleaseMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  WarReleaseMaster___c_TypeInfo->static_fields->__9 = (struct WarReleaseMaster___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)WarReleaseMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void __fastcall WarReleaseMaster___c___ctor(WarReleaseMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall WarReleaseMaster___c___GetOpenEntity_b__1_0(
        WarReleaseMaster___c_o *this,
        WarReleaseEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1B8880C(this, 0LL);
  return v->fields.priority;
}


void __fastcall WarReleaseMaster___c__DisplayClass0_0___ctor(
        WarReleaseMaster___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarReleaseMaster___c__DisplayClass0_0___GetEntities_b__0(
        WarReleaseMaster___c__DisplayClass0_0_o *this,
        WarReleaseEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1B8880C(this, 0LL);
  return v->fields.warId == this->fields.warId;
}