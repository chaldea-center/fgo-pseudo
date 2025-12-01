void BattleMessageMaster___ctor(BattleMessageMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC701D & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string___ctor__);
    byte_4CC701D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    415,
    (const MethodInfo_340B614 *)Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string___ctor__);
}


BattleActionData_DisplayMessageData_array *BattleMessageMaster__GetDisplayMessageArray(
        BattleMessageMaster_o *this,
        int32_t id,
        ParseBattleMessage_o *parser,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x20
  const MethodInfo *v8; // x2
  BattleMessageEntity_array *Entities; // x0
  __int64 v10; // x1
  il2cpp_array_size_t max_length; // x8
  BattleMessageEntity_array *v12; // x21
  BattleActionData_DisplayMessageData_o *v13; // x23
  unsigned __int64 v14; // x25
  BattleMessageEntity_o *v15; // x24
  BattleActionData_DisplayMessageData_o *v16; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0

  if ( (byte_4CC7021 & 1) == 0 )
  {
    sub_1C713B0(&BattleActionData_DisplayMessageData_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_LastOrDefault_BattleActionData_DisplayMessageData___);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_BattleActionData_DisplayMessageData__TypeInfo);
    byte_4CC7021 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_BattleActionData_DisplayMessageData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData___ctor__);
  Entities = BattleMessageMaster__GetEntities(this, id, v8);
  if ( !Entities )
    goto LABEL_17;
  max_length = Entities->max_length;
  v12 = Entities;
  if ( (int)max_length >= 1 )
  {
    v13 = 0;
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)max_length )
        sub_1C71610(Entities);
      v15 = v12->m_Items[v14];
      v16 = (BattleActionData_DisplayMessageData_o *)sub_1C715FC(BattleActionData_DisplayMessageData_TypeInfo);
      BattleActionData_DisplayMessageData___ctor(v16, v15, parser, v13, 0);
      if ( !v7 )
        break;
      items = v7->fields._items;
      v24 = Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData__Add__;
      ++v7->fields._version;
      if ( !items )
        break;
      size = v7->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v7,
          (Il2CppObject *)v16,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v26 = &items->obj.klass + size;
        v7->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v16;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v26 + 4), (int32_t)v16, v17, v18, v19, v20, v21, v22);
      }
      LODWORD(max_length) = v12->max_length;
      ++v14;
      v13 = v16;
      if ( (__int64)v14 >= (int)max_length )
        goto LABEL_13;
    }
LABEL_17:
    sub_1C71608(Entities, v10);
  }
LABEL_13:
  Entities = (BattleMessageEntity_array *)System_Linq_Enumerable__LastOrDefault_object_(
                                            (System_Collections_Generic_IEnumerable_TSource__o *)v7,
                                            (const MethodInfo_3177B44 *)Method_System_Linq_Enumerable_LastOrDefault_BattleActionData_DisplayMessageData___);
  if ( Entities )
    BattleActionData_DisplayMessageData__ResetIntervalTime((BattleActionData_DisplayMessageData_o *)Entities, 0);
  if ( !v7 )
    goto LABEL_17;
  return (BattleActionData_DisplayMessageData_array *)System_Collections_Generic_List_object___ToArray(
                                                        v7,
                                                        (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_BattleActionData_DisplayMessageData__ToArray__);
}


