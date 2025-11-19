void SvtMultiPortraitMaster___ctor(SvtMultiPortraitMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB6F7C & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_SvtMultiPortraitMaster__SvtMultiPortraitEntity__string___ctor__);
    byte_4CB6F7C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    401,
    (const MethodInfo_33FB870 *)Method_DataMasterBase_SvtMultiPortraitMaster__SvtMultiPortraitEntity__string___ctor__);
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
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x19
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 v18; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  __int64 v26; // x1
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Collections_Generic_IEnumerator_T__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0
  SvtMultiPortraitMaster___c_c *v35; // x0
  System_Func_object__bool__o *_9__1_0; // x21
  Il2CppObject *v37; // x22
  struct SvtMultiPortraitMaster___c_StaticFields *static_fields; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  SvtMultiPortraitMaster___c_c *v41; // x0
  System_Func_object__int__o *_9__1_1; // x20
  Il2CppObject *v43; // x21
  struct SvtMultiPortraitMaster___c_StaticFields *v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  System_Func_TSource__TKey__o *v48; // x1
  System_Collections_Generic_List_object__o *v50; // x21
  __int64 v51; // x22
  __int64 v52; // x0
  __int64 v53; // x1
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  __int64 v56; // x24
  int32_t current; // w1
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  __int64 v60; // x0
  __int64 v61; // x1
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  __int64 v64; // x8
  int v65; // w9
  struct System_Object_array *v66; // x9
  _QWORD *v67; // x10
  __int64 v68; // x11
  Il2CppClass **v69; // x0
  System_Func_object__bool__o *v70; // x24
  _BOOL8 v71; // x0
  __int64 v72; // x1
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  Il2CppObject *v75; // x1
  struct System_Object_array *v76; // x8
  _QWORD *v77; // x9
  __int64 v78; // x10
  Il2CppClass **v79; // x0
  SvtMultiPortraitMaster___c_c *v80; // x0
  System_Func_object__int__o *_9__1_2; // x19
  Il2CppObject *v82; // x20
  struct SvtMultiPortraitMaster___c_StaticFields *v83; // x0
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v86; // x0
  System_Collections_Generic_List_Enumerator_object__o v87; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v88; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4CB6F7D & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_Any_SvtMultiPortraitEntity___);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_SvtMultiPortraitEntity__GetEnumerator__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_All_SvtMultiPortraitEntity___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_OrderBy_SvtMultiPortraitEntity__int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToList_SvtMultiPortraitEntity___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_1C6BA08(&System_Func_SvtMultiPortraitEntity__int__TypeInfo);
    sub_1C6BA08(&System_Func_SvtMultiPortraitEntity__bool__TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_SvtMultiPortraitEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_SvtMultiPortraitEntity__TypeInfo);
    sub_1C6BA08(&Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_0__);
    sub_1C6BA08(&Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_1__);
    sub_1C6BA08(&Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_2__);
    sub_1C6BA08(&SvtMultiPortraitMaster___c__DisplayClass1_0_TypeInfo);
    sub_1C6BA08(&Method_SvtMultiPortraitMaster___c__DisplayClass1_1__GetEntityListOrderBy_b__3__);
    sub_1C6BA08(&SvtMultiPortraitMaster___c__DisplayClass1_1_TypeInfo);
    sub_1C6BA08(&SvtMultiPortraitMaster___c_TypeInfo);
    byte_4CB6F7D = 1;
  }
  memset(&v88, 0, sizeof(v88));
  v9 = sub_1C6BC54(SvtMultiPortraitMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_83;
  *(_DWORD *)(v9 + 16) = overwriteType;
  v12 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_SvtMultiPortraitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_83;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_339243C *)Method_System_Collections_ObjectModel_Collection_SvtMultiPortraitEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C6BC60(0, v13);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v16 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_10;
      }
      v18 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v18 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            Enumerator,
            *(_QWORD *)(v18 + 8))
        & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_SvtMultiPortraitEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_SvtMultiPortraitEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_17;
      }
      v22 = (__int64)&v19->vtable[*v21];
    }
    else
    {
LABEL_17:
      v22 = sub_1C41D90(Enumerator, System_Collections_Generic_IEnumerator_SvtMultiPortraitEntity__TypeInfo, 0);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
            Enumerator,
            *(_QWORD *)(v22 + 8));
    v26 = v23;
    if ( v23 && *(_DWORD *)(v23 + 16) == svtId && *(_DWORD *)(v23 + 20) == limitCount )
    {
      if ( !v12 )
        sub_1C6BC60(v23, v23);
      items = v12->fields._items;
      v28 = Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1C6BC60(v23, v23);
      size = v12->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          (Il2CppObject *)v23,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v30[4] = (Il2CppClass *)v26;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v30 + 4), v26, v24, v25);
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
    v34 = sub_1C41D90(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v34)(Enumerator, *(_QWORD *)(v34 + 8));
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v12,
          (const MethodInfo_3146EE0 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___) )
    return 0;
  v35 = SvtMultiPortraitMaster___c_TypeInfo;
  if ( !SvtMultiPortraitMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtMultiPortraitMaster___c_TypeInfo);
    v35 = SvtMultiPortraitMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Func_object__bool__o *)v35->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v35 = SvtMultiPortraitMaster___c_TypeInfo;
    }
    v37 = (Il2CppObject *)v35->static_fields->__9;
    _9__1_0 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_SvtMultiPortraitEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__1_0, v37, Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_0__, 0);
    static_fields = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_SvtMultiPortraitEntity__bool__o *)_9__1_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v39, v40);
  }
  if ( !System_Linq_Enumerable__All_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v12,
          (System_Func_TSource__bool__o *)_9__1_0,
          (const MethodInfo_3145818 *)Method_System_Linq_Enumerable_All_SvtMultiPortraitEntity___) )
  {
    v50 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_SvtMultiPortraitEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v50,
      (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity___ctor__);
    if ( v12 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v87,
        v12,
        (const MethodInfo_380146C *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
      v88 = v87;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v88,
                (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__) )
      {
        v51 = sub_1C6BC54(SvtMultiPortraitMaster___c__DisplayClass1_1_TypeInfo);
        System_Object___ctor((Il2CppObject *)v51, 0);
        if ( !v51 )
          sub_1C6BC60(v52, v53);
        *(_QWORD *)(v51 + 24) = v9;
        v56 = v51 + 24;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v51 + 24), v9, v54, v55);
        current = (int32_t)v88.fields._current;
        *(_QWORD *)(v51 + 16) = v88.fields._current;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v51 + 16), current, v58, v59);
        v64 = *(_QWORD *)(v51 + 16);
        if ( !v64 )
          sub_1C6BC60(v60, v61);
        if ( !*(_QWORD *)v56 )
          sub_1C6BC60(v60, v61);
        v65 = *(_DWORD *)(v64 + 28);
        if ( v65 == *(_DWORD *)(*(_QWORD *)v56 + 16LL) )
        {
          if ( !v50 )
            sub_1C6BC60(v60, v61);
          v66 = v50->fields._items;
          v67 = Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__;
          ++v50->fields._version;
          if ( !v66 )
            sub_1C6BC60(v60, v61);
          v68 = v50->fields._size;
          if ( (unsigned int)v68 >= LODWORD(v66->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v50,
              (Il2CppObject *)v64,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
          }
          else
          {
            v69 = &v66->obj.klass + v68;
            v50->fields._size = v68 + 1;
            v69[4] = (Il2CppClass *)v64;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v69 + 4), v64, v62, v63);
          }
        }
        else if ( !v65 )
        {
          v70 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_SvtMultiPortraitEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v70,
            (Il2CppObject *)v51,
            Method_SvtMultiPortraitMaster___c__DisplayClass1_1__GetEntityListOrderBy_b__3__,
            0);
          v71 = BasicHelper__Any_object_(
                  (System_Collections_Generic_List_T__o *)v12,
                  (System_Func_T__bool__o *)v70,
                  (const MethodInfo_3124430 *)Method_BasicHelper_Any_SvtMultiPortraitEntity___);
          if ( !v71 )
          {
            if ( !v50 )
              sub_1C6BC60(v71, v72);
            v75 = *(Il2CppObject **)(v51 + 16);
            v76 = v50->fields._items;
            v77 = Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__;
            ++v50->fields._version;
            if ( !v76 )
              sub_1C6BC60(v71, v75);
            v78 = v50->fields._size;
            if ( (unsigned int)v78 >= LODWORD(v76->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v50,
                v75,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
            }
            else
            {
              v79 = &v76->obj.klass + v78;
              v50->fields._size = v78 + 1;
              v79[4] = (Il2CppClass *)v75;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v79 + 4), (int32_t)v75, v73, v74);
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v88,
        (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
      v80 = SvtMultiPortraitMaster___c_TypeInfo;
      if ( !SvtMultiPortraitMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SvtMultiPortraitMaster___c_TypeInfo);
        v80 = SvtMultiPortraitMaster___c_TypeInfo;
      }
      _9__1_2 = (System_Func_object__int__o *)v80->static_fields->__9__1_2;
      if ( !_9__1_2 )
      {
        if ( !v80->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v80);
          v80 = SvtMultiPortraitMaster___c_TypeInfo;
        }
        v82 = (Il2CppObject *)v80->static_fields->__9;
        _9__1_2 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_SvtMultiPortraitEntity__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__1_2,
          v82,
          Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_2__,
          0);
        v83 = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
        v83->__9__1_2 = (struct System_Func_SvtMultiPortraitEntity__int__o *)_9__1_2;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v83->__9__1_2, (int32_t)_9__1_2, v84, v85);
      }
      v47 = (System_Collections_Generic_IEnumerable_TSource__o *)v50;
      v48 = (System_Func_TSource__TKey__o *)_9__1_2;
      goto LABEL_75;
    }
