void __fastcall WarReleaseMaster___ctor(WarReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C230C8 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_WarReleaseMaster__WarReleaseEntity__string___ctor__, method);
    byte_4C230C8 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    524,
    (const MethodInfo_329D5DC *)Method_DataMasterBase_WarReleaseMaster__WarReleaseEntity__string___ctor__);
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

  if ( (byte_4C230C6 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_Cast_WarReleaseEntity___, *(_QWORD *)&warId);
    sub_1C3B764(&Method_System_Linq_Enumerable_ToArray_WarReleaseEntity___, v5);
    sub_1C3B764(&Method_System_Linq_Enumerable_Where_WarReleaseEntity___, v6);
    sub_1C3B764(&System_Func_WarReleaseEntity__bool__TypeInfo, v7);
    sub_1C3B764(&Method_WarReleaseMaster___c__DisplayClass0_0__GetEntities_b__0__, v8);
    sub_1C3B764(&WarReleaseMaster___c__DisplayClass0_0_TypeInfo, v9);
    byte_4C230C6 = 1;
  }
  v10 = sub_1C3B9B0(WarReleaseMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1C3B9C0(v11, v12);
  *(_DWORD *)(v10 + 16) = warId;
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_2FFE760 *)Method_System_Linq_Enumerable_Cast_WarReleaseEntity___);
  v14 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_WarReleaseEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v10,
    Method_WarReleaseMaster___c__DisplayClass0_0__GetEntities_b__0__,
    0LL);
  v15 = System_Linq_Enumerable__Where_object_(
          v13,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_3030BDC *)Method_System_Linq_Enumerable_Where_WarReleaseEntity___);
  return (WarReleaseEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                     v15,
                                     (const MethodInfo_302ACC8 *)Method_System_Linq_Enumerable_ToArray_WarReleaseEntity___);
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

  if ( (byte_4C230C9 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_WarReleaseMaster__WarReleaseEntity__string__GetEntity__, *(_QWORD *)&warId);
    byte_4C230C9 = 1;
  }
  PK = (Il2CppObject *)WarReleaseEntity__CreatePK(warId, condType, condId, condNum, (const MethodInfo *)condNum);
  return (WarReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_329F900 *)Method_DataMasterBase_WarReleaseMaster__WarReleaseEntity__string__GetEntity__);
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v24; // x0
  __int64 v25; // x1
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v27; // x19
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v31; // x1
  __int64 v32; // x19
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  WarReleaseEntity_o *v41; // x0
  const MethodInfo *v42; // x1
  WarReleaseEntity_o *v43; // x21
  __int64 v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0

  if ( (byte_4C230C7 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Linq_Enumerable_OrderByDescending_WarReleaseEntity__int___, *(_QWORD *)&warId);
    sub_1C3B764(&System_Func_WarReleaseEntity__int__TypeInfo, v5);
    sub_1C3B764(&System_IDisposable_TypeInfo, v6);
    sub_1C3B764(&System_Collections_Generic_IEnumerable_WarReleaseEntity__TypeInfo, v7);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_WarReleaseEntity__TypeInfo, v8);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1C3B764(&Method_WarReleaseMaster___c__GetOpenEntity_b__1_0__, v10);
    sub_1C3B764(&WarReleaseMaster___c_TypeInfo, v11);
    byte_4C230C7 = 1;
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
    _9__1_0 = (System_Func_object__int__o *)sub_1C3B9B0(System_Func_WarReleaseEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__1_0, v16, Method_WarReleaseMaster___c__GetOpenEntity_b__1_0__, 0LL);
    static_fields = WarReleaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_WarReleaseEntity__int__o *)_9__1_0;
    sub_1C3B708((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)_9__1_0, v18, v19, v20, v21, v22, v23);
  }
  v24 = System_Linq_Enumerable__OrderByDescending_object__int_(
          v14,
          (System_Func_TSource__TKey__o *)_9__1_0,
          (const MethodInfo_301A780 *)Method_System_Linq_Enumerable_OrderByDescending_WarReleaseEntity__int___);
  if ( !v24 )
    sub_1C3B9C0(0LL, v25);
  klass = v24->klass;
  v27 = v24;
  v28 = *(unsigned __int16 *)(&v24->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v24->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_WarReleaseEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_WarReleaseEntity__TypeInfo )
    {
      --v28;
      p_offset += 4;
      if ( !v28 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_14:
    p_method = sub_1C8D744(v24, System_Collections_Generic_IEnumerable_WarReleaseEntity__TypeInfo, 0LL);
  }
  v32 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
          v27,
          *(_QWORD *)(p_method + 8));
  if ( !v32 )
    sub_1C3B9C0(0LL, v31);
  while ( 1 )
  {
    v33 = *(_QWORD *)v32;
    v34 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
    {
      v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v35 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_21;
      }
      v36 = v33 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_21:
      v36 = sub_1C8D744(v32, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v32, *(_QWORD *)(v36 + 8)) & 1) == 0 )
      break;
    v37 = *(_QWORD *)v32;
    v38 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
    {
      v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_WarReleaseEntity__c **)v39 - 1) != System_Collections_Generic_IEnumerator_WarReleaseEntity__TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_28;
      }
      v40 = v37 + 16LL * *v39 + 312;
    }
    else
    {
LABEL_28:
      v40 = sub_1C8D744(v32, System_Collections_Generic_IEnumerator_WarReleaseEntity__TypeInfo, 0LL);
    }
    v41 = (WarReleaseEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v32, *(_QWORD *)(v40 + 8));
    v43 = v41;
    if ( !v41 )
      sub_1C3B9C0(0LL, v42);
    if ( WarReleaseEntity__IsRelease(v41, v42) )
      goto LABEL_34;
  }
  v43 = 0LL;
LABEL_34:
  v44 = *(_QWORD *)v32;
  v45 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
  {
    v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
    {
      --v45;
      v46 += 4;
      if ( !v45 )
        goto LABEL_38;
    }
    v47 = v44 + 16LL * *v46 + 312;
  }
  else
  {
LABEL_38:
    v47 = sub_1C8D744(v32, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v47)(v32, *(_QWORD *)(v47 + 8));
  return v43;
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

  if ( (byte_4C230CA & 1) == 0 )
  {
    sub_1C3B764(&Method_DataMasterBase_WarReleaseMaster__WarReleaseEntity__string__TryGetEntity__, entity);
    byte_4C230CA = 1;
  }
  PK = (Il2CppObject *)WarReleaseEntity__CreatePK(warId, condType, condId, condNum, *(const MethodInfo **)&condId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_329F94C *)Method_DataMasterBase_WarReleaseMaster__WarReleaseEntity__string__TryGetEntity__);
}


void __fastcall WarReleaseMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C230CB & 1) == 0 )
  {
    sub_1C3B764(&WarReleaseMaster___c_TypeInfo, v1);
    byte_4C230CB = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(WarReleaseMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarReleaseMaster___c_TypeInfo->static_fields->__9 = (struct WarReleaseMaster___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)WarReleaseMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C3B9C0(this, 0LL);
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
    sub_1C3B9C0(this, 0LL);
  return v->fields.warId == this->fields.warId;
}