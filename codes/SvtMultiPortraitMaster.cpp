void SvtMultiPortraitMaster___ctor(SvtMultiPortraitMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59393A2 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_SvtMultiPortraitMaster__SvtMultiPortraitEntity__string___ctor__);
    byte_59393A2 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    403,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_SvtMultiPortraitMaster__SvtMultiPortraitEntity__string___ctor__);
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
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  System_Collections_Generic_IEnumerator_T__o *v14; // x1
  System_Collections_Generic_IEnumerator_T__o *v15; // x23
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v17; // x9
  int *p_offset; // x10
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x1
  System_Collections_Generic_IEnumerator_T__o *v22; // x23
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  System_Collections_Generic_IEnumerator_T__o *v37; // x22
  System_Collections_Generic_IEnumerator_T__c *v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  __int64 v42; // x1
  SvtMultiPortraitMaster___c_c *v43; // x0
  struct SvtMultiPortraitMaster___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__1_0; // x21
  Il2CppObject *v46; // x22
  struct SvtMultiPortraitMaster___c_StaticFields *v47; // x0
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  __int64 v54; // x1
  SvtMultiPortraitMaster___c_c *v55; // x0
  struct SvtMultiPortraitMaster___c_StaticFields *v56; // x8
  System_Func_object__int__o *_9__1_1; // x20
  Il2CppObject *v58; // x21
  struct SvtMultiPortraitMaster___c_StaticFields *v59; // x0
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v66; // x0
  System_Func_TSource__TKey__o *v67; // x1
  System_Collections_Generic_List_object__o *v69; // x21
  __int64 v70; // x23
  __int64 v71; // x0
  __int64 v72; // x1
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  __int64 v79; // x24
  int32_t current; // w1
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  __int64 v87; // x0
  System_String_o *v88; // x2
  System_String_o *v89; // x3
  int32_t v90; // w4
  int32_t v91; // w5
  bool v92; // w6
  bool v93; // w7
  __int64 v94; // x1
  int v95; // w8
  struct System_Object_array *v96; // x8
  _QWORD *v97; // x9
  __int64 v98; // x10
  Il2CppClass **v99; // x0
  System_Func_object__bool__o *v100; // x24
  _BOOL8 v101; // x0
  __int64 v102; // x1
  SvtMultiPortraitMaster___c_c *v103; // x0
  struct SvtMultiPortraitMaster___c_StaticFields *v104; // x8
  System_Func_object__int__o *_9__1_2; // x19
  Il2CppObject *v106; // x20
  struct SvtMultiPortraitMaster___c_StaticFields *v107; // x0
  System_String_o *v108; // x2
  System_String_o *v109; // x3
  int32_t v110; // w4
  int32_t v111; // w5
  bool v112; // w6
  bool v113; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v114; // x0
  System_Collections_Generic_List_Enumerator_object__o v115; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v116; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_IEnumerator_T__o *v117; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_59393A3 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_SvtMultiPortraitEntity___);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_SvtMultiPortraitEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Linq_Enumerable_All_SvtMultiPortraitEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderBy_SvtMultiPortraitEntity__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_SvtMultiPortraitEntity___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_21FFC50(&System_Func_SvtMultiPortraitEntity__int__TypeInfo);
    sub_21FFC50(&System_Func_SvtMultiPortraitEntity__bool__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_SvtMultiPortraitEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_SvtMultiPortraitEntity__TypeInfo);
    sub_21FFC50(&Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_0__);
    sub_21FFC50(&Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_1__);
    sub_21FFC50(&Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_2__);
    sub_21FFC50(&SvtMultiPortraitMaster___c__DisplayClass1_0_TypeInfo);
    sub_21FFC50(&Method_SvtMultiPortraitMaster___c__DisplayClass1_1__GetEntityListOrderBy_b__3__);
    sub_21FFC50(&SvtMultiPortraitMaster___c__DisplayClass1_1_TypeInfo);
    sub_21FFC50(&SvtMultiPortraitMaster___c_TypeInfo);
    byte_59393A3 = 1;
  }
  v117 = 0;
  memset(&v116, 0, sizeof(v116));
  v9 = sub_21FFEBC(SvtMultiPortraitMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_88;
  *(_DWORD *)(v9 + 16) = overwriteType;
  v12 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_SvtMultiPortraitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_88;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_SvtMultiPortraitEntity__GetEnumerator__);
  v117 = Enumerator;
  v115.fields._list = 0;
  *(_QWORD *)&v115.fields._index = &v117;
  if ( !Enumerator )