LABEL_83:
    sub_1C6BC60(list, v11);
  }
  v41 = SvtMultiPortraitMaster___c_TypeInfo;
  if ( !SvtMultiPortraitMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtMultiPortraitMaster___c_TypeInfo);
    v41 = SvtMultiPortraitMaster___c_TypeInfo;
  }
  _9__1_1 = (System_Func_object__int__o *)v41->static_fields->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      v41 = SvtMultiPortraitMaster___c_TypeInfo;
    }
    v43 = (Il2CppObject *)v41->static_fields->__9;
    _9__1_1 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_SvtMultiPortraitEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__1_1, v43, Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_1__, 0);
    v44 = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
    v44->__9__1_1 = (struct System_Func_SvtMultiPortraitEntity__int__o *)_9__1_1;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v44->__9__1_1, (int32_t)_9__1_1, v45, v46);
  }
  v47 = (System_Collections_Generic_IEnumerable_TSource__o *)v12;
  v48 = (System_Func_TSource__TKey__o *)_9__1_1;
LABEL_75:
  v86 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v47,
                                                               v48,
                                                               (const MethodInfo_316AB98 *)Method_System_Linq_Enumerable_OrderBy_SvtMultiPortraitEntity__int___);
  return (System_Collections_Generic_List_SvtMultiPortraitEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                        v86,
                                                                        (const MethodInfo_317FEE4 *)Method_System_Linq_Enumerable_ToList_SvtMultiPortraitEntity___);
}


void SvtMultiPortraitMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB6F7E & 1) == 0 )
  {
    sub_1C6BA08(&SvtMultiPortraitMaster___c_TypeInfo);
    byte_4CB6F7E = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(SvtMultiPortraitMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SvtMultiPortraitMaster___c_TypeInfo->static_fields->__9 = (struct SvtMultiPortraitMaster___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)SvtMultiPortraitMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C6BC60(this, 0);
  return entity->fields.type == 0;
}


int32_t SvtMultiPortraitMaster___c___GetEntityListOrderBy_b__1_1(
        SvtMultiPortraitMaster___c_o *this,
        SvtMultiPortraitEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields.idx;
}


int32_t SvtMultiPortraitMaster___c___GetEntityListOrderBy_b__1_2(
        SvtMultiPortraitMaster___c_o *this,
        SvtMultiPortraitEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
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
    sub_1C6BC60(this, x);
  }
  return 0;
}