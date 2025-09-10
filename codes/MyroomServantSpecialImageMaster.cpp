void MyroomServantSpecialImageMaster___ctor(MyroomServantSpecialImageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C27800 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_MyroomServantSpecialImageMaster__MyroomServantSpecialImageEntity__string___ctor__);
    byte_4C27800 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    527,
    (const MethodInfo_338A52C *)Method_DataMasterBase_MyroomServantSpecialImageMaster__MyroomServantSpecialImageEntity__string___ctor__);
}


MyroomServantSpecialImageEntity_array *MyroomServantSpecialImageMaster__GetEntitiesByBaseLimitCount(
        MyroomServantSpecialImageMaster_o *this,
        int32_t svtId,
        int32_t baseLimitCount,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x19
  __int64 v8; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 v15; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int32_t *v18; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 v24; // x8
  struct System_Object_array *items; // x9
  _QWORD *v26; // x10
  __int64 size; // x11
  Il2CppClass **v28; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0
  MyroomServantSpecialImageMaster___c_c *v33; // x8
  System_Func_object__int__o *_9__0_0; // x20
  Il2CppObject *v35; // x21
  struct MyroomServantSpecialImageMaster___c_StaticFields *static_fields; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0

  if ( (byte_4C277FF & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_MyroomServantSpecialImageEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Linq_Enumerable_OrderBy_MyroomServantSpecialImageEntity__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_MyroomServantSpecialImageEntity___);
    sub_1C2D490(&System_Func_MyroomServantSpecialImageEntity__int__TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_MyroomServantSpecialImageEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_MyroomServantSpecialImageEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_MyroomServantSpecialImageEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_MyroomServantSpecialImageEntity__TypeInfo);
    sub_1C2D490(&Method_MyroomServantSpecialImageMaster___c__GetEntitiesByBaseLimitCount_b__0_0__);
    sub_1C2D490(&MyroomServantSpecialImageMaster___c_TypeInfo);
    byte_4C277FF = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_MyroomServantSpecialImageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_MyroomServantSpecialImageEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C2D6EC(0, v8);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_MyroomServantSpecialImageEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v10);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_9;
      }
      v15 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v15 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v15)(
            Enumerator,
            *(_QWORD *)(v15 + 8))
        & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_MyroomServantSpecialImageEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_MyroomServantSpecialImageEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_16;
      }
      v19 = (__int64)&v16->vtable[*v18];
    }
    else
    {
LABEL_16:
      v19 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_MyroomServantSpecialImageEntity__TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            Enumerator,
            *(_QWORD *)(v19 + 8));
    v24 = v20;
    if ( !v20 )
      sub_1C2D6EC(0, v21);
    if ( *(_DWORD *)(v20 + 16) == svtId && *(_DWORD *)(v20 + 24) == baseLimitCount )
    {
      if ( !v7 )
        sub_1C2D6EC(v20, v21);
      items = v7->fields._items;
      v26 = Method_System_Collections_Generic_List_MyroomServantSpecialImageEntity__Add__;
      ++v7->fields._version;
      if ( !items )
        sub_1C2D6EC(v20, v21);
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v20,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v24;
        sub_1C2D434((CGThumbnailListItem_o *)(v28 + 4), v24, v22, v23);
      }
    }
  }
  v29 = Enumerator->klass;
  v30 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v31 = &v29->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      --v30;
      v31 += 4;
      if ( !v30 )
        goto LABEL_30;
    }
    v32 = (__int64)&v29->vtable[*v31];
  }
  else
  {
LABEL_30:
    v32 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(Enumerator, *(_QWORD *)(v32 + 8));
  v33 = MyroomServantSpecialImageMaster___c_TypeInfo;
  if ( !MyroomServantSpecialImageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyroomServantSpecialImageMaster___c_TypeInfo);
    v33 = MyroomServantSpecialImageMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__int__o *)v33->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      v33 = MyroomServantSpecialImageMaster___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v33->static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_MyroomServantSpecialImageEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__0_0,
      v35,
      Method_MyroomServantSpecialImageMaster___c__GetEntitiesByBaseLimitCount_b__0_0__,
      0);
    static_fields = MyroomServantSpecialImageMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_MyroomServantSpecialImageEntity__int__o *)_9__0_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v37, v38);
  }
  v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v7,
                                                               (System_Func_TSource__TKey__o *)_9__0_0,
                                                               (const MethodInfo_30FE0A4 *)Method_System_Linq_Enumerable_OrderBy_MyroomServantSpecialImageEntity__int___);
  return (MyroomServantSpecialImageEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                    v39,
                                                    (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_MyroomServantSpecialImageEntity___);
}


MyroomServantSpecialImageEntity_o *MyroomServantSpecialImageMaster__GetEntity(
        MyroomServantSpecialImageMaster_o *this,
        int32_t svtId,
        int32_t num,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C27801 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_MyroomServantSpecialImageMaster__MyroomServantSpecialImageEntity__string__GetEntity__);
    byte_4C27801 = 1;
  }
  PK = (Il2CppObject *)MyroomServantSpecialImageEntity__CreatePK(svtId, num, 0);
  return (MyroomServantSpecialImageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                                (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                PK,
                                                (const MethodInfo_338C850 *)Method_DataMasterBase_MyroomServantSpecialImageMaster__MyroomServantSpecialImageEntity__string__GetEntity__);
}


bool MyroomServantSpecialImageMaster__TryGetEntity(
        MyroomServantSpecialImageMaster_o *this,
        MyroomServantSpecialImageEntity_o **entity,
        int32_t svtId,
        int32_t num,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C27802 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_MyroomServantSpecialImageMaster__MyroomServantSpecialImageEntity__string__TryGetEntity__);
    byte_4C27802 = 1;
  }
  PK = (Il2CppObject *)MyroomServantSpecialImageEntity__CreatePK(svtId, num, 0);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_MyroomServantSpecialImageMaster__MyroomServantSpecialImageEntity__string__TryGetEntity__);
}


void MyroomServantSpecialImageMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C27803 & 1) == 0 )
  {
    sub_1C2D490(&MyroomServantSpecialImageMaster___c_TypeInfo);
    byte_4C27803 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(MyroomServantSpecialImageMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MyroomServantSpecialImageMaster___c_TypeInfo->static_fields->__9 = (struct MyroomServantSpecialImageMaster___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)MyroomServantSpecialImageMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void MyroomServantSpecialImageMaster___c___ctor(MyroomServantSpecialImageMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t MyroomServantSpecialImageMaster___c___GetEntitiesByBaseLimitCount_b__0_0(
        MyroomServantSpecialImageMaster___c_o *this,
        MyroomServantSpecialImageEntity_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C2D6EC(this, 0);
  return a->fields.num;
}