LABEL_30:
    sub_21FFECC(Enumerator, v14);
  v15 = Enumerator;
  while ( 1 )
  {
    klass = v15->klass;
    v17 = *(unsigned __int16 *)&v15->klass->_2.rank;
    if ( *(_WORD *)&v15->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        p_offset += 4;
        if ( !v17 )
          goto LABEL_11;
      }
      v19 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v19 = sub_2237E2C(v15, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
            v15,
            *(_QWORD *)(v19 + 8));
    if ( (v20 & 1) == 0 )
      break;
    v22 = v117;
    if ( !v117 )
      sub_21FFECC(v20, v21);
    v23 = v117->klass;
    v24 = *(unsigned __int16 *)&v117->klass->_2.rank;
    if ( *(_WORD *)&v117->klass->_2.rank )
    {
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_SvtMultiPortraitEntity__c **)v25 - 1) != System_Collections_Generic_IEnumerator_SvtMultiPortraitEntity__TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_19;
      }
      v26 = (__int64)&v23->vtable[*v25];
    }
    else
    {
LABEL_19:
      v26 = sub_2237E2C(v117, System_Collections_Generic_IEnumerator_SvtMultiPortraitEntity__TypeInfo, 0);
    }
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
                                                                  v22,
                                                                  *(_QWORD *)(v26 + 8));
    v14 = Enumerator;
    if ( Enumerator && LODWORD(Enumerator[1].klass) == svtId && HIDWORD(Enumerator[1].klass) == limitCount )
    {
      if ( !v12
        || (items = v12->fields._items,
            v34 = Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__,
            ++v12->fields._version,
            !items) )
      {
        sub_21FFECC(Enumerator, Enumerator);
      }
      size = v12->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          (Il2CppObject *)Enumerator,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v36 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v36[4] = (Il2CppClass *)v14;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v36 + 4), (int32_t)v14, v27, v28, v29, v30, v31, v32);
      }
    }
    v15 = v117;
    if ( !v117 )
      goto LABEL_30;
  }
  v37 = v117;
  if ( v117 )
  {
    v38 = v117->klass;
    v39 = *(unsigned __int16 *)&v117->klass->_2.rank;
    if ( *(_WORD *)&v117->klass->_2.rank )
    {
      v40 = &v38->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
      {
        --v39;
        v40 += 4;
        if ( !v39 )
          goto LABEL_36;
      }
      v41 = (__int64)&v38->vtable[*v40];
    }
    else
    {
LABEL_36:
      v41 = sub_2237E2C(v117, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v41)(v37, *(_QWORD *)(v41 + 8));
  }
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v12,
          (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___) )
    return 0;
  v43 = SvtMultiPortraitMaster___c_TypeInfo;
  if ( !*(&SvtMultiPortraitMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SvtMultiPortraitMaster___c_TypeInfo, v42);
    v43 = SvtMultiPortraitMaster___c_TypeInfo;
  }
  static_fields = v43->static_fields;
  _9__1_0 = (System_Func_object__bool__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !*(&v43->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v43, v42);
      static_fields = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
    }
    v46 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_SvtMultiPortraitEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__1_0, v46, Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_0__, 0);
    v47 = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
    v47->__9__1_0 = (struct System_Func_SvtMultiPortraitEntity__bool__o *)_9__1_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v47->__9__1_0, (int32_t)_9__1_0, v48, v49, v50, v51, v52, v53);
  }
  if ( System_Linq_Enumerable__All_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v12,
         (System_Func_TSource__bool__o *)_9__1_0,
         (const MethodInfo_3831808 *)Method_System_Linq_Enumerable_All_SvtMultiPortraitEntity___) )
  {
    v55 = SvtMultiPortraitMaster___c_TypeInfo;
    if ( !*(&SvtMultiPortraitMaster___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SvtMultiPortraitMaster___c_TypeInfo, v54);
      v55 = SvtMultiPortraitMaster___c_TypeInfo;
    }
    v56 = v55->static_fields;
    _9__1_1 = (System_Func_object__int__o *)v56->__9__1_1;
    if ( !_9__1_1 )
    {
      if ( !*(&v55->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v55, v54);
        v56 = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
      }
      v58 = (Il2CppObject *)v56->__9;
      _9__1_1 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_SvtMultiPortraitEntity__int__TypeInfo);
      System_Func_object__int____ctor(_9__1_1, v58, Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_1__, 0);
      v59 = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
      v59->__9__1_1 = (struct System_Func_SvtMultiPortraitEntity__int__o *)_9__1_1;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v59->__9__1_1, (int32_t)_9__1_1, v60, v61, v62, v63, v64, v65);
    }
    v66 = (System_Collections_Generic_IEnumerable_TSource__o *)v12;
    v67 = (System_Func_TSource__TKey__o *)_9__1_1;
    goto LABEL_81;
  }
  v69 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_SvtMultiPortraitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v69,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity___ctor__);
  if ( !v12 )
