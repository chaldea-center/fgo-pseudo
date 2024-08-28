void __fastcall SvtMultiPortraitMaster___ctor(SvtMultiPortraitMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A204EC & 1) == 0 )
  {
    sub_1B715CC(&Method_DataMasterBase_SvtMultiPortraitMaster__SvtMultiPortraitEntity__string___ctor__, method);
    byte_4A204EC = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    395,
    (const MethodInfo_30F8A78 *)Method_DataMasterBase_SvtMultiPortraitMaster__SvtMultiPortraitEntity__string___ctor__);
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
  __int64 v33; // x1
  __int64 v34; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v36; // x1
  System_Collections_Generic_List_object__o *v37; // x19
  __int64 v38; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v41; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v44; // x8
  __int64 v45; // x9
  int32_t *v46; // x10
  __int64 v47; // x0
  __int64 v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  __int64 v51; // x8
  SvtMultiPortraitEntity_c *v52; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v55; // x10
  __int64 size; // x11
  Il2CppClass **v57; // x0
  System_Collections_Generic_IEnumerator_T__c *v58; // x8
  __int64 v59; // x9
  int32_t *v60; // x10
  __int64 v61; // x0
  SvtMultiPortraitMaster___c_c *v62; // x0
  System_Func_object__bool__o *_9__1_0; // x21
  Il2CppObject *v64; // x22
  struct SvtMultiPortraitMaster___c_StaticFields *static_fields; // x0
  int32_t v66; // w2
  int32_t v67; // w3
  SvtMultiPortraitMaster___c_c *v68; // x0
  System_Func_object__int__o *_9__1_1; // x20
  Il2CppObject *v70; // x21
  struct SvtMultiPortraitMaster___c_StaticFields *v71; // x0
  int32_t v72; // w2
  int32_t v73; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v74; // x0
  System_Func_TSource__TKey__o *v75; // x1
  System_Collections_Generic_List_object__o *v77; // x21
  __int64 v78; // x22
  __int64 v79; // x0
  __int64 v80; // x1
  int32_t v81; // w2
  int32_t v82; // w3
  __int64 v83; // x24
  int32_t current; // w1
  int32_t v85; // w2
  int32_t v86; // w3
  __int64 v87; // x0
  __int64 v88; // x1
  int32_t v89; // w2
  int32_t v90; // w3
  __int64 v91; // x8
  int v92; // w9
  struct System_Object_array *v93; // x9
  _QWORD *v94; // x10
  __int64 v95; // x11
  Il2CppClass **v96; // x0
  System_Func_object__bool__o *v97; // x24
  _BOOL8 v98; // x0
  __int64 v99; // x1
  int32_t v100; // w2
  int32_t v101; // w3
  Il2CppObject *v102; // x1
  struct System_Object_array *v103; // x8
  _QWORD *v104; // x9
  __int64 v105; // x10
  Il2CppClass **v106; // x0
  SvtMultiPortraitMaster___c_c *v107; // x0
  System_Func_object__int__o *_9__1_2; // x19
  Il2CppObject *v109; // x20
  struct SvtMultiPortraitMaster___c_StaticFields *v110; // x0
  int32_t v111; // w2
  int32_t v112; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v113; // x0
  System_Collections_Generic_List_Enumerator_object__o v114; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v115; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A204ED & 1) == 0 )
  {
    sub_1B715CC(&Method_BasicHelper_Any_SvtMultiPortraitEntity___, *(_QWORD *)&svtId);
    sub_1B715CC(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v9);
    sub_1B715CC(&Method_System_Linq_Enumerable_All_SvtMultiPortraitEntity___, v10);
    sub_1B715CC(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v11);
    sub_1B715CC(&Method_System_Linq_Enumerable_OrderBy_SvtMultiPortraitEntity__int___, v12);
    sub_1B715CC(&Method_System_Linq_Enumerable_ToList_SvtMultiPortraitEntity___, v13);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v14);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v15);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v16);
    sub_1B715CC(&System_Func_SvtMultiPortraitEntity__int__TypeInfo, v17);
    sub_1B715CC(&System_Func_SvtMultiPortraitEntity__bool__TypeInfo, v18);
    sub_1B715CC(&System_IDisposable_TypeInfo, v19);
    sub_1B715CC(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v20);
    sub_1B715CC(&System_Collections_IEnumerator_TypeInfo, v21);
    sub_1B715CC(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__, v22);
    sub_1B715CC(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v23);
    sub_1B715CC(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity___ctor__, v24);
    sub_1B715CC(&System_Collections_Generic_List_SvtMultiPortraitEntity__TypeInfo, v25);
    sub_1B715CC(&SvtMultiPortraitEntity_TypeInfo, v26);
    sub_1B715CC(&Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_0__, v27);
    sub_1B715CC(&Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_1__, v28);
    sub_1B715CC(&Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_2__, v29);
    sub_1B715CC(&SvtMultiPortraitMaster___c__DisplayClass1_0_TypeInfo, v30);
    sub_1B715CC(&Method_SvtMultiPortraitMaster___c__DisplayClass1_1__GetEntityListOrderBy_b__3__, v31);
    sub_1B715CC(&SvtMultiPortraitMaster___c__DisplayClass1_1_TypeInfo, v32);
    sub_1B715CC(&SvtMultiPortraitMaster___c_TypeInfo, v33);
    byte_4A204ED = 1;
  }
  memset(&v115, 0, sizeof(v115));
  v34 = sub_1B71818(SvtMultiPortraitMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v34, 0LL);
  if ( !v34 )
    goto LABEL_86;
  *(_DWORD *)(v34 + 16) = overwriteType;
  v37 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_SvtMultiPortraitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_86;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3096080 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B71828(0LL, v38);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v41 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v41;
        p_offset += 4;
        if ( !v41 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BC35AC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v44 = Enumerator->klass;
    v45 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v46 = &v44->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v46 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v45;
        v46 += 4;
        if ( !v45 )
          goto LABEL_17;
      }
      v47 = (__int64)&v44->vtable[*v46].method;
    }
    else
    {
LABEL_17:
      v47 = sub_1BC35AC(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v48 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v47)(
            Enumerator,
            *(_QWORD *)(v47 + 8));
    v51 = v48;
    if ( v48 )
    {
      v52 = SvtMultiPortraitEntity_TypeInfo;
      methodPtr_low = LOBYTE(SvtMultiPortraitEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v48 + 304LL) < (unsigned int)methodPtr_low
        || *(SvtMultiPortraitEntity_c **)(*(_QWORD *)(*(_QWORD *)v48 + 200LL) + 8 * methodPtr_low - 8) != SvtMultiPortraitEntity_TypeInfo )
      {
        sub_1B71AE8(v48);
LABEL_79:
        sub_1B71828(v87, v88);
      }
      if ( *(_DWORD *)(v48 + 16) == svtId && *(_DWORD *)(v48 + 20) == limitCount )
      {
        if ( !v37 )
          sub_1B71828(v48, SvtMultiPortraitEntity_TypeInfo);
        items = v37->fields._items;
        v55 = Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__;
        ++v37->fields._version;
        if ( !items )
          sub_1B71828(v48, v52);
        size = v37->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v37,
            (Il2CppObject *)v48,
            *(const MethodInfo_34D0260 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
        }
        else
        {
          v57 = &items->obj.klass + size;
          v37->fields._size = size + 1;
          v57[4] = (Il2CppClass *)v51;
          sub_1B71570((ServantStatusBattleListViewItem_o *)(v57 + 4), v51, v49, v50);
        }
      }
    }
  }
  v58 = Enumerator->klass;
  v59 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v60 = &v58->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v60 - 1) != System_IDisposable_TypeInfo )
    {
      --v59;
      v60 += 4;
      if ( !v59 )
        goto LABEL_33;
    }
    v61 = (__int64)&v58->vtable[*v60].method;
  }
  else
  {
LABEL_33:
    v61 = sub_1BC35AC(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v61)(Enumerator, *(_QWORD *)(v61 + 8));
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v37,
          (const MethodInfo_2E68DBC *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___) )
    return 0LL;
  v62 = SvtMultiPortraitMaster___c_TypeInfo;
  if ( !SvtMultiPortraitMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtMultiPortraitMaster___c_TypeInfo);
    v62 = SvtMultiPortraitMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Func_object__bool__o *)v62->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v62->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v62);
      v62 = SvtMultiPortraitMaster___c_TypeInfo;
    }
    v64 = (Il2CppObject *)v62->static_fields->__9;
    _9__1_0 = (System_Func_object__bool__o *)sub_1B71818(System_Func_SvtMultiPortraitEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__1_0,
      v64,
      Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_0__,
      0LL);
    static_fields = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_SvtMultiPortraitEntity__bool__o *)_9__1_0;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v66, v67);
  }
  if ( !System_Linq_Enumerable__All_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v37,
          (System_Func_TSource__bool__o *)_9__1_0,
          (const MethodInfo_2E6798C *)Method_System_Linq_Enumerable_All_SvtMultiPortraitEntity___) )
  {
    v77 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_SvtMultiPortraitEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v77,
      (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity___ctor__);
    if ( v37 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v114,
        v37,
        (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
      v115 = v114;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v115,
                (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__) )
      {
        v78 = sub_1B71818(SvtMultiPortraitMaster___c__DisplayClass1_1_TypeInfo);
        System_Object___ctor((Il2CppObject *)v78, 0LL);
        if ( !v78 )
          sub_1B71828(v79, v80);
        *(_QWORD *)(v78 + 24) = v34;
        v83 = v78 + 24;
        sub_1B71570((ServantStatusBattleListViewItem_o *)(v78 + 24), v34, v81, v82);
        current = (int32_t)v115.fields._current;
        *(_QWORD *)(v78 + 16) = v115.fields._current;
        sub_1B71570((ServantStatusBattleListViewItem_o *)(v78 + 16), current, v85, v86);
        v91 = *(_QWORD *)(v78 + 16);
        if ( !v91 )
          sub_1B71828(v87, v88);
        if ( !*(_QWORD *)v83 )
          goto LABEL_79;
        v92 = *(_DWORD *)(v91 + 28);
        if ( v92 == *(_DWORD *)(*(_QWORD *)v83 + 16LL) )
        {
          if ( !v77 )
            sub_1B71828(v87, v88);
          v93 = v77->fields._items;
          v94 = Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__;
          ++v77->fields._version;
          if ( !v93 )
            sub_1B71828(v87, v88);
          v95 = v77->fields._size;
          if ( (unsigned int)v95 >= v93->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v77,
              (Il2CppObject *)v91,
              *(const MethodInfo_34D0260 **)(*(_QWORD *)(v94[4] + 192LL) + 112LL));
          }
          else
          {
            v96 = &v93->obj.klass + v95;
            v77->fields._size = v95 + 1;
            v96[4] = (Il2CppClass *)v91;
            sub_1B71570((ServantStatusBattleListViewItem_o *)(v96 + 4), v91, v89, v90);
          }
        }
        else if ( !v92 )
        {
          v97 = (System_Func_object__bool__o *)sub_1B71818(System_Func_SvtMultiPortraitEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v97,
            (Il2CppObject *)v78,
            Method_SvtMultiPortraitMaster___c__DisplayClass1_1__GetEntityListOrderBy_b__3__,
            0LL);
          v98 = BasicHelper__Any_object_(
                  (System_Collections_Generic_List_T__o *)v37,
                  (System_Func_T__bool__o *)v97,
                  (const MethodInfo_2E467B0 *)Method_BasicHelper_Any_SvtMultiPortraitEntity___);
          if ( !v98 )
          {
            if ( !v77 )
              sub_1B71828(v98, v99);
            v102 = *(Il2CppObject **)(v78 + 16);
            v103 = v77->fields._items;
            v104 = Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__;
            ++v77->fields._version;
            if ( !v103 )
              sub_1B71828(v98, v102);
            v105 = v77->fields._size;
            if ( (unsigned int)v105 >= v103->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v77,
                v102,
                *(const MethodInfo_34D0260 **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
            }
            else
            {
              v106 = &v103->obj.klass + v105;
              v77->fields._size = v105 + 1;
              v106[4] = (Il2CppClass *)v102;
              sub_1B71570((ServantStatusBattleListViewItem_o *)(v106 + 4), (int32_t)v102, v100, v101);
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v115,
        (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
      v107 = SvtMultiPortraitMaster___c_TypeInfo;
      if ( !SvtMultiPortraitMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SvtMultiPortraitMaster___c_TypeInfo);
        v107 = SvtMultiPortraitMaster___c_TypeInfo;
      }
      _9__1_2 = (System_Func_object__int__o *)v107->static_fields->__9__1_2;
      if ( !_9__1_2 )
      {
        if ( !v107->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v107);
          v107 = SvtMultiPortraitMaster___c_TypeInfo;
        }
        v109 = (Il2CppObject *)v107->static_fields->__9;
        _9__1_2 = (System_Func_object__int__o *)sub_1B71818(System_Func_SvtMultiPortraitEntity__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__1_2,
          v109,
          Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_2__,
          0LL);
        v110 = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
        v110->__9__1_2 = (struct System_Func_SvtMultiPortraitEntity__int__o *)_9__1_2;
        sub_1B71570((ServantStatusBattleListViewItem_o *)&v110->__9__1_2, (int32_t)_9__1_2, v111, v112);
      }
      v74 = (System_Collections_Generic_IEnumerable_TSource__o *)v77;
      v75 = (System_Func_TSource__TKey__o *)_9__1_2;
      goto LABEL_77;
    }
LABEL_86:
    sub_1B71828(list, v36);
  }
  v68 = SvtMultiPortraitMaster___c_TypeInfo;
  if ( !SvtMultiPortraitMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtMultiPortraitMaster___c_TypeInfo);
    v68 = SvtMultiPortraitMaster___c_TypeInfo;
  }
  _9__1_1 = (System_Func_object__int__o *)v68->static_fields->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( !v68->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v68);
      v68 = SvtMultiPortraitMaster___c_TypeInfo;
    }
    v70 = (Il2CppObject *)v68->static_fields->__9;
    _9__1_1 = (System_Func_object__int__o *)sub_1B71818(System_Func_SvtMultiPortraitEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__1_1, v70, Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_1__, 0LL);
    v71 = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
    v71->__9__1_1 = (struct System_Func_SvtMultiPortraitEntity__int__o *)_9__1_1;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&v71->__9__1_1, (int32_t)_9__1_1, v72, v73);
  }
  v74 = (System_Collections_Generic_IEnumerable_TSource__o *)v37;
  v75 = (System_Func_TSource__TKey__o *)_9__1_1;
