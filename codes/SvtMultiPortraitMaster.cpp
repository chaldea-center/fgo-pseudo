void SvtMultiPortraitMaster___ctor(SvtMultiPortraitMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C3865E & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_SvtMultiPortraitMaster__SvtMultiPortraitEntity__string___ctor__);
    byte_4C3865E = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    401,
    (const MethodInfo_3398FCC *)Method_DataMasterBase_SvtMultiPortraitMaster__SvtMultiPortraitEntity__string___ctor__);
}


System_Collections_Generic_List_SvtMultiPortraitEntity__o *SvtMultiPortraitMaster__GetEntityListOrderBy(
        SvtMultiPortraitMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t overwriteType,
        const MethodInfo *method)
{
  __int64 v9; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_List_object__o *v11; // x19
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 v16; // x0
  System_Collections_Generic_IEnumerator_T__c *v17; // x8
  __int64 v18; // x9
  int32_t *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 v24; // x1
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0
  SvtMultiPortraitMaster___c_c *v33; // x0
  System_Func_object__bool__o *_9__1_0; // x21
  Il2CppObject *v35; // x22
  struct SvtMultiPortraitMaster___c_StaticFields *static_fields; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  SvtMultiPortraitMaster___c_c *v39; // x0
  System_Func_object__int__o *_9__1_1; // x20
  Il2CppObject *v41; // x21
  struct SvtMultiPortraitMaster___c_StaticFields *v42; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  System_Func_TSource__TKey__o *v46; // x1
  System_Collections_Generic_List_object__o *v48; // x21
  __int64 v49; // x22
  __int64 v50; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  __int64 v53; // x24
  int32_t current; // w1
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  __int64 v57; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  __int64 v60; // x8
  int v61; // w9
  struct System_Object_array *v62; // x9
  _QWORD *v63; // x10
  __int64 v64; // x11
  Il2CppClass **v65; // x0
  System_Func_object__bool__o *v66; // x24
  _BOOL8 v67; // x0
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  Il2CppObject *v70; // x1
  struct System_Object_array *v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  Il2CppClass **v74; // x0
  SvtMultiPortraitMaster___c_c *v75; // x0
  System_Func_object__int__o *_9__1_2; // x19
  Il2CppObject *v77; // x20
  struct SvtMultiPortraitMaster___c_StaticFields *v78; // x0
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v81; // x0
  System_Collections_Generic_List_Enumerator_object__o v82; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v83; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C3865F & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_SvtMultiPortraitEntity___);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_SvtMultiPortraitEntity__GetEnumerator__);
    sub_1C32C20(&Method_System_Linq_Enumerable_All_SvtMultiPortraitEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderBy_SvtMultiPortraitEntity__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToList_SvtMultiPortraitEntity___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_1C32C20(&System_Func_SvtMultiPortraitEntity__int__TypeInfo);
    sub_1C32C20(&System_Func_SvtMultiPortraitEntity__bool__TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_SvtMultiPortraitEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_SvtMultiPortraitEntity__TypeInfo);
    sub_1C32C20(&Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_0__);
    sub_1C32C20(&Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_1__);
    sub_1C32C20(&Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_2__);
    sub_1C32C20(&SvtMultiPortraitMaster___c__DisplayClass1_0_TypeInfo);
    sub_1C32C20(&Method_SvtMultiPortraitMaster___c__DisplayClass1_1__GetEntityListOrderBy_b__3__);
    sub_1C32C20(&SvtMultiPortraitMaster___c__DisplayClass1_1_TypeInfo);
    sub_1C32C20(&SvtMultiPortraitMaster___c_TypeInfo);
    byte_4C3865F = 1;
  }
  memset(&v83, 0, sizeof(v83));
  v9 = sub_1C32E6C(SvtMultiPortraitMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_83;
  *(_DWORD *)(v9 + 16) = overwriteType;
  v11 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_SvtMultiPortraitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_83;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_SvtMultiPortraitEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C32E7C(0);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        p_offset += 4;
        if ( !v14 )
          goto LABEL_10;
      }
      v16 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v16 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
            Enumerator,
            *(_QWORD *)(v16 + 8))
        & 1) == 0 )
      break;
    v17 = Enumerator->klass;
    v18 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v19 = &v17->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_SvtMultiPortraitEntity__c **)v19 - 1) != System_Collections_Generic_IEnumerator_SvtMultiPortraitEntity__TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_17;
      }
      v20 = (__int64)&v17->vtable[*v19];
    }
    else
    {
LABEL_17:
      v20 = sub_1C83438(Enumerator, System_Collections_Generic_IEnumerator_SvtMultiPortraitEntity__TypeInfo, 0);
    }
    v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v20)(
            Enumerator,
            *(_QWORD *)(v20 + 8));
    v24 = v21;
    if ( v21 && *(_DWORD *)(v21 + 16) == svtId && *(_DWORD *)(v21 + 20) == limitCount )
    {
      if ( !v11 )
        sub_1C32E7C(v21);
      items = v11->fields._items;
      v26 = Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1C32E7C(v21);
      size = v11->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          (Il2CppObject *)v21,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v24;
        sub_1C32BC4((CGThumbnailListItem_o *)(v28 + 4), v24, v22, v23);
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
        goto LABEL_31;
    }
    v32 = (__int64)&v29->vtable[*v31];
  }
  else
  {
LABEL_31:
    v32 = sub_1C83438(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(Enumerator, *(_QWORD *)(v32 + 8));
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v11,
          (const MethodInfo_30E8F68 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___) )
    return 0;
  v33 = SvtMultiPortraitMaster___c_TypeInfo;
  if ( !SvtMultiPortraitMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtMultiPortraitMaster___c_TypeInfo);
    v33 = SvtMultiPortraitMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Func_object__bool__o *)v33->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      v33 = SvtMultiPortraitMaster___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v33->static_fields->__9;
    _9__1_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_SvtMultiPortraitEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__1_0, v35, Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_0__, 0);
    static_fields = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_SvtMultiPortraitEntity__bool__o *)_9__1_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v37, v38);
  }
  if ( !System_Linq_Enumerable__All_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v11,
          (System_Func_TSource__bool__o *)_9__1_0,
          (const MethodInfo_30E78A0 *)Method_System_Linq_Enumerable_All_SvtMultiPortraitEntity___) )
  {
    v48 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_SvtMultiPortraitEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v48,
      (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity___ctor__);
    if ( v11 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v82,
        v11,
        (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
      v83 = v82;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v83,
                (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__) )
      {
        v49 = sub_1C32E6C(SvtMultiPortraitMaster___c__DisplayClass1_1_TypeInfo);
        System_Object___ctor((Il2CppObject *)v49, 0);
        if ( !v49 )
          sub_1C32E7C(v50);
        *(_QWORD *)(v49 + 24) = v9;
        v53 = v49 + 24;
        sub_1C32BC4((CGThumbnailListItem_o *)(v49 + 24), v9, v51, v52);
        current = (int32_t)v83.fields._current;
        *(_QWORD *)(v49 + 16) = v83.fields._current;
        sub_1C32BC4((CGThumbnailListItem_o *)(v49 + 16), current, v55, v56);
        v60 = *(_QWORD *)(v49 + 16);
        if ( !v60 )
          sub_1C32E7C(v57);
        if ( !*(_QWORD *)v53 )
          sub_1C32E7C(v57);
        v61 = *(_DWORD *)(v60 + 28);
        if ( v61 == *(_DWORD *)(*(_QWORD *)v53 + 16LL) )
        {
          if ( !v48 )
            sub_1C32E7C(v57);
          v62 = v48->fields._items;
          v63 = Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__;
          ++v48->fields._version;
          if ( !v62 )
            sub_1C32E7C(v57);
          v64 = v48->fields._size;
          if ( (unsigned int)v64 >= LODWORD(v62->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v48,
              (Il2CppObject *)v60,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
          }
          else
          {
            v65 = &v62->obj.klass + v64;
            v48->fields._size = v64 + 1;
            v65[4] = (Il2CppClass *)v60;
            sub_1C32BC4((CGThumbnailListItem_o *)(v65 + 4), v60, v58, v59);
          }
        }
        else if ( !v61 )
        {
          v66 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_SvtMultiPortraitEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v66,
            (Il2CppObject *)v49,
            Method_SvtMultiPortraitMaster___c__DisplayClass1_1__GetEntityListOrderBy_b__3__,
            0);
          v67 = BasicHelper__Any_object_(
                  (System_Collections_Generic_List_T__o *)v11,
                  (System_Func_T__bool__o *)v66,
                  (const MethodInfo_30C6790 *)Method_BasicHelper_Any_SvtMultiPortraitEntity___);
          if ( !v67 )
          {
            if ( !v48 )
              sub_1C32E7C(v67);
            v70 = *(Il2CppObject **)(v49 + 16);
            v71 = v48->fields._items;
            v72 = Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__;
            ++v48->fields._version;
            if ( !v71 )
              sub_1C32E7C(v67);
            v73 = v48->fields._size;
            if ( (unsigned int)v73 >= LODWORD(v71->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v48,
                v70,
                *(const MethodInfo_37987BC **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
            }
            else
            {
              v74 = &v71->obj.klass + v73;
              v48->fields._size = v73 + 1;
              v74[4] = (Il2CppClass *)v70;
              sub_1C32BC4((CGThumbnailListItem_o *)(v74 + 4), (int32_t)v70, v68, v69);
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v83,
        (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
      v75 = SvtMultiPortraitMaster___c_TypeInfo;
      if ( !SvtMultiPortraitMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SvtMultiPortraitMaster___c_TypeInfo);
        v75 = SvtMultiPortraitMaster___c_TypeInfo;
      }
      _9__1_2 = (System_Func_object__int__o *)v75->static_fields->__9__1_2;
      if ( !_9__1_2 )
      {
        if ( !v75->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v75);
          v75 = SvtMultiPortraitMaster___c_TypeInfo;
        }
        v77 = (Il2CppObject *)v75->static_fields->__9;
        _9__1_2 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_SvtMultiPortraitEntity__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__1_2,
          v77,
          Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_2__,
          0);
        v78 = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
        v78->__9__1_2 = (struct System_Func_SvtMultiPortraitEntity__int__o *)_9__1_2;
        sub_1C32BC4((CGThumbnailListItem_o *)&v78->__9__1_2, (int32_t)_9__1_2, v79, v80);
      }
      v45 = (System_Collections_Generic_IEnumerable_TSource__o *)v48;
      v46 = (System_Func_TSource__TKey__o *)_9__1_2;
      goto LABEL_75;
    }
LABEL_83:
    sub_1C32E7C(list);
  }
  v39 = SvtMultiPortraitMaster___c_TypeInfo;
  if ( !SvtMultiPortraitMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtMultiPortraitMaster___c_TypeInfo);
    v39 = SvtMultiPortraitMaster___c_TypeInfo;
  }
  _9__1_1 = (System_Func_object__int__o *)v39->static_fields->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39);
      v39 = SvtMultiPortraitMaster___c_TypeInfo;
    }
    v41 = (Il2CppObject *)v39->static_fields->__9;
    _9__1_1 = (System_Func_object__int__o *)sub_1C32E6C(System_Func_SvtMultiPortraitEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__1_1, v41, Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_1__, 0);
    v42 = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
    v42->__9__1_1 = (struct System_Func_SvtMultiPortraitEntity__int__o *)_9__1_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&v42->__9__1_1, (int32_t)_9__1_1, v43, v44);
  }
  v45 = (System_Collections_Generic_IEnumerable_TSource__o *)v11;
  v46 = (System_Func_TSource__TKey__o *)_9__1_1;
