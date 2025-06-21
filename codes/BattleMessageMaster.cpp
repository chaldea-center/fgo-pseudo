void __fastcall BattleMessageMaster___ctor(BattleMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B1C17F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string___ctor__, method);
    byte_4B1C17F = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    415,
    (const MethodInfo_32CA594 *)Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string___ctor__);
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
  __int64 v16; // x2
  __int64 v17; // x8
  BattleMessageEntity_array *v18; // x21
  BattleActionData_DisplayMessageData_o *v19; // x23
  unsigned __int64 v20; // x25
  BattleMessageEntity_o *v21; // x24
  BattleActionData_DisplayMessageData_o *v22; // x22
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0

  if ( (byte_4B1C183 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleActionData_DisplayMessageData_TypeInfo, *(_QWORD *)&id);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_LastOrDefault_BattleActionData_DisplayMessageData___, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData__Add__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData__ToArray__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData___ctor__, v10);
    sub_1BCAFF8(&System_Collections_Generic_List_BattleActionData_DisplayMessageData__TypeInfo, v11);
    byte_4B1C183 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_BattleActionData_DisplayMessageData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData___ctor__);
  Entities = BattleMessageMaster__GetEntities(this, id, v13);
  if ( !Entities )
    goto LABEL_17;
  v17 = *(_QWORD *)&Entities->max_length;
  v18 = Entities;
  if ( (int)v17 >= 1 )
  {
    v19 = 0LL;
    v20 = 0LL;
    while ( 1 )
    {
      if ( v20 >= (unsigned int)v17 )
        sub_1BCB25C(Entities, v15, v16);
      v21 = v18->m_Items[v20];
      v22 = (BattleActionData_DisplayMessageData_o *)sub_1BCB244(BattleActionData_DisplayMessageData_TypeInfo);
      BattleActionData_DisplayMessageData___ctor(v22, v21, parser, v19, 0LL);
      if ( !v12 )
        break;
      items = v12->fields._items;
      v26 = Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData__Add__;
      ++v12->fields._version;
      if ( !items )
        break;
      size = v12->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          (Il2CppObject *)v22,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v22;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v22, v23, v24);
      }
      LODWORD(v17) = v18->max_length;
      ++v20;
      v19 = v22;
      if ( (__int64)v20 >= (int)v17 )
        goto LABEL_13;
    }
LABEL_17:
    sub_1BCB254(Entities, v15);
  }
