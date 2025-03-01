void __fastcall BattleMessageMaster___ctor(BattleMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BFD3C9 & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string___ctor__, method);
    byte_4BFD3C9 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    413,
    (const MethodInfo_327D914 *)Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_DisplayMessageData_array *__fastcall BattleMessageMaster__GetDisplayMessageArray(
        BattleMessageMaster_o *this,
        int32_t id,
        ParseBattleMessage_o *parser,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x20
  const MethodInfo *v13; // x2
  BattleMessageEntity_array *Entities; // x0
  __int64 v15; // x1
  __int64 v16; // x8
  BattleMessageEntity_array *v17; // x21
  BattleActionData_DisplayMessageData_o *v18; // x23
  unsigned __int64 v19; // x25
  BattleMessageEntity_o *v20; // x24
  BattleActionData_DisplayMessageData_o *v21; // x22
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0

  if ( (byte_4BFD3CD & 1) == 0 )
  {
    sub_1C2E12C(&BattleActionData_DisplayMessageData_TypeInfo, *(_QWORD *)&id);
    sub_1C2E12C(&Method_System_Linq_Enumerable_LastOrDefault_BattleActionData_DisplayMessageData___, v7);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData__Add__, v8);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData__ToArray__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData___ctor__, v10);
    sub_1C2E12C(&System_Collections_Generic_List_BattleActionData_DisplayMessageData__TypeInfo, v11);
    byte_4BFD3CD = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_BattleActionData_DisplayMessageData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData___ctor__);
  Entities = BattleMessageMaster__GetEntities(this, id, v13);
  if ( !Entities )
    goto LABEL_17;
  v16 = *(_QWORD *)&Entities->max_length;
  v17 = Entities;
  if ( (int)v16 >= 1 )
  {
    v18 = 0LL;
    v19 = 0LL;
    while ( 1 )
    {
      if ( v19 >= (unsigned int)v16 )
        sub_1C2E390(Entities, v15);
      v20 = v17->m_Items[v19];
      v21 = (BattleActionData_DisplayMessageData_o *)sub_1C2E378(BattleActionData_DisplayMessageData_TypeInfo);
      BattleActionData_DisplayMessageData___ctor(v21, v20, parser, v18, 0LL);
      if ( !v12 )
        break;
      items = v12->fields._items;
      v29 = Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData__Add__;
      ++v12->fields._version;
      if ( !items )
        break;
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          (Il2CppObject *)v21,
          *(const MethodInfo_366B8AC **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
      }
      else
      {
        v31 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v31[4] = (Il2CppClass *)v21;
        sub_1C2E0D0((PartyOrganizationUtility_o *)(v31 + 4), (int64_t)v21, v22, v23, v24, v25, v26, v27);
      }
      LODWORD(v16) = v17->max_length;
      ++v19;
      v18 = v21;
      if ( (__int64)v19 >= (int)v16 )
        goto LABEL_13;
    }
LABEL_17:
    sub_1C2E388(Entities, v15);
  }
