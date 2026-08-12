void WarReleaseMaster___ctor(WarReleaseMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5971B4D & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_WarReleaseMaster__WarReleaseEntity__string___ctor__);
    byte_5971B4D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    526,
    (const MethodInfo_3F1339C *)Method_DataMasterBase_WarReleaseMaster__WarReleaseEntity__string___ctor__);
}


WarReleaseEntity_array *WarReleaseMaster__GetEntities(
        WarReleaseMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_IEnumerable_o *list; // x0
  const MethodInfo_3868AB0 *v9; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x19
  System_Func_object__bool__o *v11; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0

  if ( (byte_5971B4B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Cast_WarReleaseEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_WarReleaseEntity___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_WarReleaseEntity___);
    sub_2213A60(&System_Func_WarReleaseEntity__bool__TypeInfo);
    sub_2213A60(&Method_WarReleaseMaster___c__DisplayClass0_0__GetEntities_b__0__);
    sub_2213A60(&WarReleaseMaster___c__DisplayClass0_0_TypeInfo);
    byte_5971B4B = 1;
  }
  v5 = sub_2213CCC(WarReleaseMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  list = (System_Collections_IEnumerable_o *)this->fields.list;
  v9 = (const MethodInfo_3868AB0 *)Method_System_Linq_Enumerable_Cast_WarReleaseEntity___;
  *(_DWORD *)(v5 + 16) = warId;
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Cast_object_(list, v9);
  v11 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_WarReleaseEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_WarReleaseMaster___c__DisplayClass0_0__GetEntities_b__0__,
    0);
  v12 = System_Linq_Enumerable__Where_object_(
          v10,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_WarReleaseEntity___);
  return (WarReleaseEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                     v12,
                                     (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_WarReleaseEntity___);
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

  if ( (byte_5971B4E & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_WarReleaseMaster__WarReleaseEntity__string__GetEntity__);
    byte_5971B4E = 1;
  }
  PK = (Il2CppObject *)WarReleaseEntity__CreatePK(warId, condType, condId, condNum, (const MethodInfo *)condNum);
  return (WarReleaseEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_3F157EC *)Method_DataMasterBase_WarReleaseMaster__WarReleaseEntity__string__GetEntity__);
}


