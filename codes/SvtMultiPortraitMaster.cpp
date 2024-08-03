void __fastcall SvtMultiPortraitMaster___ctor(SvtMultiPortraitMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FCE19 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_SvtMultiPortraitMaster__SvtMultiPortraitEntity__string___ctor__, method);
    byte_49FCE19 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    395,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_SvtMultiPortraitMaster__SvtMultiPortraitEntity__string___ctor__);
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
  __int64 v37; // x2
  System_Collections_Generic_List_object__o *v38; // x19
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
  __int64 methodPtr_low; // x10
  struct System_Object_array *items; // x9
  _QWORD *v54; // x10
  __int64 size; // x11
  Il2CppClass **v56; // x0
  System_Collections_Generic_IEnumerator_T__c *v57; // x8
  __int64 v58; // x9
  int32_t *v59; // x10
  __int64 v60; // x0
  __int64 v61; // x1
  __int64 v62; // x2
  SvtMultiPortraitMaster___c_c *v63; // x0
  System_Func_object__bool__o *_9__1_0; // x21
  Il2CppObject *v65; // x22
  struct SvtMultiPortraitMaster___c_StaticFields *static_fields; // x0
  int32_t v67; // w2
  int32_t v68; // w3
  __int64 v69; // x1
  __int64 v70; // x2
  SvtMultiPortraitMaster___c_c *v71; // x0
  System_Func_object__int__o *_9__1_1; // x20
  Il2CppObject *v73; // x21
  struct SvtMultiPortraitMaster___c_StaticFields *v74; // x0
  int32_t v75; // w2
  int32_t v76; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v77; // x0
  System_Func_TSource__TKey__o *v78; // x1
  System_Collections_Generic_List_object__o *v80; // x21
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x22
  __int64 v84; // x0
  int32_t v85; // w2
  int32_t v86; // w3
  __int64 v87; // x24
  int32_t current; // w1
  int32_t v89; // w2
  int32_t v90; // w3
  __int64 v91; // x0
  __int64 v92; // x1
  __int64 v93; // x2
  int32_t v94; // w3
  __int64 v95; // x8
  int v96; // w9
  struct System_Object_array *v97; // x9
  _QWORD *v98; // x10
  __int64 v99; // x11
  Il2CppClass **v100; // x0
  System_Func_object__bool__o *v101; // x24
  _BOOL8 v102; // x0
  int32_t v103; // w2
  int32_t v104; // w3
  Il2CppObject *v105; // x1
  struct System_Object_array *v106; // x8
  _QWORD *v107; // x9
  __int64 v108; // x10
  Il2CppClass **v109; // x0
  __int64 v110; // x1
  __int64 v111; // x2
  SvtMultiPortraitMaster___c_c *v112; // x0
  System_Func_object__int__o *_9__1_2; // x19
  Il2CppObject *v114; // x20
  struct SvtMultiPortraitMaster___c_StaticFields *v115; // x0
  int32_t v116; // w2
  int32_t v117; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v118; // x0
  System_Collections_Generic_List_Enumerator_object__o v119; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v120; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_49FCE1A & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_SvtMultiPortraitEntity___, *(_QWORD *)&svtId);
    sub_1B640C8(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v9);
    sub_1B640C8(&Method_System_Linq_Enumerable_All_SvtMultiPortraitEntity___, v10);
    sub_1B640C8(&Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___, v11);
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderBy_SvtMultiPortraitEntity__int___, v12);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_SvtMultiPortraitEntity___, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__get_Current__, v16);
    sub_1B640C8(&System_Func_SvtMultiPortraitEntity__int__TypeInfo, v17);
    sub_1B640C8(&System_Func_SvtMultiPortraitEntity__bool__TypeInfo, v18);
    sub_1B640C8(&System_IDisposable_TypeInfo, v19);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v20);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__, v23);
    sub_1B640C8(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity___ctor__, v24);
    sub_1B640C8(&System_Collections_Generic_List_SvtMultiPortraitEntity__TypeInfo, v25);
    sub_1B640C8(&SvtMultiPortraitEntity_TypeInfo, v26);
    sub_1B640C8(&Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_0__, v27);
    sub_1B640C8(&Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_1__, v28);
    sub_1B640C8(&Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_2__, v29);
    sub_1B640C8(&SvtMultiPortraitMaster___c__DisplayClass1_0_TypeInfo, v30);
    sub_1B640C8(&Method_SvtMultiPortraitMaster___c__DisplayClass1_1__GetEntityListOrderBy_b__3__, v31);
    sub_1B640C8(&SvtMultiPortraitMaster___c__DisplayClass1_1_TypeInfo, v32);
    sub_1B640C8(&SvtMultiPortraitMaster___c_TypeInfo, v33);
    byte_49FCE1A = 1;
  }
  memset(&v120, 0, sizeof(v120));
  v34 = sub_1B64314(SvtMultiPortraitMaster___c__DisplayClass1_0_TypeInfo, *(_QWORD *)&svtId, *(_QWORD *)&limitCount);
  System_Object___ctor((Il2CppObject *)v34, 0LL);
  if ( !v34 )
    goto LABEL_86;
  *(_DWORD *)(v34 + 16) = overwriteType;
  v38 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_SvtMultiPortraitEntity__TypeInfo,
                                                       v36,
                                                       v37);
  System_Collections_Generic_List_object____ctor(
    v38,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity___ctor__);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    goto LABEL_86;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_30710E0 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
  if ( !Enumerator )
    sub_1B64324(0LL);
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
      p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
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
      v47 = sub_1BB60A8(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
    }
    v48 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v47)(
            Enumerator,
            *(_QWORD *)(v47 + 8));
    v51 = v48;
    if ( v48 )
    {
      methodPtr_low = LOBYTE(SvtMultiPortraitEntity_TypeInfo->vtable._0_Equals.methodPtr);
      if ( *(unsigned __int8 *)(*(_QWORD *)v48 + 304LL) < (unsigned int)methodPtr_low
        || *(SvtMultiPortraitEntity_c **)(*(_QWORD *)(*(_QWORD *)v48 + 200LL) + 8 * methodPtr_low - 8) != SvtMultiPortraitEntity_TypeInfo )
      {
        sub_1B645E4(v48);
LABEL_79:
        sub_1B64324(v91);
      }
      if ( *(_DWORD *)(v48 + 16) == svtId && *(_DWORD *)(v48 + 20) == limitCount )
      {
        if ( !v38 )
          sub_1B64324(v48);
        items = v38->fields._items;
        v54 = Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__;
        ++v38->fields._version;
        if ( !items )
          sub_1B64324(v48);
        size = v38->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v38,
            (Il2CppObject *)v48,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
        }
        else
        {
          v56 = &items->obj.klass + size;
          v38->fields._size = size + 1;
          v56[4] = (Il2CppClass *)v51;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v56 + 4), v51, v49, v50);
        }
      }
    }
  }
  v57 = Enumerator->klass;
  v58 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v59 = &v57->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v59 - 1) != System_IDisposable_TypeInfo )
    {
      --v58;
      v59 += 4;
      if ( !v58 )
        goto LABEL_33;
    }
    v60 = (__int64)&v57->vtable[*v59].method;
  }
  else
  {
LABEL_33:
    v60 = sub_1BB60A8(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v60)(Enumerator, *(_QWORD *)(v60 + 8));
  if ( !System_Linq_Enumerable__Any_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v38,
          (const MethodInfo_2E46A94 *)Method_System_Linq_Enumerable_Any_SvtMultiPortraitEntity___) )
    return 0LL;
  v63 = SvtMultiPortraitMaster___c_TypeInfo;
  if ( !SvtMultiPortraitMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtMultiPortraitMaster___c_TypeInfo);
    v63 = SvtMultiPortraitMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Func_object__bool__o *)v63->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v63->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v63);
      v63 = SvtMultiPortraitMaster___c_TypeInfo;
    }
    v65 = (Il2CppObject *)v63->static_fields->__9;
    _9__1_0 = (System_Func_object__bool__o *)sub_1B64314(System_Func_SvtMultiPortraitEntity__bool__TypeInfo, v61, v62);
    System_Func_object__bool____ctor(
      _9__1_0,
      v65,
      Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_0__,
      0LL);
    static_fields = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_SvtMultiPortraitEntity__bool__o *)_9__1_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v67, v68);
  }
  if ( !System_Linq_Enumerable__All_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v38,
          (System_Func_TSource__bool__o *)_9__1_0,
          (const MethodInfo_2E45664 *)Method_System_Linq_Enumerable_All_SvtMultiPortraitEntity___) )
  {
    v80 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_SvtMultiPortraitEntity__TypeInfo,
                                                         v69,
                                                         v70);
    System_Collections_Generic_List_object____ctor(
      v80,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity___ctor__);
    if ( v38 )
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v119,
        v38,
        (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__GetEnumerator__);
      v120 = v119;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v120,
                (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__MoveNext__) )
      {
        v83 = sub_1B64314(SvtMultiPortraitMaster___c__DisplayClass1_1_TypeInfo, v81, v82);
        System_Object___ctor((Il2CppObject *)v83, 0LL);
        if ( !v83 )
          sub_1B64324(v84);
        *(_QWORD *)(v83 + 24) = v34;
        v87 = v83 + 24;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v83 + 24), v34, v85, v86);
        current = (int32_t)v120.fields._current;
        *(_QWORD *)(v83 + 16) = v120.fields._current;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v83 + 16), current, v89, v90);
        v95 = *(_QWORD *)(v83 + 16);
        if ( !v95 )
          sub_1B64324(v91);
        if ( !*(_QWORD *)v87 )
          goto LABEL_79;
        v96 = *(_DWORD *)(v95 + 28);
        if ( v96 == *(_DWORD *)(*(_QWORD *)v87 + 16LL) )
        {
          if ( !v80 )
            sub_1B64324(v91);
          v97 = v80->fields._items;
          v98 = Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__;
          ++v80->fields._version;
          if ( !v97 )
            sub_1B64324(v91);
          v99 = v80->fields._size;
          if ( (unsigned int)v99 >= v97->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v80,
              (Il2CppObject *)v95,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
          }
          else
          {
            v100 = &v97->obj.klass + v99;
            v80->fields._size = v99 + 1;
            v100[4] = (Il2CppClass *)v95;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v100 + 4), v95, v93, v94);
          }
        }
        else if ( !v96 )
        {
          v101 = (System_Func_object__bool__o *)sub_1B64314(
                                                  System_Func_SvtMultiPortraitEntity__bool__TypeInfo,
                                                  v92,
                                                  v93);
          System_Func_object__bool____ctor(
            v101,
            (Il2CppObject *)v83,
            Method_SvtMultiPortraitMaster___c__DisplayClass1_1__GetEntityListOrderBy_b__3__,
            0LL);
          v102 = BasicHelper__Any_object_(
                   (System_Collections_Generic_List_T__o *)v38,
                   (System_Func_T__bool__o *)v101,
                   (const MethodInfo_2E24870 *)Method_BasicHelper_Any_SvtMultiPortraitEntity___);
          if ( !v102 )
          {
            if ( !v80 )
              sub_1B64324(v102);
            v105 = *(Il2CppObject **)(v83 + 16);
            v106 = v80->fields._items;
            v107 = Method_System_Collections_Generic_List_SvtMultiPortraitEntity__Add__;
            ++v80->fields._version;
            if ( !v106 )
              sub_1B64324(v102);
            v108 = v80->fields._size;
            if ( (unsigned int)v108 >= v106->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v80,
                v105,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
            }
            else
            {
              v109 = &v106->obj.klass + v108;
              v80->fields._size = v108 + 1;
              v109[4] = (Il2CppClass *)v105;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v109 + 4), (int32_t)v105, v103, v104);
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v120,
        (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_SvtMultiPortraitEntity__Dispose__);
      v112 = SvtMultiPortraitMaster___c_TypeInfo;
      if ( !SvtMultiPortraitMaster___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SvtMultiPortraitMaster___c_TypeInfo);
        v112 = SvtMultiPortraitMaster___c_TypeInfo;
      }
      _9__1_2 = (System_Func_object__int__o *)v112->static_fields->__9__1_2;
      if ( !_9__1_2 )
      {
        if ( !v112->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v112);
          v112 = SvtMultiPortraitMaster___c_TypeInfo;
        }
        v114 = (Il2CppObject *)v112->static_fields->__9;
        _9__1_2 = (System_Func_object__int__o *)sub_1B64314(
                                                  System_Func_SvtMultiPortraitEntity__int__TypeInfo,
                                                  v110,
                                                  v111);
        System_Func_object__int____ctor(
          _9__1_2,
          v114,
          Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_2__,
          0LL);
        v115 = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
        v115->__9__1_2 = (struct System_Func_SvtMultiPortraitEntity__int__o *)_9__1_2;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v115->__9__1_2, (int32_t)_9__1_2, v116, v117);
      }
      v77 = (System_Collections_Generic_IEnumerable_TSource__o *)v80;
      v78 = (System_Func_TSource__TKey__o *)_9__1_2;
      goto LABEL_77;
    }
