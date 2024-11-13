void __fastcall WarReleaseMaster___ctor(WarReleaseMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B172B6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_WarReleaseMaster__WarReleaseEntity__string___ctor__, method, v2);
    byte_4B172B6 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    517,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_WarReleaseMaster__WarReleaseEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarReleaseEntity_array *__fastcall WarReleaseMaster__GetEntities(
        WarReleaseMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x19
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_Func_object__bool__o *v23; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0

  if ( (byte_4B172B4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Cast_WarReleaseEntity___, *(_QWORD *)&warId, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_WarReleaseEntity___, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_WarReleaseEntity___, v8, v9);
    sub_1BCA7E0(&System_Func_WarReleaseEntity__bool__TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_WarReleaseMaster___c__DisplayClass0_0__GetEntities_b__0__, v12, v13);
    sub_1BCA7E0(&WarReleaseMaster___c__DisplayClass0_0_TypeInfo, v14, v15);
    byte_4B172B4 = 1;
  }
  v16 = sub_1BCAA2C(WarReleaseMaster___c__DisplayClass0_0_TypeInfo, *(_QWORD *)&warId, method, v3);
  System_Object___ctor((Il2CppObject *)v16, 0LL);
  if ( !v16 )
    sub_1BCAA3C(v17, v18);
  *(_DWORD *)(v16 + 16) = warId;
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_2F20F80 *)Method_System_Linq_Enumerable_Cast_WarReleaseEntity___);
  v23 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_WarReleaseEntity__bool__TypeInfo, v20, v21, v22);
  System_Func_object__bool____ctor(
    v23,
    (Il2CppObject *)v16,
    Method_WarReleaseMaster___c__DisplayClass0_0__GetEntities_b__0__,
    0LL);
  v24 = System_Linq_Enumerable__Where_object_(
          v19,
          (System_Func_TSource__bool__o *)v23,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_WarReleaseEntity___);
  return (WarReleaseEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                     v24,
                                     (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_WarReleaseEntity___);
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

  if ( (byte_4B172B7 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_WarReleaseMaster__WarReleaseEntity__string__GetEntity__,
      *(_QWORD *)&warId,
      *(_QWORD *)&condType);
    byte_4B172B7 = 1;
  }
  PK = (Il2CppObject *)WarReleaseEntity__CreatePK(warId, condType, condId, condNum, (const MethodInfo *)condNum);
  return (WarReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_31B3198 *)Method_DataMasterBase_WarReleaseMaster__WarReleaseEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
WarReleaseEntity_o *__fastcall WarReleaseMaster__GetOpenEntity(
        WarReleaseMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  WarReleaseEntity_array *Entities; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  WarReleaseMaster___c_c *v23; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x19
  System_Func_object__int__o *_9__1_0; // x20
  Il2CppObject *v26; // x21
  struct WarReleaseMaster___c_StaticFields *static_fields; // x0
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v34; // x0
  __int64 v35; // x1
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
  WarReleaseEntity_o *v51; // x0
  const MethodInfo *v52; // x1
  WarReleaseEntity_o *v53; // x21
  __int64 v54; // x8
  __int64 v55; // x9
  int *v56; // x10
  __int64 v57; // x0

  if ( (byte_4B172B5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderByDescending_WarReleaseEntity__int___, *(_QWORD *)&warId, method);
    sub_1BCA7E0(&System_Func_WarReleaseEntity__int__TypeInfo, v5, v6);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_WarReleaseEntity__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_WarReleaseEntity__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_WarReleaseMaster___c__GetOpenEntity_b__1_0__, v15, v16);
    sub_1BCA7E0(&WarReleaseMaster___c_TypeInfo, v17, v18);
    byte_4B172B5 = 1;
  }
  Entities = WarReleaseMaster__GetEntities(this, warId, method);
  v23 = WarReleaseMaster___c_TypeInfo;
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)Entities;
  if ( !WarReleaseMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarReleaseMaster___c_TypeInfo, v20);
    v23 = WarReleaseMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Func_object__int__o *)v23->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23, v20);
      v23 = WarReleaseMaster___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v23->static_fields->__9;
    _9__1_0 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_WarReleaseEntity__int__TypeInfo, v20, v21, v22);
    System_Func_object__int____ctor(_9__1_0, v26, Method_WarReleaseMaster___c__GetOpenEntity_b__1_0__, 0LL);
    static_fields = WarReleaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_WarReleaseEntity__int__o *)_9__1_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__1_0, (int64_t)_9__1_0, v28, v29, v30, v31, v32, v33);
  }
  v34 = System_Linq_Enumerable__OrderByDescending_object__int_(
          v24,
          (System_Func_TSource__TKey__o *)_9__1_0,
          (const MethodInfo_2F3B8C4 *)Method_System_Linq_Enumerable_OrderByDescending_WarReleaseEntity__int___);
  if ( !v34 )
    sub_1BCAA3C(0LL, v35);
  klass = v34->klass;
  v37 = v34;
  v38 = *(unsigned __int16 *)(&v34->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v34->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_WarReleaseEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_WarReleaseEntity__TypeInfo )
    {
      --v38;
      p_offset += 4;
      if ( !v38 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_14:
    p_method = sub_1C1C7C0(v34, System_Collections_Generic_IEnumerable_WarReleaseEntity__TypeInfo, 0LL);
  }
  v42 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
          v37,
          *(_QWORD *)(p_method + 8));
  if ( !v42 )
    sub_1BCAA3C(0LL, v41);
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
          goto LABEL_21;
      }
      v46 = v43 + 16LL * *v45 + 312;
    }
    else
    {
LABEL_21:
      v46 = sub_1C1C7C0(v42, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v42, *(_QWORD *)(v46 + 8)) & 1) == 0 )
      break;
    v47 = *(_QWORD *)v42;
    v48 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
    {
      v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_WarReleaseEntity__c **)v49 - 1) != System_Collections_Generic_IEnumerator_WarReleaseEntity__TypeInfo )
      {
        --v48;
        v49 += 4;
        if ( !v48 )
          goto LABEL_28;
      }
      v50 = v47 + 16LL * *v49 + 312;
    }
    else
    {
LABEL_28:
      v50 = sub_1C1C7C0(v42, System_Collections_Generic_IEnumerator_WarReleaseEntity__TypeInfo, 0LL);
    }
    v51 = (WarReleaseEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v42, *(_QWORD *)(v50 + 8));
    v53 = v51;
    if ( !v51 )
      sub_1BCAA3C(0LL, v52);
    if ( WarReleaseEntity__IsRelease(v51, v52) )
      goto LABEL_34;
  }
  v53 = 0LL;
