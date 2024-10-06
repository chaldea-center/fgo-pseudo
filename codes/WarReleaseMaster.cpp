void __fastcall WarReleaseMaster___ctor(WarReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A70F0C & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_WarReleaseMaster__WarReleaseEntity__string___ctor__, method);
    byte_4A70F0C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    517,
    (const MethodInfo_312C8C0 *)Method_DataMasterBase_WarReleaseMaster__WarReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarReleaseEntity_array *__fastcall WarReleaseMaster__GetEntities(
        WarReleaseMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  System_Func_object__bool__o *v14; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_4A70F0A & 1) == 0 )
  {
    sub_1B90010(&Method_System_Linq_Enumerable_Cast_WarReleaseEntity___, *(_QWORD *)&warId);
    sub_1B90010(&Method_System_Linq_Enumerable_ToArray_WarReleaseEntity___, v5);
    sub_1B90010(&Method_System_Linq_Enumerable_Where_WarReleaseEntity___, v6);
    sub_1B90010(&System_Func_WarReleaseEntity__bool__TypeInfo, v7);
    sub_1B90010(&Method_WarReleaseMaster___c__DisplayClass0_0__GetEntities_b__0__, v8);
    sub_1B90010(&WarReleaseMaster___c__DisplayClass0_0_TypeInfo, v9);
    byte_4A70F0A = 1;
  }
  v10 = sub_1B9025C(WarReleaseMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1B9026C(v11, v12);
  *(_DWORD *)(v10 + 16) = warId;
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_2E9E32C *)Method_System_Linq_Enumerable_Cast_WarReleaseEntity___);
  v14 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_WarReleaseEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v10,
    Method_WarReleaseMaster___c__DisplayClass0_0__GetEntities_b__0__,
    0LL);
  v15 = System_Linq_Enumerable__Where_object_(
          v13,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_2ECC92C *)Method_System_Linq_Enumerable_Where_WarReleaseEntity___);
  return (WarReleaseEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                     v15,
                                     (const MethodInfo_2EC6F94 *)Method_System_Linq_Enumerable_ToArray_WarReleaseEntity___);
}


// local variable allocation has failed, the output may be wrong!
WarReleaseEntity_o *__fastcall WarReleaseMaster__GetEntity(
        WarReleaseMaster_o *this,
        int32_t warId,
        int32_t condType,
        int32_t condId,
        int64_t condNum,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4A70F0D & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_WarReleaseMaster__WarReleaseEntity__string__GetEntity__, *(_QWORD *)&warId);
    byte_4A70F0D = 1;
  }
  PK = (Il2CppObject *)WarReleaseEntity__CreatePK(warId, condType, condId, condNum, (const MethodInfo *)condNum);
  return (WarReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_312C900 *)Method_DataMasterBase_WarReleaseMaster__WarReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