LABEL_86:
    sub_1B64324(list);
  }
  v71 = SvtMultiPortraitMaster___c_TypeInfo;
  if ( !SvtMultiPortraitMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtMultiPortraitMaster___c_TypeInfo);
    v71 = SvtMultiPortraitMaster___c_TypeInfo;
  }
  _9__1_1 = (System_Func_object__int__o *)v71->static_fields->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( !v71->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v71);
      v71 = SvtMultiPortraitMaster___c_TypeInfo;
    }
    v73 = (Il2CppObject *)v71->static_fields->__9;
    _9__1_1 = (System_Func_object__int__o *)sub_1B64314(System_Func_SvtMultiPortraitEntity__int__TypeInfo, v69, v70);
    System_Func_object__int____ctor(_9__1_1, v73, Method_SvtMultiPortraitMaster___c__GetEntityListOrderBy_b__1_1__, 0LL);
    v74 = SvtMultiPortraitMaster___c_TypeInfo->static_fields;
    v74->__9__1_1 = (struct System_Func_SvtMultiPortraitEntity__int__o *)_9__1_1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v74->__9__1_1, (int32_t)_9__1_1, v75, v76);
  }
  v77 = (System_Collections_Generic_IEnumerable_TSource__o *)v38;
  v78 = (System_Func_TSource__TKey__o *)_9__1_1;