LABEL_13:
  Entities = (BattleMessageEntity_array *)System_Linq_Enumerable__LastOrDefault_object_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)v12,
                                            (const MethodInfo_3043428 *)Method_System_Linq_Enumerable_LastOrDefault_BattleActionData_DisplayMessageData___);
  if ( Entities )
    BattleActionData_DisplayMessageData__ResetIntervalTime((BattleActionData_DisplayMessageData_o *)Entities, 0LL);
  if ( !v12 )
    goto LABEL_17;
  return (BattleActionData_DisplayMessageData_array *)System_Collections_Generic_List_object___ToArray(
                                                        v12,
                                                        (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData__ToArray__);
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
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x21
  System_Func_object__bool__o *v40; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x0
  BattleMessageMaster___c_c *v42; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x21
  System_Func_object__int__o *_9__3_2; // x22
  Il2CppObject *v45; // x23
  struct BattleMessageMaster___c_StaticFields *v46; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v49; // x0
  BattleMessageMaster___c_c *v50; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v51; // x21
  System_Func_object__int__o *_9__3_3; // x22
  Il2CppObject *v53; // x23
  struct BattleMessageMaster___c_StaticFields *v54; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v58; // x21
  __int64 v59; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v62; // x1
  __int64 v63; // x21
  int v64; // w27
  __int64 v65; // x8
  __int64 v66; // x9
  int *v67; // x10
  __int64 v68; // x0
  __int64 v69; // x8
  __int64 v70; // x9
  int *v71; // x10
  __int64 v72; // x0
  __int64 IsOpen; // x0
  __int64 v74; // x1
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  const MethodInfo *v77; // x4
  __int64 v78; // x22
  __int64 v79; // x1
  struct System_Object_array *items; // x8
  _QWORD *v81; // x9
  __int64 size; // x10
  Il2CppClass **v83; // x0
  __int64 v84; // x8
  __int64 v85; // x9
  int *v86; // x10
  __int64 v87; // x0

  if ( (byte_4B1C182 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_CommonReleaseMaster___, *(_QWORD *)&id);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_OrderBy_BattleMessageEntity__int___, v6);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Select_BattleMessageEntity__BattleMessageEntity___, v7);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ThenByDescending_BattleMessageEntity__int___, v8);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_BattleMessageEntity___, v9);
    sub_1BCAFF8(&System_Func_BattleMessageEntity__BattleMessageEntity__TypeInfo, v10);
    sub_1BCAFF8(&System_Func_BattleMessageEntity__bool__TypeInfo, v11);
    sub_1BCAFF8(&System_Func_BattleMessageEntity__int__TypeInfo, v12);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v13);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerable_BattleMessageEntity__TypeInfo, v14);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_BattleMessageEntity__TypeInfo, v15);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v16);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleMessageEntity__Add__, v17);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleMessageEntity__ToArray__, v18);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleMessageEntity___ctor__, v19);
    sub_1BCAFF8(&System_Collections_Generic_List_BattleMessageEntity__TypeInfo, v20);
    sub_1BCAFF8(&Method_BattleMessageMaster___c__GetEntities_b__3_0__, v21);
    sub_1BCAFF8(&Method_BattleMessageMaster___c__GetEntities_b__3_2__, v22);
    sub_1BCAFF8(&Method_BattleMessageMaster___c__GetEntities_b__3_3__, v23);
    sub_1BCAFF8(&Method_BattleMessageMaster___c__DisplayClass3_0__GetEntities_b__1__, v24);
    sub_1BCAFF8(&BattleMessageMaster___c__DisplayClass3_0_TypeInfo, v25);
    sub_1BCAFF8(&BattleMessageMaster___c_TypeInfo, v26);
    byte_4B1C182 = 1;
  }
  v27 = sub_1BCB244(BattleMessageMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v27, 0LL);
  if ( !v27 )
    goto LABEL_67;
  *(_DWORD *)(v27 + 16) = id;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v31 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_BattleMessageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_BattleMessageEntity___ctor__);
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
    _9__3_0 = (System_Func_object__object__o *)sub_1BCB244(System_Func_BattleMessageEntity__BattleMessageEntity__TypeInfo);
    System_Func_object__object____ctor(_9__3_0, v35, Method_BattleMessageMaster___c__GetEntities_b__3_0__, 0LL);
    static_fields = BattleMessageMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_BattleMessageEntity__BattleMessageEntity__o *)_9__3_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v37, v38);
  }
  v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_304EFCC *)Method_System_Linq_Enumerable_Select_BattleMessageEntity__BattleMessageEntity___);
  v40 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_BattleMessageEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v40,
    (Il2CppObject *)v27,
    Method_BattleMessageMaster___c__DisplayClass3_0__GetEntities_b__1__,
    0LL);
  v41 = System_Linq_Enumerable__Where_object_(
          v39,
          (System_Func_TSource__bool__o *)v40,
          (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_BattleMessageEntity___);
  v42 = BattleMessageMaster___c_TypeInfo;
  v43 = v41;
  if ( !BattleMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageMaster___c_TypeInfo);
    v42 = BattleMessageMaster___c_TypeInfo;
  }
  _9__3_2 = (System_Func_object__int__o *)v42->static_fields->__9__3_2;
  if ( !_9__3_2 )
  {
    if ( !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      v42 = BattleMessageMaster___c_TypeInfo;
    }
    v45 = (Il2CppObject *)v42->static_fields->__9;
    _9__3_2 = (System_Func_object__int__o *)sub_1BCB244(System_Func_BattleMessageEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_2, v45, Method_BattleMessageMaster___c__GetEntities_b__3_2__, 0LL);
    v46 = BattleMessageMaster___c_TypeInfo->static_fields;
    v46->__9__3_2 = (struct System_Func_BattleMessageEntity__int__o *)_9__3_2;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v46->__9__3_2, (int32_t)_9__3_2, v47, v48);
  }
  v49 = System_Linq_Enumerable__OrderBy_object__int_(
          v43,
          (System_Func_TSource__TKey__o *)_9__3_2,
          (const MethodInfo_3046148 *)Method_System_Linq_Enumerable_OrderBy_BattleMessageEntity__int___);
  v50 = BattleMessageMaster___c_TypeInfo;
  v51 = v49;
  if ( !BattleMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageMaster___c_TypeInfo);
    v50 = BattleMessageMaster___c_TypeInfo;
  }
  _9__3_3 = (System_Func_object__int__o *)v50->static_fields->__9__3_3;
  if ( !_9__3_3 )
  {
    if ( !v50->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v50);
      v50 = BattleMessageMaster___c_TypeInfo;
    }
    v53 = (Il2CppObject *)v50->static_fields->__9;
    _9__3_3 = (System_Func_object__int__o *)sub_1BCB244(System_Func_BattleMessageEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_3, v53, Method_BattleMessageMaster___c__GetEntities_b__3_3__, 0LL);
    v54 = BattleMessageMaster___c_TypeInfo->static_fields;
    v54->__9__3_3 = (struct System_Func_BattleMessageEntity__int__o *)_9__3_3;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v54->__9__3_3, (int32_t)_9__3_3, v55, v56);
  }
  v28 = System_Linq_Enumerable__ThenByDescending_object__int_(
          v51,
          (System_Func_TSource__TKey__o *)_9__3_3,
          (const MethodInfo_3056B54 *)Method_System_Linq_Enumerable_ThenByDescending_BattleMessageEntity__int___);
  if ( !v28 )
    goto LABEL_67;
  klass = v28->klass;
  v58 = v28;
  v59 = *(unsigned __int16 *)(&v28->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v28->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleMessageEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleMessageEntity__TypeInfo )
    {
      --v59;
      p_offset += 4;
      if ( !v59 )
        goto LABEL_29;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_29:
    p_method = sub_1C1B560(v28, System_Collections_Generic_IEnumerable_BattleMessageEntity__TypeInfo, 0LL);
  }
  v63 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
          v58,
          *(_QWORD *)(p_method + 8));
  if ( !v63 )
    sub_1BCB254(0LL, v62);
  v64 = -1;
  while ( 1 )
  {
    v65 = *(_QWORD *)v63;
    v66 = *(unsigned __int16 *)(*(_QWORD *)v63 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v63 + 302LL) )
    {
      v67 = (int *)(*(_QWORD *)(v65 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v67 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v66;
        v67 += 4;
        if ( !v66 )
          goto LABEL_37;
      }
      v68 = v65 + 16LL * *v67 + 312;
    }
    else
    {
LABEL_37:
      v68 = sub_1C1B560(v63, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v68)(v63, *(_QWORD *)(v68 + 8)) & 1) == 0 )
      break;
    v69 = *(_QWORD *)v63;
    v70 = *(unsigned __int16 *)(*(_QWORD *)v63 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v63 + 302LL) )
    {
      v71 = (int *)(*(_QWORD *)(v69 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleMessageEntity__c **)v71 - 1) != System_Collections_Generic_IEnumerator_BattleMessageEntity__TypeInfo )
      {
        --v70;
        v71 += 4;
        if ( !v70 )
          goto LABEL_44;
      }
      v72 = v69 + 16LL * *v71 + 312;
    }
    else
    {
LABEL_44:
      v72 = sub_1C1B560(v63, System_Collections_Generic_IEnumerator_BattleMessageEntity__TypeInfo, 0LL);
    }
    IsOpen = (*(__int64 (__fastcall **)(__int64, _QWORD))v72)(v63, *(_QWORD *)(v72 + 8));
    v78 = IsOpen;
    if ( !IsOpen )
      sub_1BCB254(0LL, v74);
    if ( v64 != *(_DWORD *)(IsOpen + 20) )
    {
      v79 = *(unsigned int *)(IsOpen + 28);
      if ( (int)v79 < 1 )
        goto LABEL_51;
      if ( !Master_object )
        sub_1BCB254(IsOpen, v79);
      IsOpen = CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Master_object, v79, 0LL, 0, v77);
      if ( (IsOpen & 1) != 0 )
      {
LABEL_51:
        if ( !v31 )
          sub_1BCB254(IsOpen, v79);
        items = v31->fields._items;
        v81 = Method_System_Collections_Generic_List_BattleMessageEntity__Add__;
        ++v31->fields._version;
        if ( !items )
          sub_1BCB254(IsOpen, v79);
        size = v31->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v31,
            (Il2CppObject *)v78,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
        }
        else
        {
          v83 = &items->obj.klass + size;
          v31->fields._size = size + 1;
          v83[4] = (Il2CppClass *)v78;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v83 + 4), v78, v75, v76);
        }
        v64 = *(_DWORD *)(v78 + 20);
      }
    }
  }
  v84 = *(_QWORD *)v63;
  v85 = *(unsigned __int16 *)(*(_QWORD *)v63 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v63 + 302LL) )
  {
    v86 = (int *)(*(_QWORD *)(v84 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v86 - 1) != System_IDisposable_TypeInfo )
    {
      --v85;
      v86 += 4;
      if ( !v85 )
        goto LABEL_61;
    }
    v87 = v84 + 16LL * *v86 + 312;
  }
  else
  {
LABEL_61:
    v87 = sub_1C1B560(v63, System_IDisposable_TypeInfo, 0LL);
  }
  v28 = (System_Linq_IOrderedEnumerable_TSource__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v87)(
                                                       v63,
                                                       *(_QWORD *)(v87 + 8));
  if ( !v31 )
