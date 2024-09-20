void __fastcall SvtMultiPortraitMaster___ctor(SvtMultiPortraitMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5BC6C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_SvtMultiPortraitMaster__SvtMultiPortraitEntity__string___ctor__);
    byte_4A5BC6C = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    395,
    (const MethodInfo_311DC4C *)Method_DataMasterBase_SvtMultiPortraitMaster__SvtMultiPortraitEntity__string___ctor__);
}


System_Collections_Generic_List_SvtMultiPortraitEntity__o *__fastcall SvtMultiPortraitMaster__GetEntityListOrderBy(
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
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 v26; // x8
  SvtMultiPortraitEntity_c *v27; // x1
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v30; // x10
  __int64 size; // x11
  Il2CppClass **v32; // x0
  System_Collections_Generic_IEnumerator_T__c *v33; // x8
  __int64 v34; // x9
  int32_t *v35; // x10
  __int64 v36; // x0
  SvtMultiPortraitMaster___c_c *v37; // x0
  System_Func_object__bool__o *_9__1_0; // x21
  Il2CppObject *v39; // x22
  struct SvtMultiPortraitMaster___c_StaticFields *static_fields; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  SvtMultiPortraitMaster___c_c *v43; // x0
  System_Func_object__int__o *_9__1_1; // x20
  Il2CppObject *v45; // x21
  struct SvtMultiPortraitMaster___c_StaticFields *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0
  System_Func_TSource__TKey__o *v50; // x1
  System_Collections_Generic_List_object__o *v52; // x21
  __int64 v53; // x22
  __int64 v54; // x0
  __int64 v55; // x1
  int32_t v56; // w2
  int32_t v57; // w3
  __int64 v58; // x24
  int32_t current; // w1
  int32_t v60; // w2
  int32_t v61; // w3
  __int64 v62; // x0
  __int64 v63; // x1
  int32_t v64; // w2
  int32_t v65; // w3
  __int64 v66; // x8
  int v67; // w9
  struct System_Object_array *v68; // x9
  _QWORD *v69; // x10
  __int64 v70; // x11
  Il2CppClass **v71; // x0
  System_Func_object__bool__o *v72; // x24
  _BOOL8 v73; // x0
  __int64 v74; // x1
  int32_t v75; // w2
  int32_t v76; // w3
  Il2CppObject *v77; // x1
  struct System_Object_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  Il2CppClass **v81; // x0
  SvtMultiPortraitMaster___c_c *v82; // x0
  System_Func_object__int__o *_9__1_2; // x19
  Il2CppObject *v84; // x20
  struct SvtMultiPortraitMaster___c_StaticFields *v85; // x0
  int32_t v86; // w2
  int32_t v87; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v88; // x0
  System_Collections_Generic_List_Enumerator_object__o v89; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v90; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A5BC6D & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_SvtMultiPortraitEntity___);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&Method_System_Linq_Enumerable_All_SvtMultiPortraitEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderBy_SvtMultiPortraitEntity__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_SvtMultiPortraitEntity___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__);
    sub_1B885B0(&System_Func_SvtMultiPortraitEntity__int__TypeInfo);
    sub_1B885B0(&System_Func_SvtMultiPortraitEntity__bool__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_SvtMultiPortraitEntity__TypeInfo);
    sub_1B885B0(&SvtMultiPortraitEntity_TypeInfo);
    sub_1B885B0(&Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_0__);
    sub_1B885B0(&Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_1__);
    sub_1B885B0(&Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_2__);
    sub_1B885B0(&SvtMultiPortraitMaster___c__DisplayClass1_0_TypeInfo);
    sub_1B885B0(&Method_SvtMultiPortraitMaster___c__DisplayClass1_1__GetEntityListOrderBy_b__3__);
    sub_1B885B0(&SvtMultiPortraitMaster___c__DisplayClass1_1_TypeInfo);
    sub_1B885B0(&SvtMultiPortraitMaster___c_TypeInfo);
    byte_4A5BC6D = 1;
  }
  memset(&v90, 0, sizeof(v90));
  v9 = sub_1B887FC(SvtMultiPortraitMaster___c__DisplayClass1_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_86;
  *(_DWORD *)(v9 + 16) = overwriteType;
  v12 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SvtMultiPortraitEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_86;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B8880C(0LL, v13);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v19 = Enumerator->klass;
    v20 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v21 = &v19->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v21 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_17;
      }
      v22 = (__int64)&v19->vtable[*v21].method;
    }
    else
    {
LABEL_17:
      v22 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
            Enumerator,
            *(_QWORD *)(v22 + 8));
    v26 = v23;
    if ( v23 )
    {
      v27 = SvtMultiPortraitEntity_TypeInfo;
      methodPtr_low = LOBYTE(SvtMultiPortraitEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v23 + 304LL) < (unsigned int)methodPtr_low
        || *(SvtMultiPortraitEntity_c **)(*(_QWORD *)(*(_QWORD *)v23 + 200LL) + 8 * methodPtr_low - 8) != SvtMultiPortraitEntity_TypeInfo )
      {
        sub_1B88ACC(v23);
LABEL_79:
        sub_1B8880C(v62, v63);
      }
      if ( *(_DWORD *)(v23 + 16) == svtId && *(_DWORD *)(v23 + 20) == limitCount )
      {
        if ( !v12 )
          sub_1B8880C(v23, SvtMultiPortraitEntity_TypeInfo);
        items = v12->fields._items;
        v30 = Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__;
        ++v12->fields._version;
        if ( !items )
          sub_1B8880C(v23, v27);
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            (Il2CppObject *)v23,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v32[4] = (Il2CppClass *)v26;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v32 + 4), v26, v24, v25);
        }
      }
    }
  }
  v33 = Enumerator->klass;
  v34 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v35 = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v35 - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      v35 += 4;
      if ( !v34 )
        goto LABEL_33;
    }
    v36 = (__int64)&v33->vtable[*v35].method;
  }
  else
  {
LABEL_33:
    v36 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v36)(Enumerator, *(_QWORD *)(v36 + 8));
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v12,
          (const MethodInfo_2E8D2DC *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___) )
    return 0LL;
  v37 = SvtMultiPortraitMaster___c_TypeInfo;
  if ( !SvtMultiPortraitMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtMultiPortraitMaster___c_TypeInfo);
    v37 = SvtMultiPortraitMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Func_object__bool__o *)v37->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      v37 = SvtMultiPortraitMaster___c_TypeInfo;
    }
    v39 = (Il2CppObject *)v37->static_fields->__9;
    _9__1_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_SvtMultiPortraitEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__1_0,
      v39,
      Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_0__,
      0LL);
    static_fields = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_SvtMultiPortraitEntity__bool__o *)_9__1_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v41, v42);
  }
  if ( !System_Linq_Enumerable__All_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v12,
          (System_Func_TSource__bool__o *)_9__1_0,
          (const MethodInfo_2E8BEAC *)Method_System_Linq_Enumerable_All_SvtMultiPortraitEntity___) )
  {
    v52 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SvtMultiPortraitEntity__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v52,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity___ctor__);
    if ( v12 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v89,
        v12,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
      v90 = v89;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v90,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__) )
      {
        v53 = sub_1B887FC(SvtMultiPortraitMaster___c__DisplayClass1_1_TypeInfo);
        System_Object___ctor((Il2CppObject *)v53, 0LL);
        if ( !v53 )
          sub_1B8880C(v54, v55);
        *(_QWORD *)(v53 + 24) = v9;
        v58 = v53 + 24;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v53 + 24), v9, v56, v57);
        current = (int32_t)v90.fields._current;
        *(_QWORD *)(v53 + 16) = v90.fields._current;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v53 + 16), current, v60, v61);
        v66 = *(_QWORD *)(v53 + 16);
        if ( !v66 )
          sub_1B8880C(v62, v63);
        if ( !*(_QWORD *)v58 )
          goto LABEL_79;
        v67 = *(_DWORD *)(v66 + 28);
        if ( v67 == *(_DWORD *)(*(_QWORD *)v58 + 16LL) )
        {
          if ( !v52 )
            sub_1B8880C(v62, v63);
          v68 = v52->fields._items;
          v69 = Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__;
          ++v52->fields._version;
          if ( !v68 )
            sub_1B8880C(v62, v63);
          v70 = v52->fields._size;
          if ( (unsigned int)v70 >= v68->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v52,
              (Il2CppObject *)v66,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
          }
          else
          {
            v71 = &v68->obj.klass + v70;
            v52->fields._size = v70 + 1;
            v71[4] = (Il2CppClass *)v66;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v71 + 4), v66, v64, v65);
          }
        }
        else if ( !v67 )
        {
          v72 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_SvtMultiPortraitEntity__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v72,
            (Il2CppObject *)v53,
            Method_SvtMultiPortraitMaster___c__DisplayClass1_1__GetEntityListOrderBy_b__3__,
            0LL);
          v73 = BasicHelper__Any_object_(
                  (System_Collections_Generic_List_T__o *)v12,
                  (System_Func_T__bool__o *)v72,
                  (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_SvtMultiPortraitEntity___);
          if ( !v73 )
          {
            if ( !v52 )
              sub_1B8880C(v73, v74);
            v77 = *(Il2CppObject **)(v53 + 16);
            v78 = v52->fields._items;
            v79 = Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__;
            ++v52->fields._version;
            if ( !v78 )
              sub_1B8880C(v73, v77);
            v80 = v52->fields._size;
            if ( (unsigned int)v80 >= v78->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v52,
                v77,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
            }
            else
            {
              v81 = &v78->obj.klass + v80;
              v52->fields._size = v80 + 1;
              v81[4] = (Il2CppClass *)v77;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v81 + 4), (int32_t)v77, v75, v76);
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v90,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
      v82 = SvtMultiPortraitMaster___c_TypeInfo;
      if ( !SvtMultiPortraitMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SvtMultiPortraitMaster___c_TypeInfo);
        v82 = SvtMultiPortraitMaster___c_TypeInfo;
      }
      _9__1_2 = (System_Func_object__int__o *)v82->static_fields->__9__1_2;
      if ( !_9__1_2 )
      {
        if ( !v82->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v82);
          v82 = SvtMultiPortraitMaster___c_TypeInfo;
        }
        v84 = (Il2CppObject *)v82->static_fields->__9;
        _9__1_2 = (System_Func_object__int__o *)sub_1B887FC(System_Func_SvtMultiPortraitEntity__int__TypeInfo);
        System_Func_object__int____ctor(
          _9__1_2,
          v84,
          Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_2__,
          0LL);
        v85 = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
        v85->__9__1_2 = (struct System_Func_SvtMultiPortraitEntity__int__o *)_9__1_2;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v85->__9__1_2, (int32_t)_9__1_2, v86, v87);
      }
      v49 = (System_Collections_Generic_IEnumerable_TSource__o *)v52;
      v50 = (System_Func_TSource__TKey__o *)_9__1_2;
      goto LABEL_77;
    }