LABEL_13:
  Entities = (BattleMessageEntity_array *)System_Linq_Enumerable__LastOrDefault_object_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)v12,
                                            (const MethodInfo_2FF8800 *)Method_System_Linq_Enumerable_LastOrDefault_BattleActionData_DisplayMessageData___);
  if ( Entities )
    BattleActionData_DisplayMessageData__ResetIntervalTime((BattleActionData_DisplayMessageData_o *)Entities, 0LL);
  if ( !v12 )
    goto LABEL_17;
  return (BattleActionData_DisplayMessageData_array *)System_Collections_Generic_List_object___ToArray(
                                                        v12,
                                                        (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleMessageEntity_array *__fastcall BattleMessageMaster__GetEntities(
        BattleMessageMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x22
  System_Linq_IOrderedEnumerable_TSource__o *v28; // x0
  __int64 v29; // x1
  Il2CppObject *Master_object; // x20
  System_Collections_Generic_List_object__o *v31; // x19
  BattleMessageMaster___c_c *v32; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x21
  System_Func_object__object__o *_9__3_0; // x23
  Il2CppObject *v35; // x24
  struct BattleMessageMaster___c_StaticFields *static_fields; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x21
  System_Func_object__bool__o *v44; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  BattleMessageMaster___c_c *v46; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x21
  System_Func_object__int__o *_9__3_2; // x22
  Il2CppObject *v49; // x23
  struct BattleMessageMaster___c_StaticFields *v50; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v57; // x0
  BattleMessageMaster___c_c *v58; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v59; // x21
  System_Func_object__int__o *_9__3_3; // x22
  Il2CppObject *v61; // x23
  struct BattleMessageMaster___c_StaticFields *v62; // x0
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v70; // x21
  __int64 v71; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v74; // x1
  __int64 v75; // x21
  int v76; // w27
  __int64 v77; // x8
  __int64 v78; // x9
  int *v79; // x10
  __int64 v80; // x0
  __int64 v81; // x8
  __int64 v82; // x9
  int *v83; // x10
  __int64 v84; // x0
  __int64 IsOpen; // x0
  __int64 v86; // x1
  int64_t v87; // x2
  int32_t v88; // w3
  MethodInfo *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  int64_t v93; // x22
  __int64 v94; // x1
  struct System_Object_array *items; // x8
  _QWORD *v96; // x9
  __int64 size; // x10
  Il2CppClass **v98; // x0
  __int64 v99; // x8
  __int64 v100; // x9
  int *v101; // x10
  __int64 v102; // x0

  if ( (byte_4BFD3CC & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataManager_GetMaster_CommonReleaseMaster___, *(_QWORD *)&id);
    sub_1C2E12C(&DataManager_TypeInfo, v5);
    sub_1C2E12C(&Method_System_Linq_Enumerable_OrderBy_BattleMessageEntity__int___, v6);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Select_BattleMessageEntity__BattleMessageEntity___, v7);
    sub_1C2E12C(&Method_System_Linq_Enumerable_ThenByDescending_BattleMessageEntity__int___, v8);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Where_BattleMessageEntity___, v9);
    sub_1C2E12C(&System_Func_BattleMessageEntity__BattleMessageEntity__TypeInfo, v10);
    sub_1C2E12C(&System_Func_BattleMessageEntity__bool__TypeInfo, v11);
    sub_1C2E12C(&System_Func_BattleMessageEntity__int__TypeInfo, v12);
    sub_1C2E12C(&System_IDisposable_TypeInfo, v13);
    sub_1C2E12C(&System_Collections_Generic_IEnumerable_BattleMessageEntity__TypeInfo, v14);
    sub_1C2E12C(&System_Collections_Generic_IEnumerator_BattleMessageEntity__TypeInfo, v15);
    sub_1C2E12C(&System_Collections_IEnumerator_TypeInfo, v16);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleMessageEntity__Add__, v17);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleMessageEntity__ToArray__, v18);
    sub_1C2E12C(&Method_System_Collections_Generic_List_BattleMessageEntity___ctor__, v19);
    sub_1C2E12C(&System_Collections_Generic_List_BattleMessageEntity__TypeInfo, v20);
    sub_1C2E12C(&Method_BattleMessageMaster___c__GetEntities_b__3_0__, v21);
    sub_1C2E12C(&Method_BattleMessageMaster___c__GetEntities_b__3_2__, v22);
    sub_1C2E12C(&Method_BattleMessageMaster___c__GetEntities_b__3_3__, v23);
    sub_1C2E12C(&Method_BattleMessageMaster___c__DisplayClass3_0__GetEntities_b__1__, v24);
    sub_1C2E12C(&BattleMessageMaster___c__DisplayClass3_0_TypeInfo, v25);
    sub_1C2E12C(&BattleMessageMaster___c_TypeInfo, v26);
    byte_4BFD3CC = 1;
  }
  v27 = sub_1C2E378(BattleMessageMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v27, 0LL);
  if ( !v27 )
    goto LABEL_67;
  *(_DWORD *)(v27 + 16) = id;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FD17DC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v31 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_BattleMessageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_BattleMessageEntity___ctor__);
  v32 = BattleMessageMaster___c_TypeInfo;
  list = this->fields.list;
  if ( !BattleMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageMaster___c_TypeInfo);
    v32 = BattleMessageMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__object__o *)v32->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      v32 = BattleMessageMaster___c_TypeInfo;
    }
    v35 = (Il2CppObject *)v32->static_fields->__9;
    _9__3_0 = (System_Func_object__object__o *)sub_1C2E378(System_Func_BattleMessageEntity__BattleMessageEntity__TypeInfo);
    System_Func_object__object____ctor(_9__3_0, v35, Method_BattleMessageMaster___c__GetEntities_b__3_0__, 0LL);
    static_fields = BattleMessageMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_BattleMessageEntity__BattleMessageEntity__o *)_9__3_0;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)_9__3_0, v37, v38, v39, v40, v41, v42);
  }
  v43 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_3003B90 *)Method_System_Linq_Enumerable_Select_BattleMessageEntity__BattleMessageEntity___);
  v44 = (System_Func_object__bool__o *)sub_1C2E378(System_Func_BattleMessageEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v44,
    (Il2CppObject *)v27,
    Method_BattleMessageMaster___c__DisplayClass3_0__GetEntities_b__1__,
    0LL);
  v45 = System_Linq_Enumerable__Where_object_(
          v43,
          (System_Func_TSource__bool__o *)v44,
          (const MethodInfo_3011CD0 *)Method_System_Linq_Enumerable_Where_BattleMessageEntity___);
  v46 = BattleMessageMaster___c_TypeInfo;
  v47 = v45;
  if ( !BattleMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageMaster___c_TypeInfo);
    v46 = BattleMessageMaster___c_TypeInfo;
  }
  _9__3_2 = (System_Func_object__int__o *)v46->static_fields->__9__3_2;
  if ( !_9__3_2 )
  {
    if ( !v46->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v46);
      v46 = BattleMessageMaster___c_TypeInfo;
    }
    v49 = (Il2CppObject *)v46->static_fields->__9;
    _9__3_2 = (System_Func_object__int__o *)sub_1C2E378(System_Func_BattleMessageEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_2, v49, Method_BattleMessageMaster___c__GetEntities_b__3_2__, 0LL);
    v50 = BattleMessageMaster___c_TypeInfo->static_fields;
    v50->__9__3_2 = (struct System_Func_BattleMessageEntity__int__o *)_9__3_2;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v50->__9__3_2, (int64_t)_9__3_2, v51, v52, v53, v54, v55, v56);
  }
  v57 = System_Linq_Enumerable__OrderBy_object__int_(
          v47,
          (System_Func_TSource__TKey__o *)_9__3_2,
          (const MethodInfo_2FFB4B4 *)Method_System_Linq_Enumerable_OrderBy_BattleMessageEntity__int___);
  v58 = BattleMessageMaster___c_TypeInfo;
  v59 = v57;
  if ( !BattleMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageMaster___c_TypeInfo);
    v58 = BattleMessageMaster___c_TypeInfo;
  }
  _9__3_3 = (System_Func_object__int__o *)v58->static_fields->__9__3_3;
  if ( !_9__3_3 )
  {
    if ( !v58->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v58);
      v58 = BattleMessageMaster___c_TypeInfo;
    }
    v61 = (Il2CppObject *)v58->static_fields->__9;
    _9__3_3 = (System_Func_object__int__o *)sub_1C2E378(System_Func_BattleMessageEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_3, v61, Method_BattleMessageMaster___c__GetEntities_b__3_3__, 0LL);
    v62 = BattleMessageMaster___c_TypeInfo->static_fields;
    v62->__9__3_3 = (struct System_Func_BattleMessageEntity__int__o *)_9__3_3;
    sub_1C2E0D0((PartyOrganizationUtility_o *)&v62->__9__3_3, (int64_t)_9__3_3, v63, v64, v65, v66, v67, v68);
  }
  v28 = System_Linq_Enumerable__ThenByDescending_object__int_(
          v59,
          (System_Func_TSource__TKey__o *)_9__3_3,
          (const MethodInfo_300B64C *)Method_System_Linq_Enumerable_ThenByDescending_BattleMessageEntity__int___);
  if ( !v28 )
    goto LABEL_67;
  klass = v28->klass;
  v70 = v28;
  v71 = *(unsigned __int16 *)(&v28->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v28->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleMessageEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleMessageEntity__TypeInfo )
    {
      --v71;
      p_offset += 4;
      if ( !v71 )
        goto LABEL_29;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_29:
    p_method = sub_1C8010C(v28, System_Collections_Generic_IEnumerable_BattleMessageEntity__TypeInfo, 0LL);
  }
  v75 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
          v70,
          *(_QWORD *)(p_method + 8));
  if ( !v75 )
    sub_1C2E388(0LL, v74);
  v76 = -1;
  while ( 1 )
  {
    v77 = *(_QWORD *)v75;
    v78 = *(unsigned __int16 *)(*(_QWORD *)v75 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v75 + 302LL) )
    {
      v79 = (int *)(*(_QWORD *)(v77 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v79 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v78;
        v79 += 4;
        if ( !v78 )
          goto LABEL_37;
      }
      v80 = v77 + 16LL * *v79 + 312;
    }
    else
    {
LABEL_37:
      v80 = sub_1C8010C(v75, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v80)(v75, *(_QWORD *)(v80 + 8)) & 1) == 0 )
      break;
    v81 = *(_QWORD *)v75;
    v82 = *(unsigned __int16 *)(*(_QWORD *)v75 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v75 + 302LL) )
    {
      v83 = (int *)(*(_QWORD *)(v81 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleMessageEntity__c **)v83 - 1) != System_Collections_Generic_IEnumerator_BattleMessageEntity__TypeInfo )
      {
        --v82;
        v83 += 4;
        if ( !v82 )
          goto LABEL_44;
      }
      v84 = v81 + 16LL * *v83 + 312;
    }
    else
    {
LABEL_44:
      v84 = sub_1C8010C(v75, System_Collections_Generic_IEnumerator_BattleMessageEntity__TypeInfo, 0LL);
    }
    IsOpen = (*(__int64 (__fastcall **)(__int64, _QWORD))v84)(v75, *(_QWORD *)(v84 + 8));
    v93 = IsOpen;
    if ( !IsOpen )
      sub_1C2E388(0LL, v86);
    if ( v76 != *(_DWORD *)(IsOpen + 20) )
    {
      v94 = *(unsigned int *)(IsOpen + 28);
      if ( (int)v94 < 1 )
        goto LABEL_51;
      if ( !Master_object )
        sub_1C2E388(IsOpen, v94);
      IsOpen = CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Master_object, v94, 0LL, 0, v89);
      if ( (IsOpen & 1) != 0 )
      {
LABEL_51:
        if ( !v31 )
          sub_1C2E388(IsOpen, v94);
        items = v31->fields._items;
        v96 = Method_System_Collections_Generic_List_BattleMessageEntity__Add__;
        ++v31->fields._version;
        if ( !items )
          sub_1C2E388(IsOpen, v94);
        size = v31->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v31,
            (Il2CppObject *)v93,
            *(const MethodInfo_366B8AC **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
        }
        else
        {
          v98 = &items->obj.klass + size;
          v31->fields._size = size + 1;
          v98[4] = (Il2CppClass *)v93;
          sub_1C2E0D0((PartyOrganizationUtility_o *)(v98 + 4), v93, v87, v88, (System_String_o *)v89, v90, v91, v92);
        }
        v76 = *(_DWORD *)(v93 + 20);
      }
    }
  }
  v99 = *(_QWORD *)v75;
  v100 = *(unsigned __int16 *)(*(_QWORD *)v75 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v75 + 302LL) )
  {
    v101 = (int *)(*(_QWORD *)(v99 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v101 - 1) != System_IDisposable_TypeInfo )
    {
      --v100;
      v101 += 4;
      if ( !v100 )
        goto LABEL_61;
    }
    v102 = v99 + 16LL * *v101 + 312;
  }
  else
  {
LABEL_61:
    v102 = sub_1C8010C(v75, System_IDisposable_TypeInfo, 0LL);
  }
  v28 = (System_Linq_IOrderedEnumerable_TSource__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v102)(
                                                       v75,
                                                       *(_QWORD *)(v102 + 8));
  if ( !v31 )