BattleMessageEntity_array *BattleMessageMaster__GetEntities(
        BattleMessageMaster_o *this,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v5; // x22
  System_Linq_IOrderedEnumerable_TSource__o *v6; // x0
  __int64 v7; // x1
  Il2CppObject *Master_object; // x20
  System_Collections_Generic_List_object__o *v9; // x19
  BattleMessageMaster___c_c *v10; // x0
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x21
  System_Func_object__object__o *_9__3_0; // x23
  Il2CppObject *v13; // x24
  struct BattleMessageMaster___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x21
  System_Func_object__bool__o *v22; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  BattleMessageMaster___c_c *v24; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x21
  System_Func_object__int__o *_9__3_2; // x22
  Il2CppObject *v27; // x23
  struct BattleMessageMaster___c_StaticFields *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v35; // x0
  BattleMessageMaster___c_c *v36; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v37; // x21
  System_Func_object__int__o *_9__3_3; // x22
  Il2CppObject *v39; // x23
  struct BattleMessageMaster___c_StaticFields *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v48; // x21
  __int64 v49; // x9
  int32_t *p_offset; // x10
  __int64 v51; // x0
  __int64 v52; // x1
  __int64 v53; // x21
  int v54; // w27
  __int64 v55; // x8
  __int64 v56; // x9
  int *v57; // x10
  __int64 v58; // x0
  __int64 v59; // x8
  __int64 v60; // x9
  int *v61; // x10
  __int64 v62; // x0
  __int64 IsOpen; // x0
  __int64 v64; // x1
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  __int64 v71; // x22
  __int64 v72; // x1
  struct System_Object_array *items; // x8
  _QWORD *v74; // x9
  __int64 size; // x10
  Il2CppClass **v76; // x0
  __int64 v77; // x8
  __int64 v78; // x9
  int *v79; // x10
  __int64 v80; // x0

  if ( (byte_4CC7020 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_OrderBy_BattleMessageEntity__int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Select_BattleMessageEntity__BattleMessageEntity___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ThenByDescending_BattleMessageEntity__int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_BattleMessageEntity___);
    sub_1C713B0(&System_Func_BattleMessageEntity__BattleMessageEntity__TypeInfo);
    sub_1C713B0(&System_Func_BattleMessageEntity__bool__TypeInfo);
    sub_1C713B0(&System_Func_BattleMessageEntity__int__TypeInfo);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerable_BattleMessageEntity__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_BattleMessageEntity__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleMessageEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleMessageEntity__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleMessageEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_BattleMessageEntity__TypeInfo);
    sub_1C713B0(&Method_BattleMessageMaster___c__GetEntities_b__3_0__);
    sub_1C713B0(&Method_BattleMessageMaster___c__GetEntities_b__3_2__);
    sub_1C713B0(&Method_BattleMessageMaster___c__GetEntities_b__3_3__);
    sub_1C713B0(&Method_BattleMessageMaster___c__DisplayClass3_0__GetEntities_b__1__);
    sub_1C713B0(&BattleMessageMaster___c__DisplayClass3_0_TypeInfo);
    sub_1C713B0(&BattleMessageMaster___c_TypeInfo);
    byte_4CC7020 = 1;
  }
  v5 = sub_1C715FC(BattleMessageMaster___c__DisplayClass3_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_67;
  *(_DWORD *)(v5 + 16) = id;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_BattleMessageEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_BattleMessageEntity___ctor__);
  v10 = BattleMessageMaster___c_TypeInfo;
  list = this->fields.list;
  if ( !BattleMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageMaster___c_TypeInfo);
    v10 = BattleMessageMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__object__o *)v10->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = BattleMessageMaster___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__3_0 = (System_Func_object__object__o *)sub_1C715FC(System_Func_BattleMessageEntity__BattleMessageEntity__TypeInfo);
    System_Func_object__object____ctor(_9__3_0, v13, Method_BattleMessageMaster___c__GetEntities_b__3_0__, 0);
    static_fields = BattleMessageMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_BattleMessageEntity__BattleMessageEntity__o *)_9__3_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v15, v16, v17, v18, v19, v20);
  }
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)list,
                                                               (System_Func_TSource__TResult__o *)_9__3_0,
                                                               (const MethodInfo_31818B4 *)Method_System_Linq_Enumerable_Select_BattleMessageEntity__BattleMessageEntity___);
  v22 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_BattleMessageEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v22,
    (Il2CppObject *)v5,
    Method_BattleMessageMaster___c__DisplayClass3_0__GetEntities_b__1__,
    0);
  v23 = System_Linq_Enumerable__Where_object_(
          v21,
          (System_Func_TSource__bool__o *)v22,
          (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_BattleMessageEntity___);
  v24 = BattleMessageMaster___c_TypeInfo;
  v25 = v23;
  if ( !BattleMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageMaster___c_TypeInfo);
    v24 = BattleMessageMaster___c_TypeInfo;
  }
  _9__3_2 = (System_Func_object__int__o *)v24->static_fields->__9__3_2;
  if ( !_9__3_2 )
  {
    if ( !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      v24 = BattleMessageMaster___c_TypeInfo;
    }
    v27 = (Il2CppObject *)v24->static_fields->__9;
    _9__3_2 = (System_Func_object__int__o *)sub_1C715FC(System_Func_BattleMessageEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_2, v27, Method_BattleMessageMaster___c__GetEntities_b__3_2__, 0);
    v28 = BattleMessageMaster___c_TypeInfo->static_fields;
    v28->__9__3_2 = (struct System_Func_BattleMessageEntity__int__o *)_9__3_2;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v28->__9__3_2, (int32_t)_9__3_2, v29, v30, v31, v32, v33, v34);
  }
  v35 = System_Linq_Enumerable__OrderBy_object__int_(
          v25,
          (System_Func_TSource__TKey__o *)_9__3_2,
          (const MethodInfo_317A93C *)Method_System_Linq_Enumerable_OrderBy_BattleMessageEntity__int___);
  v36 = BattleMessageMaster___c_TypeInfo;
  v37 = v35;
  if ( !BattleMessageMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMessageMaster___c_TypeInfo);
    v36 = BattleMessageMaster___c_TypeInfo;
  }
  _9__3_3 = (System_Func_object__int__o *)v36->static_fields->__9__3_3;
  if ( !_9__3_3 )
  {
    if ( !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      v36 = BattleMessageMaster___c_TypeInfo;
    }
    v39 = (Il2CppObject *)v36->static_fields->__9;
    _9__3_3 = (System_Func_object__int__o *)sub_1C715FC(System_Func_BattleMessageEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_3, v39, Method_BattleMessageMaster___c__GetEntities_b__3_3__, 0);
    v40 = BattleMessageMaster___c_TypeInfo->static_fields;
    v40->__9__3_3 = (struct System_Func_BattleMessageEntity__int__o *)_9__3_3;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v40->__9__3_3, (int32_t)_9__3_3, v41, v42, v43, v44, v45, v46);
  }
  v6 = System_Linq_Enumerable__ThenByDescending_object__int_(
         v37,
         (System_Func_TSource__TKey__o *)_9__3_3,
         (const MethodInfo_318A87C *)Method_System_Linq_Enumerable_ThenByDescending_BattleMessageEntity__int___);
  if ( !v6 )
    goto LABEL_67;
  klass = v6->klass;
  v48 = v6;
  v49 = *(unsigned __int16 *)&v6->klass->_2.rank;
  if ( *(_WORD *)&v6->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleMessageEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleMessageEntity__TypeInfo )
    {
      --v49;
      p_offset += 4;
      if ( !v49 )
        goto LABEL_29;
    }
    v51 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_29:
    v51 = sub_1C47738(v6, System_Collections_Generic_IEnumerable_BattleMessageEntity__TypeInfo, 0);
  }
  v53 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))v51)(v48, *(_QWORD *)(v51 + 8));
  if ( !v53 )
    sub_1C71608(0, v52);
  v54 = -1;
  while ( 1 )
  {
    v55 = *(_QWORD *)v53;
    v56 = *(unsigned __int16 *)(*(_QWORD *)v53 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v53 + 302LL) )
    {
      v57 = (int *)(*(_QWORD *)(v55 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v57 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v56;
        v57 += 4;
        if ( !v56 )
          goto LABEL_37;
      }
      v58 = v55 + 16LL * *v57 + 312;
    }
    else
    {
LABEL_37:
      v58 = sub_1C47738(v53, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v58)(v53, *(_QWORD *)(v58 + 8)) & 1) == 0 )
      break;
    v59 = *(_QWORD *)v53;
    v60 = *(unsigned __int16 *)(*(_QWORD *)v53 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v53 + 302LL) )
    {
      v61 = (int *)(*(_QWORD *)(v59 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleMessageEntity__c **)v61 - 1) != System_Collections_Generic_IEnumerator_BattleMessageEntity__TypeInfo )
      {
        --v60;
        v61 += 4;
        if ( !v60 )
          goto LABEL_44;
      }
      v62 = v59 + 16LL * *v61 + 312;
    }
    else
    {
LABEL_44:
      v62 = sub_1C47738(v53, System_Collections_Generic_IEnumerator_BattleMessageEntity__TypeInfo, 0);
    }
    IsOpen = (*(__int64 (__fastcall **)(__int64, _QWORD))v62)(v53, *(_QWORD *)(v62 + 8));
    v71 = IsOpen;
    if ( !IsOpen )
      sub_1C71608(0, v64);
    if ( v54 != *(_DWORD *)(IsOpen + 20) )
    {
      v72 = *(unsigned int *)(IsOpen + 28);
      if ( (int)v72 < 1 )
        goto LABEL_51;
      if ( !Master_object )
        sub_1C71608(IsOpen, v72);
      IsOpen = CommonReleaseMaster__IsOpen((CommonReleaseMaster_o *)Master_object, v72, 0, 0, 0);
      if ( (IsOpen & 1) != 0 )
      {
LABEL_51:
        if ( !v9 )
          sub_1C71608(IsOpen, v72);
        items = v9->fields._items;
        v74 = Method_System_Collections_Generic_List_BattleMessageEntity__Add__;
        ++v9->fields._version;
        if ( !items )
          sub_1C71608(IsOpen, v72);
        size = v9->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v9,
            (Il2CppObject *)v71,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
        }
        else
        {
          v76 = &items->obj.klass + size;
          v9->fields._size = size + 1;
          v76[4] = (Il2CppClass *)v71;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v76 + 4), v71, v65, v66, v67, v68, v69, v70);
        }
        v54 = *(_DWORD *)(v71 + 20);
      }
    }
  }
  v77 = *(_QWORD *)v53;
  v78 = *(unsigned __int16 *)(*(_QWORD *)v53 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v53 + 302LL) )
  {
    v79 = (int *)(*(_QWORD *)(v77 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v79 - 1) != System_IDisposable_TypeInfo )
    {
      --v78;
      v79 += 4;
      if ( !v78 )
        goto LABEL_61;
    }
    v80 = v77 + 16LL * *v79 + 312;
  }
  else
  {
LABEL_61:
    v80 = sub_1C47738(v53, System_IDisposable_TypeInfo, 0);
  }
  v6 = (System_Linq_IOrderedEnumerable_TSource__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v80)(
                                                      v53,
                                                      *(_QWORD *)(v80 + 8));
  if ( !v9 )