LABEL_77:
  v113 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                v74,
                                                                v75,
                                                                (const MethodInfo_2E8590C *)Method_System_Linq_Enumerable_OrderBy_SvtMultiPortraitEntity__int___);
  return (System_Collections_Generic_List_SvtMultiPortraitEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                        v113,
                                                                        (const MethodInfo_2E97ADC *)Method_System_Linq_Enumerable_ToList_SvtMultiPortraitEntity___);
}


void __fastcall SvtMultiPortraitMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A204EE & 1) == 0 )
  {
    sub_1B715CC(&SvtMultiPortraitMaster___c_TypeInfo, v1);
    byte_4A204EE = 1;
  }
  v2 = (Il2CppObject *)sub_1B71818(SvtMultiPortraitMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SvtMultiPortraitMaster___c_TypeInfo->static_fields->__9 = (struct SvtMultiPortraitMaster___c_o *)v2;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)SvtMultiPortraitMaster___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B71828(this, 0LL);
  return entity->fields.type == 0;
}


int32_t __fastcall SvtMultiPortraitMaster___c___GetEntityListOrderBy_b__1_1(
        SvtMultiPortraitMaster___c_o *this,
        SvtMultiPortraitEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B71828(this, 0LL);
  return x->fields.idx;
}


int32_t __fastcall SvtMultiPortraitMaster___c___GetEntityListOrderBy_b__1_2(
        SvtMultiPortraitMaster___c_o *this,
        SvtMultiPortraitEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B71828(this, 0LL);
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
    sub_1B71828(this, x);
  }
  return 0;
}