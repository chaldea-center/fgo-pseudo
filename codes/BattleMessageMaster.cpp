void __fastcall BattleMessageMaster___ctor(BattleMessageMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B15E85 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string___ctor__, method, v2);
    byte_4B15E85 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    409,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BattleMessageEntity_array *__fastcall BattleMessageMaster__GetEntities(
        BattleMessageMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x22
  System_Linq_IOrderedEnumerable_TSource__o *v51; // x0
  __int64 v52; // x1
  Il2CppObject *Master_object; // x20
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  System_Collections_Generic_List_object__o *v57; // x19
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  BattleMessageMaster___c_c *v61; // x0
  struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *list; // x21
  System_Func_object__object__o *_9__3_0; // x23
  Il2CppObject *v64; // x24
  struct BattleMessageMaster___c_StaticFields *static_fields; // x0
  int64_t v66; // x2
  int32_t v67; // w3
  System_String_o *v68; // x4
  BattleSetupInfo_o *v69; // x5
  FollowerInfo_o *v70; // x6
  PartyListViewItem_o *v71; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x21
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  System_Func_object__bool__o *v76; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v77; // x0
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  BattleMessageMaster___c_c *v81; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v82; // x21
  System_Func_object__int__o *_9__3_2; // x22
  Il2CppObject *v84; // x23
  struct BattleMessageMaster___c_StaticFields *v85; // x0
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v92; // x0
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x3
  BattleMessageMaster___c_c *v96; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v97; // x21
  System_Func_object__int__o *_9__3_3; // x22
  Il2CppObject *v99; // x23
  struct BattleMessageMaster___c_StaticFields *v100; // x0
  int64_t v101; // x2
  int32_t v102; // w3
  System_String_o *v103; // x4
  BattleSetupInfo_o *v104; // x5
  FollowerInfo_o *v105; // x6
  PartyListViewItem_o *v106; // x7
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v108; // x21
  __int64 v109; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v112; // x1
  __int64 v113; // x21
  int v114; // w27
  __int64 v115; // x8
  __int64 v116; // x9
  int *v117; // x10
  __int64 v118; // x0
  __int64 v119; // x8
  __int64 v120; // x9
  int *v121; // x10
  __int64 v122; // x0
  __int64 IsOpen; // x0
  __int64 v124; // x1
  int64_t v125; // x2
  int32_t v126; // w3
  MethodInfo *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7
  int64_t v131; // x22
  __int64 v132; // x1
  struct System_Object_array *items; // x8
  _QWORD *v134; // x9
  __int64 size; // x10
  Il2CppClass **v136; // x0
  __int64 v137; // x8
  __int64 v138; // x9
  int *v139; // x10
  __int64 v140; // x0

  if ( (byte_4B15E88 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_CommonReleaseMaster___, *(_QWORD *)&id, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderBy_BattleMessageEntity__int___, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_DataEntityBase__BattleMessageEntity___, v10, v11);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ThenByDescending_BattleMessageEntity__int___, v12, v13);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_BattleMessageEntity___, v14, v15);
    sub_1BCA7E0(&System_Func_DataEntityBase__BattleMessageEntity__TypeInfo, v16, v17);
    sub_1BCA7E0(&System_Func_BattleMessageEntity__bool__TypeInfo, v18, v19);
    sub_1BCA7E0(&System_Func_BattleMessageEntity__int__TypeInfo, v20, v21);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v22, v23);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_BattleMessageEntity__TypeInfo, v24, v25);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_BattleMessageEntity__TypeInfo, v26, v27);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleMessageEntity__Add__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleMessageEntity__ToArray__, v32, v33);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_BattleMessageEntity___ctor__, v34, v35);
    sub_1BCA7E0(&System_Collections_Generic_List_BattleMessageEntity__TypeInfo, v36, v37);
    sub_1BCA7E0(&Method_BattleMessageMaster___c__GetEntities_b__3_0__, v38, v39);
    sub_1BCA7E0(&Method_BattleMessageMaster___c__GetEntities_b__3_2__, v40, v41);
    sub_1BCA7E0(&Method_BattleMessageMaster___c__GetEntities_b__3_3__, v42, v43);
    sub_1BCA7E0(&Method_BattleMessageMaster___c__DisplayClass3_0__GetEntities_b__1__, v44, v45);
    sub_1BCA7E0(&BattleMessageMaster___c__DisplayClass3_0_TypeInfo, v46, v47);
    sub_1BCA7E0(&BattleMessageMaster___c_TypeInfo, v48, v49);
    byte_4B15E88 = 1;
  }
  v50 = sub_1BCAA2C(BattleMessageMaster___c__DisplayClass3_0_TypeInfo, *(_QWORD *)&id, method, v3);
  System_Object___ctor((Il2CppObject *)v50, 0LL);
  if ( !v50 )
    goto LABEL_67;
  *(_DWORD *)(v50 + 16) = id;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v52);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v57 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_BattleMessageEntity__TypeInfo,
                                                       v54,
                                                       v55,
                                                       v56);
  System_Collections_Generic_List_object____ctor(
    v57,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_BattleMessageEntity___ctor__);
  v61 = BattleMessageMaster___c_TypeInfo;
  list = this->fields.list;
  if ( !BattleMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageMaster___c_TypeInfo, v58);
    v61 = BattleMessageMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__object__o *)v61->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v61->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v61, v58);
      v61 = BattleMessageMaster___c_TypeInfo;
    }
    v64 = (Il2CppObject *)v61->static_fields->__9;
    _9__3_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                 System_Func_DataEntityBase__BattleMessageEntity__TypeInfo,
                                                 v58,
                                                 v59,
                                                 v60);
    System_Func_object__object____ctor(_9__3_0, v64, Method_BattleMessageMaster___c__GetEntities_b__3_0__, 0LL);
    static_fields = BattleMessageMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_DataEntityBase__BattleMessageEntity__o *)_9__3_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)_9__3_0, v66, v67, v68, v69, v70, v71);
  }
  v72 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_DataEntityBase__BattleMessageEntity___);
  v76 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_BattleMessageEntity__bool__TypeInfo, v73, v74, v75);
  System_Func_object__bool____ctor(
    v76,
    (Il2CppObject *)v50,
    Method_BattleMessageMaster___c__DisplayClass3_0__GetEntities_b__1__,
    0LL);
  v77 = System_Linq_Enumerable__Where_object_(
          v72,
          (System_Func_TSource__bool__o *)v76,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_BattleMessageEntity___);
  v81 = BattleMessageMaster___c_TypeInfo;
  v82 = v77;
  if ( !BattleMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageMaster___c_TypeInfo, v78);
    v81 = BattleMessageMaster___c_TypeInfo;
  }
  _9__3_2 = (System_Func_object__int__o *)v81->static_fields->__9__3_2;
  if ( !_9__3_2 )
  {
    if ( !v81->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v81, v78);
      v81 = BattleMessageMaster___c_TypeInfo;
    }
    v84 = (Il2CppObject *)v81->static_fields->__9;
    _9__3_2 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_BattleMessageEntity__int__TypeInfo, v78, v79, v80);
    System_Func_object__int____ctor(_9__3_2, v84, Method_BattleMessageMaster___c__GetEntities_b__3_2__, 0LL);
    v85 = BattleMessageMaster___c_TypeInfo->static_fields;
    v85->__9__3_2 = (struct System_Func_BattleMessageEntity__int__o *)_9__3_2;
    sub_1BCA784((PartyOrganizationUtility_o *)&v85->__9__3_2, (int64_t)_9__3_2, v86, v87, v88, v89, v90, v91);
  }
  v92 = System_Linq_Enumerable__OrderBy_object__int_(
          v82,
          (System_Func_TSource__TKey__o *)_9__3_2,
          (const MethodInfo_2F3B394 *)Method_System_Linq_Enumerable_OrderBy_BattleMessageEntity__int___);
  v96 = BattleMessageMaster___c_TypeInfo;
  v97 = v92;
  if ( !BattleMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageMaster___c_TypeInfo, v93);
    v96 = BattleMessageMaster___c_TypeInfo;
  }
  _9__3_3 = (System_Func_object__int__o *)v96->static_fields->__9__3_3;
  if ( !_9__3_3 )
  {
    if ( !v96->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v96, v93);
      v96 = BattleMessageMaster___c_TypeInfo;
    }
    v99 = (Il2CppObject *)v96->static_fields->__9;
    _9__3_3 = (System_Func_object__int__o *)sub_1BCAA2C(System_Func_BattleMessageEntity__int__TypeInfo, v93, v94, v95);
    System_Func_object__int____ctor(_9__3_3, v99, Method_BattleMessageMaster___c__GetEntities_b__3_3__, 0LL);
    v100 = BattleMessageMaster___c_TypeInfo->static_fields;
    v100->__9__3_3 = (struct System_Func_BattleMessageEntity__int__o *)_9__3_3;
    sub_1BCA784((PartyOrganizationUtility_o *)&v100->__9__3_3, (int64_t)_9__3_3, v101, v102, v103, v104, v105, v106);
  }
  v51 = System_Linq_Enumerable__ThenByDescending_object__int_(
          v97,
          (System_Func_TSource__TKey__o *)_9__3_3,
          (const MethodInfo_2F4B298 *)Method_System_Linq_Enumerable_ThenByDescending_BattleMessageEntity__int___);
  if ( !v51 )
    goto LABEL_67;
  klass = v51->klass;
  v108 = v51;
  v109 = *(unsigned __int16 *)(&v51->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v51->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleMessageEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleMessageEntity__TypeInfo )
    {
      --v109;
      p_offset += 4;
      if ( !v109 )
        goto LABEL_29;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_29:
    p_method = sub_1C1C7C0(v51, System_Collections_Generic_IEnumerable_BattleMessageEntity__TypeInfo, 0LL);
  }
  v113 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
           v108,
           *(_QWORD *)(p_method + 8));
  if ( !v113 )
    sub_1BCAA3C(0LL, v112);
  v114 = -1;
  while ( 1 )
  {
    v115 = *(_QWORD *)v113;
    v116 = *(unsigned __int16 *)(*(_QWORD *)v113 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v113 + 302LL) )
    {
      v117 = (int *)(*(_QWORD *)(v115 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v117 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v116;
        v117 += 4;
        if ( !v116 )
          goto LABEL_37;
      }
      v118 = v115 + 16LL * *v117 + 312;
    }
    else
    {
LABEL_37:
      v118 = sub_1C1C7C0(v113, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v118)(v113, *(_QWORD *)(v118 + 8)) & 1) == 0 )
      break;
    v119 = *(_QWORD *)v113;
    v120 = *(unsigned __int16 *)(*(_QWORD *)v113 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v113 + 302LL) )
    {
      v121 = (int *)(*(_QWORD *)(v119 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleMessageEntity__c **)v121 - 1) != System_Collections_Generic_IEnumerator_BattleMessageEntity__TypeInfo )
      {
        --v120;
        v121 += 4;
        if ( !v120 )
          goto LABEL_44;
      }
      v122 = v119 + 16LL * *v121 + 312;
    }
    else
    {
LABEL_44:
      v122 = sub_1C1C7C0(v113, System_Collections_Generic_IEnumerator_BattleMessageEntity__TypeInfo, 0LL);
    }
    IsOpen = (*(__int64 (__fastcall **)(__int64, _QWORD))v122)(v113, *(_QWORD *)(v122 + 8));
    v131 = IsOpen;
    if ( !IsOpen )
      sub_1BCAA3C(0LL, v124);
    if ( v114 != *(_DWORD *)(IsOpen + 20) )
    {
      v132 = *(unsigned int *)(IsOpen + 28);
      if ( (int)v132 < 1 )
        goto LABEL_51;
      if ( !Master_object )
        sub_1BCAA3C(IsOpen, v132);
      IsOpen = CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Master_object, v132, 0LL, 0, v127);
      if ( (IsOpen & 1) != 0 )
      {
LABEL_51:
        if ( !v57 )
          sub_1BCAA3C(IsOpen, v132);
        items = v57->fields._items;
        v134 = Method_System_Collections_Generic_List_BattleMessageEntity__Add__;
        ++v57->fields._version;
        if ( !items )
          sub_1BCAA3C(IsOpen, v132);
        size = v57->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v57,
            (Il2CppObject *)v131,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v134[4] + 192LL) + 112LL));
        }
        else
        {
          v136 = &items->obj.klass + size;
          v57->fields._size = size + 1;
          v136[4] = (Il2CppClass *)v131;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)(v136 + 4),
            v131,
            v125,
            v126,
            (System_String_o *)v127,
            v128,
            v129,
            v130);
        }
        v114 = *(_DWORD *)(v131 + 20);
      }
    }
  }
  v137 = *(_QWORD *)v113;
  v138 = *(unsigned __int16 *)(*(_QWORD *)v113 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v113 + 302LL) )
  {
    v139 = (int *)(*(_QWORD *)(v137 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v139 - 1) != System_IDisposable_TypeInfo )
    {
      --v138;
      v139 += 4;
      if ( !v138 )
        goto LABEL_61;
    }
    v140 = v137 + 16LL * *v139 + 312;
  }
  else
  {
LABEL_61:
    v140 = sub_1C1C7C0(v113, System_IDisposable_TypeInfo, 0LL);
  }
  v51 = (System_Linq_IOrderedEnumerable_TSource__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v140)(
                                                       v113,
                                                       *(_QWORD *)(v140 + 8));
  if ( !v57 )