LABEL_67:
    sub_1C71608(v6, v7);
  return (BattleMessageEntity_array *)System_Collections_Generic_List_object___ToArray(
                                        v9,
                                        (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_BattleMessageEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleMessageEntity_o *BattleMessageMaster__GetEntity(
        BattleMessageMaster_o *this,
        int32_t id,
        int32_t idx,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CC701E & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__GetEntity__);
    byte_4CC701E = 1;
  }
  PK = (Il2CppObject *)BattleMessageEntity__CreatePK(id, idx, priority, *(const MethodInfo **)&priority);
  return (BattleMessageEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                    PK,
                                    (const MethodInfo_340D938 *)Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool BattleMessageMaster__TryGetEntity(
        BattleMessageMaster_o *this,
        BattleMessageEntity_o **entity,
        int32_t id,
        int32_t idx,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CC701F & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__TryGetEntity__);
    byte_4CC701F = 1;
  }
  PK = (Il2CppObject *)BattleMessageEntity__CreatePK(id, idx, priority, *(const MethodInfo **)&idx);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_340D984 *)Method_DataMasterBase_BattleMessageMaster__BattleMessageEntity__string__TryGetEntity__);
}


void BattleMessageMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC7022 & 1) == 0 )
  {
    sub_1C713B0(&BattleMessageMaster___c_TypeInfo);
    byte_4CC7022 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(BattleMessageMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleMessageMaster___c_TypeInfo->static_fields->__9 = (struct BattleMessageMaster___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)BattleMessageMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleMessageMaster___c___ctor(BattleMessageMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


BattleMessageEntity_o *BattleMessageMaster___c___GetEntities_b__3_0(
        BattleMessageMaster___c_o *this,
        BattleMessageEntity_o *ent,
        const MethodInfo *method)
{
  return ent;
}


int32_t BattleMessageMaster___c___GetEntities_b__3_2(
        BattleMessageMaster___c_o *this,
        BattleMessageEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C71608(this, 0);
  return ent->fields.idx;
}


int32_t BattleMessageMaster___c___GetEntities_b__3_3(
        BattleMessageMaster___c_o *this,
        BattleMessageEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C71608(this, 0);
  return ent->fields.priority;
}


void BattleMessageMaster___c__DisplayClass3_0___ctor(
        BattleMessageMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleMessageMaster___c__DisplayClass3_0___GetEntities_b__1(
        BattleMessageMaster___c__DisplayClass3_0_o *this,
        BattleMessageEntity_o *ent,
        const MethodInfo *method)
{
  return ent && ent->fields.id == this->fields.id;
}