LABEL_77:
  v118 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                                v77,
                                                                v78,
                                                                (const MethodInfo_2E630C0 *)Method_System_Linq_Enumerable_OrderBy_SvtMultiPortraitEntity__int___);
  return (System_Collections_Generic_List_SvtMultiPortraitEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                                        v118,
                                                                        (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_SvtMultiPortraitEntity___);
}


void __fastcall SvtMultiPortraitMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FCE1B & 1) == 0 )
  {
    sub_1B640C8(&SvtMultiPortraitMaster___c_TypeInfo, v1);
    byte_49FCE1B = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(SvtMultiPortraitMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  SvtMultiPortraitMaster___c_TypeInfo->static_fields->__9 = (struct SvtMultiPortraitMaster___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)SvtMultiPortraitMaster___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return entity->fields.type == 0;
}


int32_t __fastcall SvtMultiPortraitMaster___c___GetEntityListOrderBy_b__1_1(
        SvtMultiPortraitMaster___c_o *this,
        SvtMultiPortraitEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields.idx;
}


int32_t __fastcall SvtMultiPortraitMaster___c___GetEntityListOrderBy_b__1_2(
        SvtMultiPortraitMaster___c_o *this,
        SvtMultiPortraitEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
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
    sub_1B64324(this);
  }
  return 0;
}