LABEL_67:
    sub_1BCB254(v28, v29);
  return (BattleMessageEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v31,
                                        (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_BattleMessageEntity__ToArray__);
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

  if ( (byte_4B1C180 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4B1C180 = 1;
  }
  PK = (Il2CppObject *)BattleMessageEntity__CreatePK(id, idx, priority, *(const MethodInfo **)&priority);
  return (BattleMessageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_32CC8B8 *)Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__GetEntity__);
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

  if ( (byte_4B1C181 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__TryGetEntity__, entity);
    byte_4B1C181 = 1;
  }
  PK = (Il2CppObject *)BattleMessageEntity__CreatePK(id, idx, priority, *(const MethodInfo **)&idx);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32CC904 *)Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__TryGetEntity__);
}


void __fastcall BattleMessageMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1C184 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleMessageMaster___c_TypeInfo, v1);
    byte_4B1C184 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(BattleMessageMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleMessageMaster___c_TypeInfo->static_fields->__9 = (struct BattleMessageMaster___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)BattleMessageMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BCB254(this, 0LL);
  return ent->fields.idx;
}


int32_t __fastcall BattleMessageMaster___c___GetEntities_b__3_3(
        BattleMessageMaster___c_o *this,
        BattleMessageEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1BCB254(this, 0LL);
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