LABEL_75:
  v81 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v45,
                                                               v46,
                                                               (const MethodInfo_310CB44 *)Method_System_Linq_Enumerable_OrderBy_SvtMultiPortraitEntity__int___);
  return (System_Collections_Generic_List_SvtMultiPortraitEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                        v81,
                                                                        (const MethodInfo_3121728 *)Method_System_Linq_Enumerable_ToList_SvtMultiPortraitEntity___);
}


void SvtMultiPortraitMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C38660 & 1) == 0 )
  {
    sub_1C32C20(&SvtMultiPortraitMaster___c_TypeInfo);
    byte_4C38660 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(SvtMultiPortraitMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SvtMultiPortraitMaster___c_TypeInfo->static_fields->__9 = (struct SvtMultiPortraitMaster___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)SvtMultiPortraitMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void SvtMultiPortraitMaster___c___ctor(SvtMultiPortraitMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SvtMultiPortraitMaster___c___GetEntityListOrderBy_b__1_0(
        SvtMultiPortraitMaster___c_o *this,
        SvtMultiPortraitEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C32E7C(this);
  return entity->fields.type == 0;
}


int32_t SvtMultiPortraitMaster___c___GetEntityListOrderBy_b__1_1(
        SvtMultiPortraitMaster___c_o *this,
        SvtMultiPortraitEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.idx;
}


int32_t SvtMultiPortraitMaster___c___GetEntityListOrderBy_b__1_2(
        SvtMultiPortraitMaster___c_o *this,
        SvtMultiPortraitEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.idx;
}


void SvtMultiPortraitMaster___c__DisplayClass1_0___ctor(
        SvtMultiPortraitMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SvtMultiPortraitMaster___c__DisplayClass1_1___ctor(
        SvtMultiPortraitMaster___c__DisplayClass1_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SvtMultiPortraitMaster___c__DisplayClass1_1___GetEntityListOrderBy_b__3(
        SvtMultiPortraitMaster___c__DisplayClass1_1_o *this,
        SvtMultiPortraitEntity_o *x,
        const MethodInfo *method)
{
  struct SvtMultiPortraitEntity_o *entity; // x8
  struct SvtMultiPortraitMaster___c__DisplayClass1_0_o *CS___8__locals1; // x8

  if ( !x )
    goto LABEL_9;
  entity = this->fields.entity;
  if ( !entity )
    goto LABEL_9;
  if ( x->fields.svtId == entity->fields.svtId
    && x->fields.limitCount == entity->fields.limitCount
    && x->fields.idx == entity->fields.idx )
  {
    CS___8__locals1 = this->fields.CS___8__locals1;
    if ( CS___8__locals1 )
      return x->fields.type == CS___8__locals1->fields.overwriteType;
LABEL_9:
    sub_1C32E7C(this);
  }
  return 0;
}