WarReleaseEntity_o *__fastcall WarReleaseMaster__GetOpenEntity(
        WarReleaseMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  WarReleaseEntity_array *Entities; // x0
  WarReleaseMaster___c_c *v13; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x19
  System_Func_object__int__o *_9__1_0; // x20
  Il2CppObject *v16; // x21
  struct WarReleaseMaster___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v20; // x0
  __int64 v21; // x1
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v23; // x19
  __int64 v24; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v27; // x1
  __int64 v28; // x19
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  WarReleaseEntity_o *v37; // x0
  const MethodInfo *v38; // x1
  WarReleaseEntity_o *v39; // x21
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0

  if ( (byte_4A70F0B & 1) == 0 )
  {
    sub_1B90010(&Method_System_Linq_Enumerable_OrderByDescending_WarReleaseEntity__int___, *(_QWORD *)&warId);
    sub_1B90010(&System_Func_WarReleaseEntity__int__TypeInfo, v5);
    sub_1B90010(&System_IDisposable_TypeInfo, v6);
    sub_1B90010(&System_Collections_Generic_IEnumerable_WarReleaseEntity__TypeInfo, v7);
    sub_1B90010(&System_Collections_Generic_IEnumerator_WarReleaseEntity__TypeInfo, v8);
    sub_1B90010(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1B90010(&Method_WarReleaseMaster___c__GetOpenEntity_b__1_0__, v10);
    sub_1B90010(&WarReleaseMaster___c_TypeInfo, v11);
    byte_4A70F0B = 1;
  }
  Entities = WarReleaseMaster__GetEntities(this, warId, method);
  v13 = WarReleaseMaster___c_TypeInfo;
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)Entities;
  if ( !WarReleaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarReleaseMaster___c_TypeInfo);
    v13 = WarReleaseMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Func_object__int__o *)v13->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = WarReleaseMaster___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__1_0 = (System_Func_object__int__o *)sub_1B9025C(System_Func_WarReleaseEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__1_0, v16, Method_WarReleaseMaster___c__GetOpenEntity_b__1_0__, 0LL);
    static_fields = WarReleaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_WarReleaseEntity__int__o *)_9__1_0;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v18, v19);
  }
  v20 = System_Linq_Enumerable__OrderByDescending_object__int_(
          v14,
          (System_Func_TSource__TKey__o *)_9__1_0,
          (const MethodInfo_2EB8C70 *)Method_System_Linq_Enumerable_OrderByDescending_WarReleaseEntity__int___);
  if ( !v20 )
    sub_1B9026C(0LL, v21);
  klass = v20->klass;
  v23 = v20;
  v24 = *(unsigned __int16 *)(&v20->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v20->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_WarReleaseEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_WarReleaseEntity__TypeInfo )
    {
      --v24;
      p_offset += 4;
      if ( !v24 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_14:
    p_method = sub_1BE1FF0(v20, System_Collections_Generic_IEnumerable_WarReleaseEntity__TypeInfo, 0LL);
  }
  v28 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
          v23,
          *(_QWORD *)(p_method + 8));
  if ( !v28 )
    sub_1B9026C(0LL, v27);
  while ( 1 )
  {
    v29 = *(_QWORD *)v28;
    v30 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
    {
      v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v31 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_21;
      }
      v32 = v29 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_21:
      v32 = sub_1BE1FF0(v28, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v28, *(_QWORD *)(v32 + 8)) & 1) == 0 )
      break;
    v33 = *(_QWORD *)v28;
    v34 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
    {
      v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_WarReleaseEntity__c **)v35 - 1) != System_Collections_Generic_IEnumerator_WarReleaseEntity__TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_28;
      }
      v36 = v33 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_28:
      v36 = sub_1BE1FF0(v28, System_Collections_Generic_IEnumerator_WarReleaseEntity__TypeInfo, 0LL);
    }
    v37 = (WarReleaseEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v28, *(_QWORD *)(v36 + 8));
    v39 = v37;
    if ( !v37 )
      sub_1B9026C(0LL, v38);
    if ( WarReleaseEntity__IsRelease(v37, v38) )
      goto LABEL_34;
  }
  v39 = 0LL;
LABEL_34:
  v40 = *(_QWORD *)v28;
  v41 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
  {
    v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      --v41;
      v42 += 4;
      if ( !v41 )
        goto LABEL_38;
    }
    v43 = v40 + 16LL * *v42 + 312;
  }
  else
  {
LABEL_38:
    v43 = sub_1BE1FF0(v28, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v43)(v28, *(_QWORD *)(v43 + 8));
  return v39;
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

  if ( (byte_4A70F0E & 1) == 0 )
  {
    sub_1B90010(&Method_DataMasterBase_WarReleaseMaster__WarReleaseEntity__string__TryGetEntity__, entity);
    byte_4A70F0E = 1;
  }
  PK = (Il2CppObject *)WarReleaseEntity__CreatePK(warId, condType, condId, condNum, *(const MethodInfo **)&condId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_312C950 *)Method_DataMasterBase_WarReleaseMaster__WarReleaseEntity__string__TryGetEntity__);
}


void __fastcall WarReleaseMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A70F0F & 1) == 0 )
  {
    sub_1B90010(&WarReleaseMaster___c_TypeInfo, v1);
    byte_4A70F0F = 1;
  }
  v2 = (Il2CppObject *)sub_1B9025C(WarReleaseMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarReleaseMaster___c_TypeInfo->static_fields->__9 = (struct WarReleaseMaster___c_o *)v2;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)WarReleaseMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B9026C(this, 0LL);
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
    sub_1B9026C(this, 0LL);
  return v->fields.warId == this->fields.warId;
}