LABEL_88:
    sub_21FFECC(list, v11);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v115,
    v12,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
  v116 = v115;
  v115.fields._list = 0;
  *(_QWORD *)&v115.fields._index = &v116;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v116,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__) )
  {
    v70 = sub_21FFEBC(SvtMultiPortraitMaster___c__DisplayClass1_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v70, 0);
    if ( !v70 )
      sub_21FFECC(v71, v72);
    *(_QWORD *)(v70 + 24) = v9;
    v79 = v70 + 24;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v70 + 24), v9, v73, v74, v75, v76, v77, v78);
    current = (int32_t)v116.fields._current;
    *(_QWORD *)(v70 + 16) = v116.fields._current;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v70 + 16), current, v81, v82, v83, v84, v85, v86);
    v94 = *(_QWORD *)(v70 + 16);
    if ( !v94 )
      sub_21FFECC(v87, 0);
    if ( !*(_QWORD *)v79 )
      sub_21FFECC(v87, v94);
    v95 = *(_DWORD *)(v94 + 28);
    if ( v95 == *(_DWORD *)(*(_QWORD *)v79 + 16LL) )
    {
      if ( !v69
        || (v96 = v69->fields._items,
            v97 = Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__,
            ++v69->fields._version,
            !v96) )
      {
        sub_21FFECC(v87, v94);
      }
      v98 = v69->fields._size;
      if ( (unsigned int)v98 < LODWORD(v96->max_length) )
        goto LABEL_65;
LABEL_72:
      System_Collections_Generic_List_object___AddWithResize(
        v69,
        (Il2CppObject *)v94,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
    }
    else if ( !v95 )
    {
      v100 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_SvtMultiPortraitEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v100,
        (Il2CppObject *)v70,
        Method_SvtMultiPortraitMaster___c__DisplayClass1_1__GetEntityListOrderBy_b__3__,
        0);
      v101 = BasicHelper__Any_object_(
               (System_Collections_Generic_List_T__o *)v12,
               (System_Func_T__bool__o *)v100,
               (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_SvtMultiPortraitEntity___);
      if ( !v101 )
      {
        if ( !v69
          || (v96 = v69->fields._items,
              v94 = *(_QWORD *)(v70 + 16),
              v97 = Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__,
              ++v69->fields._version,
              !v96) )
        {
          sub_21FFECC(v101, v94);
        }
        v98 = v69->fields._size;
        if ( (unsigned int)v98 >= LODWORD(v96->max_length) )
          goto LABEL_72;
LABEL_65:
        v99 = &v96->obj.klass + v98;
        v69->fields._size = v98 + 1;
        v99[4] = (Il2CppClass *)v94;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v99 + 4), v94, v88, v89, v90, v91, v92, v93);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v116,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
  v103 = SvtMultiPortraitMaster___c_TypeInfo;
  if ( !*(&SvtMultiPortraitMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SvtMultiPortraitMaster___c_TypeInfo, v102);
    v103 = SvtMultiPortraitMaster___c_TypeInfo;
  }
  v104 = v103->static_fields;
  _9__1_2 = (System_Func_object__int__o *)v104->__9__1_2;
  if ( !_9__1_2 )
  {
    if ( !*(&v103->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v103, v102);
      v104 = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
    }
    v106 = (Il2CppObject *)v104->__9;
    _9__1_2 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_SvtMultiPortraitEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__1_2, v106, Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_2__, 0);
    v107 = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
    v107->__9__1_2 = (struct System_Func_SvtMultiPortraitEntity__int__o *)_9__1_2;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v107->__9__1_2,
      (int32_t)_9__1_2,
      v108,
      v109,
      v110,
      v111,
      v112,
      v113);
  }
  v66 = (System_Collections_Generic_IEnumerable_TSource__o *)v69;
  v67 = (System_Func_TSource__TKey__o *)_9__1_2;
LABEL_81:
  v114 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                v66,
                                                                v67,
                                                                (const MethodInfo_38556D8 *)Method_System_Linq_Enumerable_OrderBy_SvtMultiPortraitEntity__int___);
  return (System_Collections_Generic_List_SvtMultiPortraitEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                        v114,
                                                                        (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_SvtMultiPortraitEntity___);
}


void SvtMultiPortraitMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59393A4 & 1) == 0 )
  {
    sub_21FFC50(&SvtMultiPortraitMaster___c_TypeInfo);
    byte_59393A4 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(SvtMultiPortraitMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SvtMultiPortraitMaster___c_TypeInfo->static_fields->__9 = (struct SvtMultiPortraitMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)SvtMultiPortraitMaster___c_TypeInfo->static_fields,
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
    sub_21FFECC(this, 0);
  return entity->fields.type == 0;
}


int32_t SvtMultiPortraitMaster___c___GetEntityListOrderBy_b__1_1(
        SvtMultiPortraitMaster___c_o *this,
        SvtMultiPortraitEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.idx;
}


int32_t SvtMultiPortraitMaster___c___GetEntityListOrderBy_b__1_2(
        SvtMultiPortraitMaster___c_o *this,
        SvtMultiPortraitEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
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
    sub_21FFECC(this, x);
  }
  return 0;
}