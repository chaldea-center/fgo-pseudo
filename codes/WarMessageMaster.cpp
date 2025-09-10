void WarMessageMaster___ctor(WarMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C28530 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string___ctor__);
    byte_4C28530 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    491,
    (const MethodInfo_338A52C *)Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarMessageEntity_o *WarMessageMaster__GetEntity(
        WarMessageMaster_o *this,
        int32_t warId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C28531 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string__GetEntity__);
    sub_1C2D490(&WarMessageEntity_TypeInfo);
    byte_4C28531 = 1;
  }
  if ( !WarMessageEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarMessageEntity_TypeInfo);
  PK = (Il2CppObject *)WarMessageEntity__CreatePK(warId, idx, *(const MethodInfo **)&idx);
  return (WarMessageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                 PK,
                                 (const MethodInfo_338C850 *)Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string__GetEntity__);
}


System_Collections_Generic_List_WarMessageEntity__o *WarMessageMaster__GetValidMessageList(
        WarMessageMaster_o *this,
        int32_t warId,
        const MethodInfo *method)
{
  System_Collections_ObjectModel_Collection_T__o *list; // x20
  System_Collections_Generic_List_object__o *v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  WarMessageEntity_o *v19; // x0
  const MethodInfo *v20; // x1
  WarMessageEntity_o *v21; // x22
  const MethodInfo *v22; // x1
  _BOOL8 v23; // x0
  __int64 v24; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0
  WarMessageMaster___c_c *v35; // x8
  System_Func_object__int__o *_9__0_0; // x20
  Il2CppObject *v37; // x21
  struct WarMessageMaster___c_StaticFields *static_fields; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x0

  if ( (byte_4C2852F & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_ObjectModel_Collection_WarMessageEntity__GetEnumerator__);
    sub_1C2D490(&Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string__getEntityList__);
    sub_1C2D490(&Method_System_Linq_Enumerable_OrderBy_WarMessageEntity__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_WarMessageEntity___);
    sub_1C2D490(&System_Func_WarMessageEntity__int__TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_WarMessageEntity__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarMessageEntity__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_WarMessageEntity___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_WarMessageEntity__TypeInfo);
    sub_1C2D490(&Method_WarMessageMaster___c__GetValidMessageList_b__0_0__);
    sub_1C2D490(&WarMessageMaster___c_TypeInfo);
    byte_4C2852F = 1;
  }
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_WarMessageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_WarMessageEntity___ctor__);
  if ( !list )
    sub_1C2D6EC(v7, v8);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33217E0 *)Method_System_Collections_ObjectModel_Collection_WarMessageEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C2D6EC(0, v9);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v12 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_9;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_9:
      v14 = sub_1C7DCA8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            Enumerator,
            *(_QWORD *)(v14 + 8))
        & 1) == 0 )
      break;
    v15 = Enumerator->klass;
    v16 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_WarMessageEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_WarMessageEntity__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_16;
      }
      v18 = (__int64)&v15->vtable[*v17];
    }
    else
    {
LABEL_16:
      v18 = sub_1C7DCA8(Enumerator, System_Collections_Generic_IEnumerator_WarMessageEntity__TypeInfo, 0);
    }
    v19 = (WarMessageEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
                                  Enumerator,
                                  *(_QWORD *)(v18 + 8));
    v21 = v19;
    if ( !v19 )
      sub_1C2D6EC(0, v20);
    if ( v19->fields.warId == warId && WarMessageEntity__CheckCondition(v19, v20) )
    {
      v23 = WarMessageEntity__CheckFrequencyCondition(v21, v22);
      if ( v23 )
      {
        if ( !v6 )
          sub_1C2D6EC(v23, v24);
        items = v6->fields._items;
        v28 = Method_System_Collections_Generic_List_WarMessageEntity__Add__;
        ++v6->fields._version;
        if ( !items )
          sub_1C2D6EC(v23, v24);
        size = v6->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v6,
            (Il2CppObject *)v21,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v30 = &items->obj.klass + size;
          v6->fields._size = size + 1;
          v30[4] = (Il2CppClass *)v21;
          sub_1C2D434((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v21, v25, v26);
        }
      }
    }
  }
  v31 = Enumerator->klass;
  v32 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v33 = &v31->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v33 - 1) != System_IDisposable_TypeInfo )
    {
      --v32;
      v33 += 4;
      if ( !v32 )
        goto LABEL_31;
    }
    v34 = (__int64)&v31->vtable[*v33];
  }
  else
  {
LABEL_31:
    v34 = sub_1C7DCA8(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(Enumerator, *(_QWORD *)(v34 + 8));
  v35 = WarMessageMaster___c_TypeInfo;
  if ( !WarMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarMessageMaster___c_TypeInfo);
    v35 = WarMessageMaster___c_TypeInfo;
  }
  _9__0_0 = (System_Func_object__int__o *)v35->static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v35 = WarMessageMaster___c_TypeInfo;
    }
    v37 = (Il2CppObject *)v35->static_fields->__9;
    _9__0_0 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_WarMessageEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__0_0, v37, Method_WarMessageMaster___c__GetValidMessageList_b__0_0__, 0);
    static_fields = WarMessageMaster___c_TypeInfo->static_fields;
    static_fields->__9__0_0 = (struct System_Func_WarMessageEntity__int__o *)_9__0_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__0_0, (int32_t)_9__0_0, v39, v40);
  }
  v41 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v6,
                                                               (System_Func_TSource__TKey__o *)_9__0_0,
                                                               (const MethodInfo_30FE0A4 *)Method_System_Linq_Enumerable_OrderBy_WarMessageEntity__int___);
  return (System_Collections_Generic_List_WarMessageEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                  v41,
                                                                  (const MethodInfo_3112C88 *)Method_System_Linq_Enumerable_ToList_WarMessageEntity___);
}


// local variable allocation has failed, the output may be wrong!
bool WarMessageMaster__TryGetEntity(
        WarMessageMaster_o *this,
        WarMessageEntity_o **entity,
        int32_t warId,
        int32_t idx,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4C28532 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string__TryGetEntity__);
    sub_1C2D490(&WarMessageEntity_TypeInfo);
    byte_4C28532 = 1;
  }
  if ( !WarMessageEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarMessageEntity_TypeInfo);
  PK = (Il2CppObject *)WarMessageEntity__CreatePK(warId, idx, *(const MethodInfo **)&warId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_338C89C *)Method_DataMasterBase_WarMessageMaster__WarMessageEntity__string__TryGetEntity__);
}


void WarMessageMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C28533 & 1) == 0 )
  {
    sub_1C2D490(&WarMessageMaster___c_TypeInfo);
    byte_4C28533 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(WarMessageMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarMessageMaster___c_TypeInfo->static_fields->__9 = (struct WarMessageMaster___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)WarMessageMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void WarMessageMaster___c___ctor(WarMessageMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t WarMessageMaster___c___GetValidMessageList_b__0_0(
        WarMessageMaster___c_o *this,
        WarMessageEntity_o *v,
        const MethodInfo *method)
{
  if ( !v )
    sub_1C2D6EC(this, 0);
  return v->fields.idx;
}