LABEL_67:
    sub_1BCAA3C(v51, v52);
  return (BattleMessageEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v57,
                                        (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_BattleMessageEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleMessageEntity_o *__fastcall BattleMessageMaster__GetEntity(
        BattleMessageMaster_o *this,
        int32_t id,
        int32_t idx,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B15E86 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__GetEntity__,
      *(_QWORD *)&id,
      *(_QWORD *)&idx);
    byte_4B15E86 = 1;
  }
  PK = (Il2CppObject *)BattleMessageEntity__CreatePK(id, idx, priority, *(const MethodInfo **)&priority);
  return (BattleMessageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_31B3198 *)Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleMessageMaster__TryGetEntity(
        BattleMessageMaster_o *this,
        BattleMessageEntity_o **entity,
        int32_t id,
        int32_t idx,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B15E87 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__TryGetEntity__,
      entity,
      *(_QWORD *)&id);
    byte_4B15E87 = 1;
  }
  PK = (Il2CppObject *)BattleMessageEntity__CreatePK(id, idx, priority, *(const MethodInfo **)&idx);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_31B31E8 *)Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__TryGetEntity__);
}


void __fastcall BattleMessageMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B15E89 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleMessageMaster___c_TypeInfo, v1, v2);
    byte_4B15E89 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(BattleMessageMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  BattleMessageMaster___c_TypeInfo->static_fields->__9 = (struct BattleMessageMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)BattleMessageMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall BattleMessageMaster___c___ctor(BattleMessageMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleMessageEntity_o *__fastcall BattleMessageMaster___c___GetEntities_b__3_0(
        BattleMessageMaster___c_o *this,
        DataEntityBase_o *ent,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x10

  if ( (byte_4B15E8A & 1) == 0 )
  {
    sub_1BCA7E0(&BattleMessageEntity_TypeInfo, ent, method);
    byte_4B15E8A = 1;
  }
  if ( !ent )
    return 0LL;
  methodPtr_low = LOBYTE(BattleMessageEntity_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(ent->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
    return 0LL;
  if ( (BattleMessageEntity_c *)ent->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleMessageEntity_TypeInfo )
    return (BattleMessageEntity_o *)ent;
  return 0LL;
}


int32_t __fastcall BattleMessageMaster___c___GetEntities_b__3_2(
        BattleMessageMaster___c_o *this,
        BattleMessageEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1BCAA3C(this, 0LL);
  return ent->fields.idx;
}


int32_t __fastcall BattleMessageMaster___c___GetEntities_b__3_3(
        BattleMessageMaster___c_o *this,
        BattleMessageEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1BCAA3C(this, 0LL);
  return ent->fields.priority;
}


void __fastcall BattleMessageMaster___c__DisplayClass3_0___ctor(
        BattleMessageMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleMessageMaster___c__DisplayClass3_0___GetEntities_b__1(
        BattleMessageMaster___c__DisplayClass3_0_o *this,
        BattleMessageEntity_o *ent,
        const MethodInfo *method)
{
  return ent && ent->fields.id == this->fields.id;
}