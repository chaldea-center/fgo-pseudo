void __fastcall SvtMultiPortraitMaster___ctor(SvtMultiPortraitMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BBA45 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_SvtMultiPortraitMaster__SvtMultiPortraitEntity__string___ctor__, method);
    byte_49BBA45 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    401,
    (const MethodInfo_31A0130 *)Method_DataMasterBase_SvtMultiPortraitMaster__SvtMultiPortraitEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_SvtMultiPortraitEntity__o *__fastcall SvtMultiPortraitMaster__GetEntityListOrderBy(
        SvtMultiPortraitMaster_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t overwriteType,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v35; // x1
  System_Collections_Generic_List_object__o *v36; // x19
  __int64 v37; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v40; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v43; // x8
  __int64 v44; // x9
  int32_t *v45; // x10
  __int64 v46; // x0
  __int64 v47; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  __int64 v50; // x1
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x0
  System_Collections_Generic_IEnumerator_T__c *v55; // x8
  __int64 v56; // x9
  int32_t *v57; // x10
  __int64 v58; // x0
  SvtMultiPortraitMaster___c_c *v59; // x0
  System_Func_object__bool__o *_9__1_0; // x21
  Il2CppObject *v61; // x22
  struct SvtMultiPortraitMaster___c_StaticFields *static_fields; // x0
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  SvtMultiPortraitMaster___c_c *v65; // x0
  System_Func_object__int__o *_9__1_1; // x20
  Il2CppObject *v67; // x21
  struct SvtMultiPortraitMaster___c_StaticFields *v68; // x0
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v71; // x0
  System_Func_TSource__TKey__o *v72; // x1
  System_Collections_Generic_List_object__o *v74; // x21
  __int64 v75; // x22
  __int64 v76; // x0
  __int64 v77; // x1
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  __int64 v80; // x24
  int32_t current; // w1
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  __int64 v84; // x0
  __int64 v85; // x1
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  __int64 v88; // x8
  int v89; // w9
  struct System_Object_array *v90; // x9
  _QWORD *v91; // x10
  __int64 v92; // x11
  Il2CppClass **v93; // x0
  System_Func_object__bool__o *v94; // x24
  _BOOL8 v95; // x0
  __int64 v96; // x1
  int32_t v97; // w2
  const MethodInfo *v98; // x3
  Il2CppObject *v99; // x1
  struct System_Object_array *v100; // x8
  _QWORD *v101; // x9
  __int64 v102; // x10
  Il2CppClass **v103; // x0
  SvtMultiPortraitMaster___c_c *v104; // x0
  System_Func_object__int__o *_9__1_2; // x19
  Il2CppObject *v106; // x20
  struct SvtMultiPortraitMaster___c_StaticFields *v107; // x0
  int32_t v108; // w2
  const MethodInfo *v109; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v110; // x0
  System_Collections_Generic_List_Enumerator_object__o v111; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v112; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49BBA46 & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_Any_SvtMultiPortraitEntity___, *(_QWORD *)&svtId);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_SvtMultiPortraitEntity__GetEnumerator__, v9);
    sub_1B4CF90(&Method_System_Linq_Enumerable_All_SvtMultiPortraitEntity___, v10);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v11);
    sub_1B4CF90(&Method_System_Linq_Enumerable_OrderBy_SvtMultiPortraitEntity__int___, v12);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToList_SvtMultiPortraitEntity___, v13);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v14);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v15);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v16);
    sub_1B4CF90(&System_Func_SvtMultiPortraitEntity__int__TypeInfo, v17);
    sub_1B4CF90(&System_Func_SvtMultiPortraitEntity__bool__TypeInfo, v18);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v19);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_SvtMultiPortraitEntity__TypeInfo, v20);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v21);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__, v22);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v23);
    sub_1B4CF90(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity___ctor__, v24);
    sub_1B4CF90(&System_Collections_Generic_List_SvtMultiPortraitEntity__TypeInfo, v25);
    sub_1B4CF90(&Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_0__, v26);
    sub_1B4CF90(&Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_1__, v27);
    sub_1B4CF90(&Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_2__, v28);
    sub_1B4CF90(&SvtMultiPortraitMaster___c__DisplayClass1_0_TypeInfo, v29);
    sub_1B4CF90(&Method_SvtMultiPortraitMaster___c__DisplayClass1_1__GetEntityListOrderBy_b__3__, v30);
    sub_1B4CF90(&SvtMultiPortraitMaster___c__DisplayClass1_1_TypeInfo, v31);
    sub_1B4CF90(&SvtMultiPortraitMaster___c_TypeInfo, v32);
    byte_49BBA46 = 1;
  }
  memset(&v112, 0, sizeof(v112));
  v33 = sub_1B4D1DC(SvtMultiPortraitMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v33, 0LL);
  if ( !v33 )
    goto LABEL_83;
  *(_DWORD *)(v33 + 16) = overwriteType;
  v36 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_SvtMultiPortraitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_83;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_313B4BC *)Method_System_Collections_ObjectModel_Collection_SvtMultiPortraitEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1B4D1EC(0LL, v37);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v40 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v40;
        p_offset += 4;
        if ( !v40 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1B9D724(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v43 = Enumerator->klass;
    v44 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v45 = &v43->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_SvtMultiPortraitEntity__c **)v45 - 1) != System_Collections_Generic_IEnumerator_SvtMultiPortraitEntity__TypeInfo )
      {
        --v44;
        v45 += 4;
        if ( !v44 )
          goto LABEL_17;
      }
      v46 = (__int64)&v43->vtable[*v45].method;
    }
    else
    {
LABEL_17:
      v46 = sub_1B9D724(Enumerator, System_Collections_Generic_IEnumerator_SvtMultiPortraitEntity__TypeInfo, 0LL);
    }
    v47 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v46)(
            Enumerator,
            *(_QWORD *)(v46 + 8));
    v50 = v47;
    if ( v47 && *(_DWORD *)(v47 + 16) == svtId && *(_DWORD *)(v47 + 20) == limitCount )
    {
      if ( !v36 )
        sub_1B4D1EC(v47, v47);
      items = v36->fields._items;
      v52 = Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__;
      ++v36->fields._version;
      if ( !items )
        sub_1B4D1EC(v47, v47);
      size = v36->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v36,
          (Il2CppObject *)v47,
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
      }
      else
      {
        v54 = &items->obj.klass + size;
        v36->fields._size = size + 1;
        v54[4] = (Il2CppClass *)v50;
        sub_1B4CF34((CGThumbnailListItem_o *)(v54 + 4), v50, v48, v49);
      }
    }
  }
  v55 = Enumerator->klass;
  v56 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v57 = &v55->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v57 - 1) != System_IDisposable_TypeInfo )
    {
      --v56;
      v57 += 4;
      if ( !v56 )
        goto LABEL_31;
    }
    v58 = (__int64)&v55->vtable[*v57].method;
  }
  else
  {
LABEL_31:
    v58 = sub_1B9D724(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v58)(Enumerator, *(_QWORD *)(v58 + 8));
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v36,
          (const MethodInfo_2F0F4B0 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___) )
    return 0LL;
  v59 = SvtMultiPortraitMaster___c_TypeInfo;
  if ( !SvtMultiPortraitMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtMultiPortraitMaster___c_TypeInfo);
    v59 = SvtMultiPortraitMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Func_object__bool__o *)v59->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v59->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v59);
      v59 = SvtMultiPortraitMaster___c_TypeInfo;
    }
    v61 = (Il2CppObject *)v59->static_fields->__9;
    _9__1_0 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_SvtMultiPortraitEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__1_0,
      v61,
      Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_0__,
      0LL);
    static_fields = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_SvtMultiPortraitEntity__bool__o *)_9__1_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v63, v64);
  }
  if ( !System_Linq_Enumerable__All_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v36,
          (System_Func_TSource__bool__o *)_9__1_0,
          (const MethodInfo_2F0E080 *)Method_System_Linq_Enumerable_All_SvtMultiPortraitEntity___) )
  {
    v74 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_SvtMultiPortraitEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v74,
      (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity___ctor__);
    if ( v36 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v111,
        v36,
        (const MethodInfo_3580CD4 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
      v112 = v111;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v112,
                (const MethodInfo_3308B3C *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__) )
      {
        v75 = sub_1B4D1DC(SvtMultiPortraitMaster___c__DisplayClass1_1_TypeInfo);
        System_Object___ctor((Il2CppObject *)v75, 0LL);
        if ( !v75 )
          sub_1B4D1EC(v76, v77);
        *(_QWORD *)(v75 + 24) = v33;
        v80 = v75 + 24;
        sub_1B4CF34((CGThumbnailListItem_o *)(v75 + 24), v33, v78, v79);
        current = (int32_t)v112.fields._current;
        *(_QWORD *)(v75 + 16) = v112.fields._current;
        sub_1B4CF34((CGThumbnailListItem_o *)(v75 + 16), current, v82, v83);
        v88 = *(_QWORD *)(v75 + 16);
        if ( !v88 )
          sub_1B4D1EC(v84, v85);
        if ( !*(_QWORD *)v80 )
          sub_1B4D1EC(v84, v85);
        v89 = *(_DWORD *)(v88 + 28);
        if ( v89 == *(_DWORD *)(*(_QWORD *)v80 + 16LL) )
        {
          if ( !v74 )
            sub_1B4D1EC(v84, v85);
          v90 = v74->fields._items;
          v91 = Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__;
          ++v74->fields._version;
          if ( !v90 )
            sub_1B4D1EC(v84, v85);
          v92 = v74->fields._size;
          if ( (unsigned int)v92 >= v90->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v74,
              (Il2CppObject *)v88,
              *(const MethodInfo_35801DC **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
          }
          else
          {
            v93 = &v90->obj.klass + v92;
            v74->fields._size = v92 + 1;
            v93[4] = (Il2CppClass *)v88;
            sub_1B4CF34((CGThumbnailListItem_o *)(v93 + 4), v88, v86, v87);
          }
        }
        else if ( !v89 )
        {
          v94 = (System_Func_object__bool__o *)sub_1B4D1DC(System_Func_SvtMultiPortraitEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v94,
            (Il2CppObject *)v75,
            Method_SvtMultiPortraitMaster___c__DisplayClass1_1__GetEntityListOrderBy_b__3__,
            0LL);
          v95 = BasicHelper__Any_object_(
                  (System_Collections_Generic_List_T__o *)v36,
                  (System_Func_T__bool__o *)v94,
                  (const MethodInfo_2EEC494 *)Method_BasicHelper_Any_SvtMultiPortraitEntity___);
          if ( !v95 )
          {
            if ( !v74 )
              sub_1B4D1EC(v95, v96);
            v99 = *(Il2CppObject **)(v75 + 16);
            v100 = v74->fields._items;
            v101 = Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__;
            ++v74->fields._version;
            if ( !v100 )
              sub_1B4D1EC(v95, v99);
            v102 = v74->fields._size;
            if ( (unsigned int)v102 >= v100->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v74,
                v99,
                *(const MethodInfo_35801DC **)(*(_QWORD *)(v101[4] + 192LL) + 112LL));
            }
            else
            {
              v103 = &v100->obj.klass + v102;
              v74->fields._size = v102 + 1;
              v103[4] = (Il2CppClass *)v99;
              sub_1B4CF34((CGThumbnailListItem_o *)(v103 + 4), (int32_t)v99, v97, v98);
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v112,
        (const MethodInfo_3308B38 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
      v104 = SvtMultiPortraitMaster___c_TypeInfo;
      if ( !SvtMultiPortraitMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SvtMultiPortraitMaster___c_TypeInfo);
        v104 = SvtMultiPortraitMaster___c_TypeInfo;
      }
      _9__1_2 = (System_Func_object__int__o *)v104->static_fields->__9__1_2;
      if ( !_9__1_2 )
      {
        if ( !v104->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v104);
          v104 = SvtMultiPortraitMaster___c_TypeInfo;
        }
        v106 = (Il2CppObject *)v104->static_fields->__9;
        _9__1_2 = (System_Func_object__int__o *)sub_1B4D1DC(System_Func_SvtMultiPortraitEntity__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__1_2,
          v106,
          Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_2__,
          0LL);
        v107 = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
        v107->__9__1_2 = (struct System_Func_SvtMultiPortraitEntity__int__o *)_9__1_2;
        sub_1B4CF34((CGThumbnailListItem_o *)&v107->__9__1_2, (int32_t)_9__1_2, v108, v109);
      }
      v71 = (System_Collections_Generic_IEnumerable_TSource__o *)v74;
      v72 = (System_Func_TSource__TKey__o *)_9__1_2;
      goto LABEL_75;
    }
LABEL_83:
    sub_1B4D1EC(list, v35);
  }
  v65 = SvtMultiPortraitMaster___c_TypeInfo;
  if ( !SvtMultiPortraitMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtMultiPortraitMaster___c_TypeInfo);
    v65 = SvtMultiPortraitMaster___c_TypeInfo;
  }
  _9__1_1 = (System_Func_object__int__o *)v65->static_fields->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( !v65->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v65);
      v65 = SvtMultiPortraitMaster___c_TypeInfo;
    }
    v67 = (Il2CppObject *)v65->static_fields->__9;
    _9__1_1 = (System_Func_object__int__o *)sub_1B4D1DC(System_Func_SvtMultiPortraitEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__1_1, v67, Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_1__, 0LL);
    v68 = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
    v68->__9__1_1 = (struct System_Func_SvtMultiPortraitEntity__int__o *)_9__1_1;
    sub_1B4CF34((CGThumbnailListItem_o *)&v68->__9__1_1, (int32_t)_9__1_1, v69, v70);
  }
  v71 = (System_Collections_Generic_IEnumerable_TSource__o *)v36;
  v72 = (System_Func_TSource__TKey__o *)_9__1_1;
