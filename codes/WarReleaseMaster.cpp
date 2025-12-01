void WarReleaseMaster___ctor(WarReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC86A0 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_WarReleaseMaster__WarReleaseEntity__string___ctor__);
    byte_4CC86A0 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    524,
    (const MethodInfo_340B614 *)Method_DataMasterBase_WarReleaseMaster__WarReleaseEntity__string___ctor__);
}


WarReleaseEntity_array *WarReleaseMaster__GetEntities(
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

  if ( (byte_4CC869E & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Cast_WarReleaseEntity___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_WarReleaseEntity___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_WarReleaseEntity___);
    sub_1C713B0(&System_Func_WarReleaseEntity__bool__TypeInfo);
    sub_1C713B0(&Method_WarReleaseMaster___c__DisplayClass0_0__GetEntities_b__0__);
    sub_1C713B0(&WarReleaseMaster___c__DisplayClass0_0_TypeInfo);
    byte_4CC869E = 1;
  }
  v5 = sub_1C715FC(WarReleaseMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C71608(v6, v7);
  *(_DWORD *)(v5 + 16) = warId;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_object_(
                                                              (System_Collections_IEnumerable_o *)this->fields.list,
                                                              (const MethodInfo_31598C0 *)Method_System_Linq_Enumerable_Cast_WarReleaseEntity___);
  v9 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_WarReleaseEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarReleaseMaster___c__DisplayClass0_0__GetEntities_b__0__,
    0);
  v10 = System_Linq_Enumerable__Where_object_(
          v8,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_WarReleaseEntity___);
  return (WarReleaseEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                     v10,
                                     (const MethodInfo_318AFEC *)Method_System_Linq_Enumerable_ToArray_WarReleaseEntity___);
}


WarReleaseEntity_o *WarReleaseMaster__GetEntity(
        WarReleaseMaster_o *this,
        int32_t warId,
        int32_t condType,
        int32_t condId,
        int64_t condNum,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CC86A1 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_WarReleaseMaster__WarReleaseEntity__string__GetEntity__);
    byte_4CC86A1 = 1;
  }
  PK = (Il2CppObject *)WarReleaseEntity__CreatePK(warId, condType, condId, condNum, (const MethodInfo *)condNum);
  return (WarReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_340D938 *)Method_DataMasterBase_WarReleaseMaster__WarReleaseEntity__string__GetEntity__);
}


WarReleaseEntity_o *WarReleaseMaster__GetOpenEntity(WarReleaseMaster_o *this, int32_t warId, const MethodInfo *method)
{
  WarReleaseEntity_array *Entities; // x0
  WarReleaseMaster___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  System_Func_object__int__o *_9__1_0; // x20
  Il2CppObject *v9; // x21
  struct WarReleaseMaster___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v17; // x0
  __int64 v18; // x1
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v20; // x19
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x19
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  WarReleaseEntity_o *v34; // x0
  const MethodInfo *v35; // x1
  WarReleaseEntity_o *v36; // x21
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0

  if ( (byte_4CC869F & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_OrderByDescending_WarReleaseEntity__int___);
    sub_1C713B0(&System_Func_WarReleaseEntity__int__TypeInfo);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerable_WarReleaseEntity__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_WarReleaseEntity__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&Method_WarReleaseMaster___c__GetOpenEntity_b__1_0__);
    sub_1C713B0(&WarReleaseMaster___c_TypeInfo);
    byte_4CC869F = 1;
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
    _9__1_0 = (System_Func_object__int__o *)sub_1C715FC(System_Func_WarReleaseEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__1_0, v9, Method_WarReleaseMaster___c__GetOpenEntity_b__1_0__, 0);
    static_fields = WarReleaseMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_WarReleaseEntity__int__o *)_9__1_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v11, v12, v13, v14, v15, v16);
  }
  v17 = System_Linq_Enumerable__OrderByDescending_object__int_(
          v7,
          (System_Func_TSource__TKey__o *)_9__1_0,
          (const MethodInfo_317AEBC *)Method_System_Linq_Enumerable_OrderByDescending_WarReleaseEntity__int___);
  if ( !v17 )
    sub_1C71608(0, v18);
  klass = v17->klass;
  v20 = v17;
  v21 = *(unsigned __int16 *)&v17->klass->_2.rank;
  if ( *(_WORD *)&v17->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_WarReleaseEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_WarReleaseEntity__TypeInfo )
    {
      --v21;
      p_offset += 4;
      if ( !v21 )
        goto LABEL_14;
    }
    v23 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_14:
    v23 = sub_1C47738(v17, System_Collections_Generic_IEnumerable_WarReleaseEntity__TypeInfo, 0);
  }
  v25 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v23)(v20, *(_QWORD *)(v23 + 8));
  if ( !v25 )
    sub_1C71608(0, v24);
  while ( 1 )
  {
    v26 = *(_QWORD *)v25;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v28 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_21;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_21:
      v29 = sub_1C47738(v25, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v25, *(_QWORD *)(v29 + 8)) & 1) == 0 )
      break;
    v30 = *(_QWORD *)v25;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_WarReleaseEntity__c **)v32 - 1) != System_Collections_Generic_IEnumerator_WarReleaseEntity__TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_28;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_28:
      v33 = sub_1C47738(v25, System_Collections_Generic_IEnumerator_WarReleaseEntity__TypeInfo, 0);
    }
    v34 = (WarReleaseEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v25, *(_QWORD *)(v33 + 8));
    v36 = v34;
    if ( !v34 )
      sub_1C71608(0, v35);
    if ( WarReleaseEntity__IsRelease(v34, v35) )
      goto LABEL_34;
  }
  v36 = 0;
LABEL_34:
  v37 = *(_QWORD *)v25;
  v38 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
  {
    v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_38;
    }
    v40 = v37 + 16LL * *v39 + 312;
  }
  else
  {
LABEL_38:
    v40 = sub_1C47738(v25, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v40)(v25, *(_QWORD *)(v40 + 8));
  return v36;
}


// local variable allocation has failed, the output may be wrong!
bool WarReleaseMaster__TryGetEntity(
        WarReleaseMaster_o *this,
        WarReleaseEntity_o **entity,
        int32_t warId,
        int32_t condType,
        int32_t condId,
        int64_t condNum,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CC86A2 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_WarReleaseMaster__WarReleaseEntity__string__TryGetEntity__);
    byte_4CC86A2 = 1;
  }
  PK = (Il2CppObject *)WarReleaseEntity__CreatePK(warId, condType, condId, condNum, *(const MethodInfo **)&condId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_340D984 *)Method_DataMasterBase_WarReleaseMaster__WarReleaseEntity__string__TryGetEntity__);
}


void WarReleaseMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC86A3 & 1) == 0 )
  {
    sub_1C713B0(&WarReleaseMaster___c_TypeInfo);
    byte_4CC86A3 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(WarReleaseMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarReleaseMaster___c_TypeInfo->static_fields->__9 = (struct WarReleaseMaster___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)WarReleaseMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarReleaseMaster___c___ctor(WarReleaseMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t WarReleaseMaster___c___GetOpenEntity_b__1_0(
        WarReleaseMaster___c_o *this,
        WarReleaseEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1C71608(this, 0);
  return v->fields.priority;
}


void WarReleaseMaster___c__DisplayClass0_0___ctor(
        WarReleaseMaster___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarReleaseMaster___c__DisplayClass0_0___GetEntities_b__0(
        WarReleaseMaster___c__DisplayClass0_0_o *this,
        WarReleaseEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1C71608(this, 0);
  return v->fields.warId == this->fields.warId;
}