LABEL_67:
    sub_1C2E388(v28, v29);
  return (BattleMessageEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v31,
                                        (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_BattleMessageEntity__ToArray__);
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

  if ( (byte_4BFD3CA & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4BFD3CA = 1;
  }
  PK = (Il2CppObject *)BattleMessageEntity__CreatePK(id, idx, priority, *(const MethodInfo **)&priority);
  return (BattleMessageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_327FC38 *)Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__GetEntity__);
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

  if ( (byte_4BFD3CB & 1) == 0 )
  {
    sub_1C2E12C(&Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__TryGetEntity__, entity);
    byte_4BFD3CB = 1;
  }
  PK = (Il2CppObject *)BattleMessageEntity__CreatePK(id, idx, priority, *(const MethodInfo **)&idx);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_327FC84 *)Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__TryGetEntity__);
}


void __fastcall BattleMessageMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BFD3CE & 1) == 0 )
  {
    sub_1C2E12C(&BattleMessageMaster___c_TypeInfo, v1);
    byte_4BFD3CE = 1;
  }
  v2 = (Il2CppObject *)sub_1C2E378(BattleMessageMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleMessageMaster___c_TypeInfo->static_fields->__9 = (struct BattleMessageMaster___c_o *)v2;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)BattleMessageMaster___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall BattleMessageMaster___c___ctor(BattleMessageMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleMessageEntity_o *__fastcall BattleMessageMaster___c___GetEntities_b__3_0(
        BattleMessageMaster___c_o *this,
        BattleMessageEntity_o *ent,
        const MethodInfo *method)
{
  return ent;
}


int32_t __fastcall BattleMessageMaster___c___GetEntities_b__3_2(
        BattleMessageMaster___c_o *this,
        BattleMessageEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C2E388(this, 0LL);
  return ent->fields.idx;
}


int32_t __fastcall BattleMessageMaster___c___GetEntities_b__3_3(
        BattleMessageMaster___c_o *this,
        BattleMessageEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C2E388(this, 0LL);
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