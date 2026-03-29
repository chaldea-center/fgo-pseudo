void SvtMultiPortraitMaster___ctor(SvtMultiPortraitMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4D3167B & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_SvtMultiPortraitMaster__SvtMultiPortraitEntity__string___ctor__);
    byte_4D3167B = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    401,
    (const MethodInfo_3465C5C *)Method_DataMasterBase_SvtMultiPortraitMaster__SvtMultiPortraitEntity__string___ctor__);
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
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  __int64 v30; // x1
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  __int64 v36; // x9
  int32_t *v37; // x10
  __int64 v38; // x0
  SvtMultiPortraitMaster___c_c *v39; // x0
  System_Func_object__bool__o *_9__1_0; // x21
  Il2CppObject *v41; // x22
  struct SvtMultiPortraitMaster___c_StaticFields *static_fields; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  SvtMultiPortraitMaster___c_c *v49; // x0
  System_Func_object__int__o *_9__1_1; // x20
  Il2CppObject *v51; // x21
  struct SvtMultiPortraitMaster___c_StaticFields *v52; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x0
  System_Func_TSource__TKey__o *v60; // x1
  System_Collections_Generic_List_object__o *v62; // x21
  __int64 v63; // x22
  __int64 v64; // x0
  __int64 v65; // x1
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  __int64 v72; // x24
  int32_t current; // w1
  int32_t v74; // w2
  int32_t v75; // w3
  System_String_o *v76; // x4
  int32_t v77; // w5
  int64_t v78; // x6
  System_String_o *v79; // x7
  __int64 v80; // x0
  __int64 v81; // x1
  int32_t v82; // w2
  int32_t v83; // w3
  System_String_o *v84; // x4
  int32_t v85; // w5
  int64_t v86; // x6
  System_String_o *v87; // x7
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
  int32_t v98; // w3
  System_String_o *v99; // x4
  int32_t v100; // w5
  int64_t v101; // x6
  System_String_o *v102; // x7
  Il2CppObject *v103; // x1
  struct System_Object_array *v104; // x8
  _QWORD *v105; // x9
  __int64 v106; // x10
  Il2CppClass **v107; // x0
  SvtMultiPortraitMaster___c_c *v108; // x0
  System_Func_object__int__o *_9__1_2; // x19
  Il2CppObject *v110; // x20
  struct SvtMultiPortraitMaster___c_StaticFields *v111; // x0
  int32_t v112; // w2
  int32_t v113; // w3
  System_String_o *v114; // x4
  int32_t v115; // w5
  int64_t v116; // x6
  System_String_o *v117; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v118; // x0
  System_Collections_Generic_List_Enumerator_object__o v119; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v120; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4D3167C & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Any_SvtMultiPortraitEntity___);
    sub_1C93AD4(&Method_System_Collections_ObjectModel_Collection_SvtMultiPortraitEntity__GetEnumerator__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_All_SvtMultiPortraitEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_OrderBy_SvtMultiPortraitEntity__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToList_SvtMultiPortraitEntity___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_1C93AD4(&System_Func_SvtMultiPortraitEntity__int__TypeInfo);
    sub_1C93AD4(&System_Func_SvtMultiPortraitEntity__bool__TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_SvtMultiPortraitEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_SvtMultiPortraitEntity__TypeInfo);
    sub_1C93AD4(&Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_0__);
    sub_1C93AD4(&Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_1__);
    sub_1C93AD4(&Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_2__);
    sub_1C93AD4(&SvtMultiPortraitMaster___c__DisplayClass1_0_TypeInfo);
    sub_1C93AD4(&Method_SvtMultiPortraitMaster___c__DisplayClass1_1__GetEntityListOrderBy_b__3__);
    sub_1C93AD4(&SvtMultiPortraitMaster___c__DisplayClass1_1_TypeInfo);
    sub_1C93AD4(&SvtMultiPortraitMaster___c_TypeInfo);
    byte_4D3167C = 1;
  }
  memset(&v120, 0, sizeof(v120));
  v9 = sub_1C93D20(SvtMultiPortraitMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_83;
  *(_DWORD *)(v9 + 16) = overwriteType;
  v12 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_SvtMultiPortraitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_83;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33FC384 *)Method_System_Collections_ObjectModel_Collection_SvtMultiPortraitEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C93D2C(0, v13);
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
      v18 = sub_1C69E5C(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      v22 = sub_1C69E5C(Enumerator, System_Collections_Generic_IEnumerator_SvtMultiPortraitEntity__TypeInfo, 0);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
            Enumerator,
            *(_QWORD *)(v22 + 8));
    v30 = v23;
    if ( v23 && *(_DWORD *)(v23 + 16) == svtId && *(_DWORD *)(v23 + 20) == limitCount )
    {
      if ( !v12 )
        sub_1C93D2C(v23, v23);
      items = v12->fields._items;
      v32 = Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__;
      ++v12->fields._version;
      if ( !items )
        sub_1C93D2C(v23, v23);
      size = v12->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          (Il2CppObject *)v23,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v34 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v34[4] = (Il2CppClass *)v30;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v34 + 4), v30, v24, v25, v26, v27, v28, v29);
      }
    }
  }
  v35 = Enumerator->klass;
  v36 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v37 = &v35->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
    {
      --v36;
      v37 += 4;
      if ( !v36 )
        goto LABEL_31;
    }
    v38 = (__int64)&v35->vtable[*v37];
  }
  else
  {
LABEL_31:
    v38 = sub_1C69E5C(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(Enumerator, *(_QWORD *)(v38 + 8));
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v12,
          (const MethodInfo_31B0714 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___) )
    return 0;
  v39 = SvtMultiPortraitMaster___c_TypeInfo;
  if ( !SvtMultiPortraitMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtMultiPortraitMaster___c_TypeInfo);
    v39 = SvtMultiPortraitMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Func_object__bool__o *)v39->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39);
      v39 = SvtMultiPortraitMaster___c_TypeInfo;
    }
    v41 = (Il2CppObject *)v39->static_fields->__9;
    _9__1_0 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_SvtMultiPortraitEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__1_0, v41, Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_0__, 0);
    static_fields = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_SvtMultiPortraitEntity__bool__o *)_9__1_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v43, v44, v45, v46, v47, v48);
  }
  if ( !System_Linq_Enumerable__All_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v12,
          (System_Func_TSource__bool__o *)_9__1_0,
          (const MethodInfo_31AF04C *)Method_System_Linq_Enumerable_All_SvtMultiPortraitEntity___) )
  {
    v62 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_SvtMultiPortraitEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v62,
      (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity___ctor__);
    if ( v12 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v119,
        v12,
        (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
      v120 = v119;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v120,
                (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__) )
      {
        v63 = sub_1C93D20(SvtMultiPortraitMaster___c__DisplayClass1_1_TypeInfo);
        System_Object___ctor((Il2CppObject *)v63, 0);
        if ( !v63 )
          sub_1C93D2C(v64, v65);
        *(_QWORD *)(v63 + 24) = v9;
        v72 = v63 + 24;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v63 + 24), v9, v66, v67, v68, v69, v70, v71);
        current = (int32_t)v120.fields._current;
        *(_QWORD *)(v63 + 16) = v120.fields._current;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v63 + 16), current, v74, v75, v76, v77, v78, v79);
        v88 = *(_QWORD *)(v63 + 16);
        if ( !v88 )
          sub_1C93D2C(v80, v81);
        if ( !*(_QWORD *)v72 )
          sub_1C93D2C(v80, v81);
        v89 = *(_DWORD *)(v88 + 28);
        if ( v89 == *(_DWORD *)(*(_QWORD *)v72 + 16LL) )
        {
          if ( !v62 )
            sub_1C93D2C(v80, v81);
          v90 = v62->fields._items;
          v91 = Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__;
          ++v62->fields._version;
          if ( !v90 )
            sub_1C93D2C(v80, v81);
          v92 = v62->fields._size;
          if ( (unsigned int)v92 >= LODWORD(v90->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v62,
              (Il2CppObject *)v88,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
          }
          else
          {
            v93 = &v90->obj.klass + v92;
            v62->fields._size = v92 + 1;
            v93[4] = (Il2CppClass *)v88;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v93 + 4), v88, v82, v83, v84, v85, v86, v87);
          }
        }
        else if ( !v89 )
        {
          v94 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_SvtMultiPortraitEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v94,
            (Il2CppObject *)v63,
            Method_SvtMultiPortraitMaster___c__DisplayClass1_1__GetEntityListOrderBy_b__3__,
            0);
          v95 = BasicHelper__Any_object_(
                  (System_Collections_Generic_List_T__o *)v12,
                  (System_Func_T__bool__o *)v94,
                  (const MethodInfo_318DB78 *)Method_BasicHelper_Any_SvtMultiPortraitEntity___);
          if ( !v95 )
          {
            if ( !v62 )
              sub_1C93D2C(v95, v96);
            v103 = *(Il2CppObject **)(v63 + 16);
            v104 = v62->fields._items;
            v105 = Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__;
            ++v62->fields._version;
            if ( !v104 )
              sub_1C93D2C(v95, v103);
            v106 = v62->fields._size;
            if ( (unsigned int)v106 >= LODWORD(v104->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v62,
                v103,
                *(const MethodInfo_387999C **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
            }
            else
            {
              v107 = &v104->obj.klass + v106;
              v62->fields._size = v106 + 1;
              v107[4] = (Il2CppClass *)v103;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v107 + 4), (int32_t)v103, v97, v98, v99, v100, v101, v102);
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v120,
        (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
      v108 = SvtMultiPortraitMaster___c_TypeInfo;
      if ( !SvtMultiPortraitMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SvtMultiPortraitMaster___c_TypeInfo);
        v108 = SvtMultiPortraitMaster___c_TypeInfo;
      }
      _9__1_2 = (System_Func_object__int__o *)v108->static_fields->__9__1_2;
      if ( !_9__1_2 )
      {
        if ( !v108->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v108);
          v108 = SvtMultiPortraitMaster___c_TypeInfo;
        }
        v110 = (Il2CppObject *)v108->static_fields->__9;
        _9__1_2 = (System_Func_object__int__o *)sub_1C93D20(System_Func_SvtMultiPortraitEntity__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__1_2,
          v110,
          Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_2__,
          0);
        v111 = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
        v111->__9__1_2 = (struct System_Func_SvtMultiPortraitEntity__int__o *)_9__1_2;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&v111->__9__1_2,
          (int32_t)_9__1_2,
          v112,
          v113,
          v114,
          v115,
          v116,
          v117);
      }
      v59 = (System_Collections_Generic_IEnumerable_TSource__o *)v62;
      v60 = (System_Func_TSource__TKey__o *)_9__1_2;
      goto LABEL_75;
    }