LABEL_34:
  v54 = *(_QWORD *)v42;
  v55 = *(unsigned __int16 *)(*(_QWORD *)v42 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v42 + 302LL) )
  {
    v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v56 - 1) != System_IDisposable_TypeInfo )
    {
      --v55;
      v56 += 4;
      if ( !v55 )
        goto LABEL_38;
    }
    v57 = v54 + 16LL * *v56 + 312;
  }
  else
  {
LABEL_38:
    v57 = sub_1C1C7C0(v42, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v57)(v42, *(_QWORD *)(v57 + 8));
  return v53;
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

  if ( (byte_4B172B8 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_WarReleaseMaster__WarReleaseEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&warId);
    byte_4B172B8 = 1;
  }
  PK = (Il2CppObject *)WarReleaseEntity__CreatePK(warId, condType, condId, condNum, *(const MethodInfo **)&condId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_WarReleaseMaster__WarReleaseEntity__string__TryGetEntity__);
}


void __fastcall WarReleaseMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B172B9 & 1) == 0 )
  {
    sub_1BCA7E0(&WarReleaseMaster___c_TypeInfo, v1, v2);
    byte_4B172B9 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(WarReleaseMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  WarReleaseMaster___c_TypeInfo->static_fields->__9 = (struct WarReleaseMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarReleaseMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  return v->fields.warId == this->fields.warId;
}