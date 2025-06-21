void __fastcall GachaBonusSelectMaster___ctor(GachaBonusSelectMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C7C0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string___ctor__, method);
    byte_4B1C7C0 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    193,
    (const MethodInfo_32CA594 *)Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
GachaBonusSelectEntity_o *__fastcall GachaBonusSelectMaster__GetEntity(
        GachaBonusSelectMaster_o *this,
        int32_t gachaId,
        int32_t gachaBonusId,
        int32_t slot,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B1C7BE & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string__GetEntity__,
      *(_QWORD *)&gachaId);
    byte_4B1C7BE = 1;
  }
  PK = (Il2CppObject *)GachaBonusSelectEntity__CreatePK(gachaId, gachaBonusId, slot, *(const MethodInfo **)&slot);
  return (GachaBonusSelectEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                       PK,
                                       (const MethodInfo_32CC8B8 *)Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GachaBonusSelectMaster__TryGetEntity(
        GachaBonusSelectMaster_o *this,
        GachaBonusSelectEntity_o **entity,
        int32_t gachaId,
        int32_t gachaBonusId,
        int32_t slot,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B1C7BF & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string__TryGetEntity__, entity);
    byte_4B1C7BF = 1;
  }
  PK = (Il2CppObject *)GachaBonusSelectEntity__CreatePK(
                         gachaId,
                         gachaBonusId,
                         slot,
                         *(const MethodInfo **)&gachaBonusId);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32CC904 *)Method_DataMasterBase_GachaBonusSelectMaster__GachaBonusSelectEntity__string__TryGetEntity__);
}


bool __fastcall GachaBonusSelectMaster__TryGetEntityArray(
        GachaBonusSelectMaster_o *this,
        GachaBonusSelectEntity_array **entityArray,
        int32_t gachaId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_List_object__o *v18; // x20
  __int64 v19; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v21; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v24; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x0
  __int64 v32; // x1
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  __int64 v35; // x8
  struct System_Object_array *items; // x9
  _QWORD *v37; // x10
  __int64 size; // x11
  Il2CppClass **v39; // x0
  System_Collections_Generic_IEnumerator_T__c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0
  GachaBonusSelectMaster___c_c *v44; // x8
  System_Func_object__int__o *_9__3_0; // x21
  Il2CppObject *v46; // x22
  struct GachaBonusSelectMaster___c_StaticFields *static_fields; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  System_Object_array *v51; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3

  if ( (byte_4B1C7C1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_GachaBonusSelectEntity__GetEnumerator__, entityArray);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_OrderBy_GachaBonusSelectEntity__int___, v7);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_GachaBonusSelectEntity___, v8);
    sub_1BCAFF8(&System_Func_GachaBonusSelectEntity__int__TypeInfo, v9);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v10);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_GachaBonusSelectEntity__TypeInfo, v11);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GachaBonusSelectEntity__Add__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GachaBonusSelectEntity___ctor__, v14);
    sub_1BCAFF8(&System_Collections_Generic_List_GachaBonusSelectEntity__TypeInfo, v15);
    sub_1BCAFF8(&Method_GachaBonusSelectMaster___c__TryGetEntityArray_b__3_0__, v16);
    sub_1BCAFF8(&GachaBonusSelectMaster___c_TypeInfo, v17);
    byte_4B1C7C1 = 1;
  }
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_GachaBonusSelectEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_GachaBonusSelectEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_42;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3263BC0 *)Method_System_Collections_ObjectModel_Collection_GachaBonusSelectEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCB254(0LL, v21);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v24;
        p_offset += 4;
        if ( !v24 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v27 = Enumerator->klass;
    v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_GachaBonusSelectEntity__c **)v29 - 1) != System_Collections_Generic_IEnumerator_GachaBonusSelectEntity__TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_16;
      }
      v30 = (__int64)&v27->vtable[*v29].method;
    }
    else
    {
LABEL_16:
      v30 = sub_1C1B560(Enumerator, System_Collections_Generic_IEnumerator_GachaBonusSelectEntity__TypeInfo, 0LL);
    }
    v31 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
            Enumerator,
            *(_QWORD *)(v30 + 8));
    v35 = v31;
    if ( !v31 )
      sub_1BCB254(0LL, v32);
    if ( *(_DWORD *)(v31 + 16) == gachaId )
    {
      if ( !v18 )
        sub_1BCB254(v31, v32);
      items = v18->fields._items;
      v37 = Method_System_Collections_Generic_List_GachaBonusSelectEntity__Add__;
      ++v18->fields._version;
      if ( !items )
        sub_1BCB254(v31, v32);
      size = v18->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v18,
          (Il2CppObject *)v31,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + size;
        v18->fields._size = size + 1;
        v39[4] = (Il2CppClass *)v35;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v39 + 4), v35, v33, v34);
      }
    }
  }
  v40 = Enumerator->klass;
  v41 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v42 = &v40->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      --v41;
      v42 += 4;
      if ( !v41 )
        goto LABEL_29;
    }
    v43 = (__int64)&v40->vtable[*v42].method;
  }
  else
  {
LABEL_29:
    v43 = sub_1C1B560(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v43)(Enumerator, *(_QWORD *)(v43 + 8));
  v44 = GachaBonusSelectMaster___c_TypeInfo;
  if ( !GachaBonusSelectMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GachaBonusSelectMaster___c_TypeInfo);
    v44 = GachaBonusSelectMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__int__o *)v44->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44);
      v44 = GachaBonusSelectMaster___c_TypeInfo;
    }
    v46 = (Il2CppObject *)v44->static_fields->__9;
    _9__3_0 = (System_Func_object__int__o *)sub_1BCB244(System_Func_GachaBonusSelectEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_0, v46, Method_GachaBonusSelectMaster___c__TryGetEntityArray_b__3_0__, 0LL);
    static_fields = GachaBonusSelectMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_GachaBonusSelectEntity__int__o *)_9__3_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v48, v49);
  }
  v50 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v18,
                                                               (System_Func_TSource__TKey__o *)_9__3_0,
                                                               (const MethodInfo_3046148 *)Method_System_Linq_Enumerable_OrderBy_GachaBonusSelectEntity__int___);
  v51 = System_Linq_Enumerable__ToArray_object_(
          v50,
          (const MethodInfo_30572C4 *)Method_System_Linq_Enumerable_ToArray_GachaBonusSelectEntity___);
  *entityArray = (GachaBonusSelectEntity_array *)v51;
  sub_1BCAF9C((CGThumbnailListItem_o *)entityArray, (int32_t)v51, v52, v53);
  if ( !*entityArray )