LABEL_83:
    sub_1C93D2C(list, v11);
  }
  v49 = SvtMultiPortraitMaster___c_TypeInfo;
  if ( !SvtMultiPortraitMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtMultiPortraitMaster___c_TypeInfo);
    v49 = SvtMultiPortraitMaster___c_TypeInfo;
  }
  _9__1_1 = (System_Func_object__int__o *)v49->static_fields->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( !v49->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v49);
      v49 = SvtMultiPortraitMaster___c_TypeInfo;
    }
    v51 = (Il2CppObject *)v49->static_fields->__9;
    _9__1_1 = (System_Func_object__int__o *)sub_1C93D20(System_Func_SvtMultiPortraitEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__1_1, v51, Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_1__, 0);
    v52 = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
    v52->__9__1_1 = (struct System_Func_SvtMultiPortraitEntity__int__o *)_9__1_1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v52->__9__1_1, (int32_t)_9__1_1, v53, v54, v55, v56, v57, v58);
  }
  v59 = (System_Collections_Generic_IEnumerable_TSource__o *)v12;
  v60 = (System_Func_TSource__TKey__o *)_9__1_1;
LABEL_75:
  v118 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                v59,
                                                                v60,
                                                                (const MethodInfo_31D38D0 *)Method_System_Linq_Enumerable_OrderBy_SvtMultiPortraitEntity__int___);
  return (System_Collections_Generic_List_SvtMultiPortraitEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                        v118,
                                                                        (const MethodInfo_31E8E3C *)Method_System_Linq_Enumerable_ToList_SvtMultiPortraitEntity___);
}


void SvtMultiPortraitMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D3167D & 1) == 0 )
  {
    sub_1C93AD4(&SvtMultiPortraitMaster___c_TypeInfo);
    byte_4D3167D = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(SvtMultiPortraitMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SvtMultiPortraitMaster___c_TypeInfo->static_fields->__9 = (struct SvtMultiPortraitMaster___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)SvtMultiPortraitMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C93D2C(this, 0);
  return entity->fields.type == 0;
}


int32_t SvtMultiPortraitMaster___c___GetEntityListOrderBy_b__1_1(
        SvtMultiPortraitMaster___c_o *this,
        SvtMultiPortraitEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.idx;
}


int32_t SvtMultiPortraitMaster___c___GetEntityListOrderBy_b__1_2(
        SvtMultiPortraitMaster___c_o *this,
        SvtMultiPortraitEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
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
    sub_1C93D2C(this, x);
  }
  return 0;
}