WarReleaseEntity_o *WarReleaseMaster__GetOpenEntity(WarReleaseMaster_o *this, int32_t warId, const MethodInfo *method)
{
  WarReleaseEntity_array *Entities; // x0
  __int64 v6; // x1
  WarReleaseMaster___c_c *v7; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x19
  struct WarReleaseMaster___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__1_0; // x20
  Il2CppObject *v11; // x21
  struct WarReleaseMaster___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v19; // x0
  __int64 v20; // x1
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v22; // x19
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 v25; // x0
  __int64 IsRelease; // x0
  __int64 v27; // x1
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  __int64 v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  WarReleaseEntity_o *v36; // x0
  const MethodInfo *v37; // x1
  WarReleaseEntity_o *v38; // x19
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  __int64 v44; // [xsp+18h] [xbp-38h]

  if ( (byte_5971B4C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_OrderByDescending_WarReleaseEntity__int___);
    sub_2213A60(&System_Func_WarReleaseEntity__int__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_WarReleaseEntity__TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_WarReleaseEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_WarReleaseMaster___c__GetOpenEntity_b__1_0__);
    sub_2213A60(&WarReleaseMaster___c_TypeInfo);
    byte_5971B4C = 1;
  }
  Entities = WarReleaseMaster__GetEntities(this, warId, method);
  v7 = WarReleaseMaster___c_TypeInfo;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)Entities;
  if ( !*(&WarReleaseMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarReleaseMaster___c_TypeInfo, v6);
    v7 = WarReleaseMaster___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__1_0 = (System_Func_object__int__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, v6);
      static_fields = WarReleaseMaster___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_object__int__o *)sub_2213CCC(System_Func_WarReleaseEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__1_0, v11, Method_WarReleaseMaster___c__GetOpenEntity_b__1_0__, 0);
    v12 = WarReleaseMaster___c_TypeInfo->static_fields;
    v12->__9__1_0 = (struct System_Func_WarReleaseEntity__int__o *)_9__1_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->__9__1_0, (int32_t)_9__1_0, v13, v14, v15, v16, v17, v18);
  }
  v19 = System_Linq_Enumerable__OrderByDescending_object__int_(
          v8,
          (System_Func_TSource__TKey__o *)_9__1_0,
          (const MethodInfo_38891C4 *)Method_System_Linq_Enumerable_OrderByDescending_WarReleaseEntity__int___);
  if ( !v19 )
    sub_2213CDC(0, v20);
  klass = v19->klass;
  v22 = v19;
  v23 = *(unsigned __int16 *)&v19->klass->_2.rank;
  if ( *(_WORD *)&v19->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_WarReleaseEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_WarReleaseEntity__TypeInfo )
    {
      --v23;
      p_offset += 4;
      if ( !v23 )
        goto LABEL_14;
    }
    v25 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_14:
    v25 = sub_224BC3C(v19, System_Collections_Generic_IEnumerable_WarReleaseEntity__TypeInfo, 0);
  }
  IsRelease = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v25)(
                v22,
                *(_QWORD *)(v25 + 8));
  v44 = IsRelease;
  while ( 1 )
  {
    if ( !v44 )
      sub_2213CDC(IsRelease, v27);
    v28 = *(_QWORD *)v44;
    v29 = *(unsigned __int16 *)(*(_QWORD *)v44 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v44 + 302LL) )
    {
      v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v30 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_22;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_22:
      v31 = sub_224BC3C(v44, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v44, *(_QWORD *)(v31 + 8)) & 1) == 0 )
      break;
    v32 = *(_QWORD *)v44;
    v33 = *(unsigned __int16 *)(*(_QWORD *)v44 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v44 + 302LL) )
    {
      v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_WarReleaseEntity__c **)v34 - 1) != System_Collections_Generic_IEnumerator_WarReleaseEntity__TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_29;
      }
      v35 = v32 + 16LL * *v34 + 312;
    }
    else
    {
LABEL_29:
      v35 = sub_224BC3C(v44, System_Collections_Generic_IEnumerator_WarReleaseEntity__TypeInfo, 0);
    }
    v36 = (WarReleaseEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v44, *(_QWORD *)(v35 + 8));
    v38 = v36;
    if ( !v36 )
      sub_2213CDC(0, v37);
    IsRelease = WarReleaseEntity__IsRelease(v36, v37);
    if ( (IsRelease & 1) != 0 )
      goto LABEL_35;
  }
  v38 = 0;
LABEL_35:
  v39 = *(_QWORD *)v44;
  v40 = *(unsigned __int16 *)(*(_QWORD *)v44 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v44 + 302LL) )
  {
    v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
    {
      --v40;
      v41 += 4;
      if ( !v40 )
        goto LABEL_39;
    }
    v42 = v39 + 16LL * *v41 + 312;
  }
  else
  {
LABEL_39:
    v42 = sub_224BC3C(v44, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v42)(v44, *(_QWORD *)(v42 + 8));
  return v38;
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

  if ( (byte_5971B4F & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_WarReleaseMaster__WarReleaseEntity__string__TryGetEntity__);
    byte_5971B4F = 1;
  }
  PK = (Il2CppObject *)WarReleaseEntity__CreatePK(warId, condType, condId, condNum, *(const MethodInfo **)&condId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3F15838 *)Method_DataMasterBase_WarReleaseMaster__WarReleaseEntity__string__TryGetEntity__);
}


void WarReleaseMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5971B50 & 1) == 0 )
  {
    sub_2213A60(&WarReleaseMaster___c_TypeInfo);
    byte_5971B50 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(WarReleaseMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarReleaseMaster___c_TypeInfo->static_fields->__9 = (struct WarReleaseMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)WarReleaseMaster___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, 0);
  return v->fields.warId == this->fields.warId;
}