LABEL_42:
    sub_1BCB254(list, v19);
  return (*entityArray)->max_length != 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall GachaBonusSelectMaster__TryGetEntitySlot(
        GachaBonusSelectMaster_o *this,
        GachaBonusSelectEntity_o **selectEntity,
        int32_t gachaId,
        int32_t slot,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v20; // x8
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  GachaBonusSelectEntity_o *v24; // x0
  __int64 v25; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Collections_Generic_IEnumerator_T__c *v28; // x8
  __int64 v29; // x9
  int32_t *v30; // x10
  __int64 v31; // x0

  if ( (byte_4B1C7C2 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_ObjectModel_Collection_GachaBonusSelectEntity__GetEnumerator__, selectEntity);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v9);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_GachaBonusSelectEntity__TypeInfo, v10);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v11);
    byte_4B1C7C2 = 1;
  }
  *selectEntity = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)selectEntity, 0, gachaId, *(const MethodInfo **)&slot);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BCB254(0LL, v12);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3263BC0 *)Method_System_Collections_ObjectModel_Collection_GachaBonusSelectEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BCB254(0LL, v14);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_9;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_9:
      p_method = sub_1C1B560(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v20 = Enumerator->klass;
    v21 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_GachaBonusSelectEntity__c **)v22 - 1) != System_Collections_Generic_IEnumerator_GachaBonusSelectEntity__TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_16;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_16:
      v23 = sub_1C1B560(Enumerator, System_Collections_Generic_IEnumerator_GachaBonusSelectEntity__TypeInfo, 0LL);
    }
    v24 = (GachaBonusSelectEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
                                        Enumerator,
                                        *(_QWORD *)(v23 + 8));
    if ( !v24 )
      sub_1BCB254(0LL, v25);
    if ( v24->fields.gachaId == gachaId && v24->fields.slot == slot )
    {
      *selectEntity = v24;
      sub_1BCAF9C((CGThumbnailListItem_o *)selectEntity, (int32_t)v24, v26, v27);
      break;
    }
  }
  v28 = Enumerator->klass;
  v29 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v30 = &v28->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_26;
    }
    v31 = (__int64)&v28->vtable[*v30].method;
  }
  else
  {
LABEL_26:
    v31 = sub_1C1B560(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v31)(Enumerator, *(_QWORD *)(v31 + 8));
  return *selectEntity != 0LL;
}


void __fastcall GachaBonusSelectMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1C7C3 & 1) == 0 )
  {
    sub_1BCAFF8(&GachaBonusSelectMaster___c_TypeInfo, v1);
    byte_4B1C7C3 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(GachaBonusSelectMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  GachaBonusSelectMaster___c_TypeInfo->static_fields->__9 = (struct GachaBonusSelectMaster___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)GachaBonusSelectMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall GachaBonusSelectMaster___c___ctor(GachaBonusSelectMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall GachaBonusSelectMaster___c___TryGetEntityArray_b__3_0(
        GachaBonusSelectMaster___c_o *this,
        GachaBonusSelectEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return x->fields.slot;
}