LABEL_75:
  v110 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                v71,
                                                                v72,
                                                                (const MethodInfo_2F2DB00 *)Method_System_Linq_Enumerable_OrderBy_SvtMultiPortraitEntity__int___);
  return (System_Collections_Generic_List_SvtMultiPortraitEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                        v110,
                                                                        (const MethodInfo_2F401C8 *)Method_System_Linq_Enumerable_ToList_SvtMultiPortraitEntity___);
}


void __fastcall SvtMultiPortraitMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BBA47 & 1) == 0 )
  {
    sub_1B4CF90(&SvtMultiPortraitMaster___c_TypeInfo, v1);
    byte_49BBA47 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(SvtMultiPortraitMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SvtMultiPortraitMaster___c_TypeInfo->static_fields->__9 = (struct SvtMultiPortraitMaster___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)SvtMultiPortraitMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall SvtMultiPortraitMaster___c___ctor(SvtMultiPortraitMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SvtMultiPortraitMaster___c___GetEntityListOrderBy_b__1_0(
        SvtMultiPortraitMaster___c_o *this,
        SvtMultiPortraitEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B4D1EC(this, 0LL);
  return entity->fields.type == 0;
}


int32_t __fastcall SvtMultiPortraitMaster___c___GetEntityListOrderBy_b__1_1(
        SvtMultiPortraitMaster___c_o *this,
        SvtMultiPortraitEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  return x->fields.idx;
}


int32_t __fastcall SvtMultiPortraitMaster___c___GetEntityListOrderBy_b__1_2(
        SvtMultiPortraitMaster___c_o *this,
        SvtMultiPortraitEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B4D1EC(this, 0LL);
  return x->fields.idx;
}


void __fastcall SvtMultiPortraitMaster___c__DisplayClass1_0___ctor(
        SvtMultiPortraitMaster___c__DisplayClass1_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SvtMultiPortraitMaster___c__DisplayClass1_1___ctor(
        SvtMultiPortraitMaster___c__DisplayClass1_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall SvtMultiPortraitMaster___c__DisplayClass1_1___GetEntityListOrderBy_b__3(
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
    sub_1B4D1EC(this, x);
  }
  return 0;
}