LABEL_86:
    sub_1B8880C(list, v11);
  }
  v43 = SvtMultiPortraitMaster___c_TypeInfo;
  if ( !SvtMultiPortraitMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtMultiPortraitMaster___c_TypeInfo);
    v43 = SvtMultiPortraitMaster___c_TypeInfo;
  }
  _9__1_1 = (System_Func_object__int__o *)v43->static_fields->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( !v43->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v43);
      v43 = SvtMultiPortraitMaster___c_TypeInfo;
    }
    v45 = (Il2CppObject *)v43->static_fields->__9;
    _9__1_1 = (System_Func_object__int__o *)sub_1B887FC(System_Func_SvtMultiPortraitEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__1_1, v45, Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_1__, 0LL);
    v46 = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
    v46->__9__1_1 = (struct System_Func_SvtMultiPortraitEntity__int__o *)_9__1_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v46->__9__1_1, (int32_t)_9__1_1, v47, v48);
  }
  v49 = (System_Collections_Generic_IEnumerable_TSource__o *)v12;
  v50 = (System_Func_TSource__TKey__o *)_9__1_1;
LABEL_77:
  v88 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v49,
                                                               v50,
                                                               (const MethodInfo_2EA9E2C *)Method_System_Linq_Enumerable_OrderBy_SvtMultiPortraitEntity__int___);
  return (System_Collections_Generic_List_SvtMultiPortraitEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                        v88,
                                                                        (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_SvtMultiPortraitEntity___);
}


void __fastcall SvtMultiPortraitMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5BC6E & 1) == 0 )
  {
    sub_1B885B0(&SvtMultiPortraitMaster___c_TypeInfo);
    byte_4A5BC6E = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(SvtMultiPortraitMaster___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  SvtMultiPortraitMaster___c_TypeInfo->static_fields->__9 = (struct SvtMultiPortraitMaster___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)SvtMultiPortraitMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
  return entity->fields.type == 0;
}


int32_t __fastcall SvtMultiPortraitMaster___c___GetEntityListOrderBy_b__1_1(
        SvtMultiPortraitMaster___c_o *this,
        SvtMultiPortraitEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.idx;
}


int32_t __fastcall SvtMultiPortraitMaster___c___GetEntityListOrderBy_b__1_2(
        SvtMultiPortraitMaster___c_o *this,
        SvtMultiPortraitEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, x);
  }
  return 0;
}