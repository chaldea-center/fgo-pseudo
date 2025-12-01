void AssistMaster___ctor(AssistMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC6FBA & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_AssistMaster__AssistEntity__string___ctor__);
    byte_4CC6FBA = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    362,
    (const MethodInfo_340B614 *)Method_DataMasterBase_AssistMaster__AssistEntity__string___ctor__);
}


System_Collections_Generic_List_AssistEntity__o *AssistMaster__FilterOverBoost(
        AssistMaster_o *this,
        System_Collections_Generic_List_AssistEntity__o *resultList,
        const MethodInfo *method)
{
  AssistMaster___c_c *v4; // x0
  System_Func_object__int__o *_9__15_0; // x20
  Il2CppObject *v6; // x21
  struct AssistMaster___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v14; // x20
  System_Collections_Generic_List_object__o *v15; // x19
  __int64 v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x20
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  __int64 v32; // x0
  AssistMaster___c_c *v33; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x21
  System_Func_object__bool__o *_9__15_1; // x22
  Il2CppObject *v36; // x23
  struct AssistMaster___c_StaticFields *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  bool v44; // w0
  AssistMaster___c_c *v45; // x8
  uint32_t cctor_finished; // w9
  System_Func_object__bool__o *_9__15_2; // x22
  Il2CppObject *v48; // x23
  struct AssistMaster___c_StaticFields *v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  System_Collections_Generic_IEnumerable_T__o *v57; // x1
  System_Func_object__bool__o *_9__15_3; // x22
  Il2CppObject *v59; // x23
  struct AssistMaster___c_StaticFields *v60; // x0
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v67; // x0
  __int64 v68; // x8
  __int64 v69; // x9
  int *v70; // x10
  __int64 v71; // x0

  if ( (byte_4CC6FB7 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_Any_AssistEntity___);
    sub_1C713B0(&Method_System_Linq_Enumerable_GroupBy_AssistEntity__int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_AssistEntity___);
    sub_1C713B0(&System_Func_AssistEntity__bool__TypeInfo);
    sub_1C713B0(&System_Func_AssistEntity__int__TypeInfo);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerable_IGrouping_int__AssistEntity___TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_IGrouping_int__AssistEntity___TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_AssistEntity__AddRange__);
    sub_1C713B0(&Method_System_Collections_Generic_List_AssistEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_AssistEntity__TypeInfo);
    sub_1C713B0(&Method_AssistMaster___c__FilterOverBoost_b__15_0__);
    sub_1C713B0(&Method_AssistMaster___c__FilterOverBoost_b__15_1__);
    sub_1C713B0(&Method_AssistMaster___c__FilterOverBoost_b__15_2__);
    sub_1C713B0(&Method_AssistMaster___c__FilterOverBoost_b__15_3__);
    sub_1C713B0(&AssistMaster___c_TypeInfo);
    byte_4CC6FB7 = 1;
  }
  v4 = AssistMaster___c_TypeInfo;
  if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v4 = AssistMaster___c_TypeInfo;
  }
  _9__15_0 = (System_Func_object__int__o *)v4->static_fields->__9__15_0;
  if ( !_9__15_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = AssistMaster___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__15_0 = (System_Func_object__int__o *)sub_1C715FC(System_Func_AssistEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__15_0, v6, Method_AssistMaster___c__FilterOverBoost_b__15_0__, 0);
    static_fields = AssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__15_0 = (struct System_Func_AssistEntity__int__o *)_9__15_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__15_0, (int32_t)_9__15_0, v8, v9, v10, v11, v12, v13);
  }
  v14 = System_Linq_Enumerable__GroupBy_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)resultList,
          (System_Func_TSource__TKey__o *)_9__15_0,
          (const MethodInfo_31755C0 *)Method_System_Linq_Enumerable_GroupBy_AssistEntity__int___);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_AssistEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_AssistEntity___ctor__);
  if ( !v14 )
    sub_1C71608(v16, v17);
  klass = v14->klass;
  v19 = *(unsigned __int16 *)&v14->klass->_2.rank;
  if ( *(_WORD *)&v14->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IGrouping_int__AssistEntity___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IGrouping_int__AssistEntity___TypeInfo )
    {
      --v19;
      p_offset += 4;
      if ( !v19 )
        goto LABEL_14;
    }
    v21 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_14:
    v21 = sub_1C47738(v14, System_Collections_Generic_IEnumerable_IGrouping_int__AssistEntity___TypeInfo, 0);
  }
  v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *, _QWORD))v21)(
          v14,
          *(_QWORD *)(v21 + 8));
  if ( !v23 )
    sub_1C71608(0, v22);
  while ( 1 )
  {
    v24 = *(_QWORD *)v23;
    v25 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
    {
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v26 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_21;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_21:
      v27 = sub_1C47738(v23, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8)) & 1) == 0 )
      break;
    v28 = *(_QWORD *)v23;
    v29 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
    {
      v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IGrouping_int__AssistEntity___c **)v30 - 1) != System_Collections_Generic_IEnumerator_IGrouping_int__AssistEntity___TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_28;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_28:
      v31 = sub_1C47738(v23, System_Collections_Generic_IEnumerator_IGrouping_int__AssistEntity___TypeInfo, 0);
    }
    v32 = (*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v23, *(_QWORD *)(v31 + 8));
    v33 = AssistMaster___c_TypeInfo;
    v34 = (System_Collections_Generic_IEnumerable_TSource__o *)v32;
    if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
      v33 = AssistMaster___c_TypeInfo;
    }
    _9__15_1 = (System_Func_object__bool__o *)v33->static_fields->__9__15_1;
    if ( !_9__15_1 )
    {
      if ( !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33);
        v33 = AssistMaster___c_TypeInfo;
      }
      v36 = (Il2CppObject *)v33->static_fields->__9;
      _9__15_1 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_AssistEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__15_1, v36, Method_AssistMaster___c__FilterOverBoost_b__15_1__, 0);
      v37 = AssistMaster___c_TypeInfo->static_fields;
      v37->__9__15_1 = (struct System_Func_AssistEntity__bool__o *)_9__15_1;
      sub_1C71354((GrandQuestFolderBoardItem_o *)&v37->__9__15_1, (int32_t)_9__15_1, v38, v39, v40, v41, v42, v43);
    }
    v44 = System_Linq_Enumerable__Any_object__51743576(
            v34,
            (System_Func_TSource__bool__o *)_9__15_1,
            (const MethodInfo_3158B58 *)Method_System_Linq_Enumerable_Any_AssistEntity___);
    v45 = AssistMaster___c_TypeInfo;
    cctor_finished = AssistMaster___c_TypeInfo->_2.cctor_finished;
    if ( v44 )
    {
      if ( !cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
        v45 = AssistMaster___c_TypeInfo;
      }
      _9__15_2 = (System_Func_object__bool__o *)v45->static_fields->__9__15_2;
      if ( !_9__15_2 )
      {
        if ( !v45->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v45);
          v45 = AssistMaster___c_TypeInfo;
        }
        v48 = (Il2CppObject *)v45->static_fields->__9;
        _9__15_2 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_AssistEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__15_2, v48, Method_AssistMaster___c__FilterOverBoost_b__15_2__, 0);
        v49 = AssistMaster___c_TypeInfo->static_fields;
        v49->__9__15_2 = (struct System_Func_AssistEntity__bool__o *)_9__15_2;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&v49->__9__15_2, (int32_t)_9__15_2, v50, v51, v52, v53, v54, v55);
      }
      v56 = System_Linq_Enumerable__Where_object_(
              v34,
              (System_Func_TSource__bool__o *)_9__15_2,
              (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_AssistEntity___);
      v57 = (System_Collections_Generic_IEnumerable_T__o *)v56;
      if ( !v15 )
        sub_1C71608(v56, v56);
    }
    else
    {
      if ( !cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
        v45 = AssistMaster___c_TypeInfo;
      }
      _9__15_3 = (System_Func_object__bool__o *)v45->static_fields->__9__15_3;
      if ( !_9__15_3 )
      {
        if ( !v45->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v45);
          v45 = AssistMaster___c_TypeInfo;
        }
        v59 = (Il2CppObject *)v45->static_fields->__9;
        _9__15_3 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_AssistEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__15_3, v59, Method_AssistMaster___c__FilterOverBoost_b__15_3__, 0);
        v60 = AssistMaster___c_TypeInfo->static_fields;
        v60->__9__15_3 = (struct System_Func_AssistEntity__bool__o *)_9__15_3;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&v60->__9__15_3, (int32_t)_9__15_3, v61, v62, v63, v64, v65, v66);
      }
      v67 = System_Linq_Enumerable__Where_object_(
              v34,
              (System_Func_TSource__bool__o *)_9__15_3,
              (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_AssistEntity___);
      v57 = (System_Collections_Generic_IEnumerable_T__o *)v67;
      if ( !v15 )
        sub_1C71608(v67, v67);
    }
    System_Collections_Generic_List_object___AddRange(
      v15,
      v57,
      (const MethodInfo_3810924 *)Method_System_Collections_Generic_List_AssistEntity__AddRange__);
  }
  v68 = *(_QWORD *)v23;
  v69 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
  {
    v70 = (int *)(*(_QWORD *)(v68 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v70 - 1) != System_IDisposable_TypeInfo )
    {
      --v69;
      v70 += 4;
      if ( !v69 )
        goto LABEL_57;
    }
    v71 = v68 + 16LL * *v70 + 312;
  }
  else
  {
LABEL_57:
    v71 = sub_1C47738(v23, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v71)(v23, *(_QWORD *)(v71 + 8));
  return (System_Collections_Generic_List_AssistEntity__o *)v15;
}


AssistEntity_o *AssistMaster__GetAssistEntity(
        AssistMaster_o *this,
        int32_t assistId,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x19
  System_Func_object__bool__o *v12; // x20

  if ( (byte_4CC6FAF & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____78679080);
    sub_1C713B0(&System_Func_AssistEntity__bool__TypeInfo);
    sub_1C713B0(&Method_AssistMaster___c__DisplayClass5_0__GetAssistEntity_b__0__);
    sub_1C713B0(&AssistMaster___c__DisplayClass5_0_TypeInfo);
    byte_4CC6FAF = 1;
  }
  v7 = sub_1C715FC(AssistMaster___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C71608(v8, v9);
  *(_DWORD *)(v7 + 16) = lv;
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, v10);
  v12 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_AssistEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v7,
    Method_AssistMaster___c__DisplayClass5_0__GetAssistEntity_b__0__,
    0);
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__51858576(
                             (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId,
                             (System_Func_TSource__bool__o *)v12,
                             (const MethodInfo_3174C90 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____78679080);
}


System_Collections_Generic_List_AssistEntity__o *AssistMaster__GetAssistEntityListByShopGroupId(
        AssistMaster_o *this,
        int32_t shopGroupId,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  ShopGroupEntity_array *TargetEntityList; // x19
  Il2CppObject *v7; // x21
  System_Collections_Generic_List_object__o *v8; // x20
  int max_length; // w8
  unsigned int v10; // w23
  ShopGroupEntity_o *v11; // x8
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppObject *v21; // x1
  Il2CppClass **v22; // x0
  Il2CppObject *v23; // x21
  System_Collections_Generic_List_object__o *v24; // x19
  __int64 v25; // x1
  __int64 TargetId; // x0
  const MethodInfo *v27; // x2
  System_Collections_Generic_IEnumerable_T__o *EntityListFromAssistId; // x0
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CC6FB8 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_AssistMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_ShopGroupMaster___);
    sub_1C713B0(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ShopEntity__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ShopEntity__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_ShopEntity__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_AssistEntity__AddRange__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ShopEntity__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_AssistEntity___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_List_AssistEntity__TypeInfo);
    byte_4CC6FB8 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ShopGroupMaster___);
  if ( !Master_object )
    goto LABEL_28;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)Master_object, shopGroupId, 0);
  v7 = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_ShopMaster___);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  if ( !TargetEntityList )
    goto LABEL_28;
  max_length = TargetEntityList->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
        sub_1C71610(Master_object);
      v11 = TargetEntityList->m_Items[v10];
      if ( !v11 )
        break;
      if ( !v7 )
        break;
      Master_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)v7,
                        v11->fields.shopId,
                        (const MethodInfo_3408E80 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
      if ( !v8 )
        break;
      items = v8->fields._items;
      v19 = Method_System_Collections_Generic_List_ShopEntity__Add__;
      ++v8->fields._version;
      if ( !items )
        break;
      size = v8->fields._size;
      v21 = Master_object;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          Master_object,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v8->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v21;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v22 + 4), (int32_t)v21, v12, v13, v14, v15, v16, v17);
      }
      max_length = TargetEntityList->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_18;
    }
LABEL_28:
    sub_1C71608(Master_object, v5);
  }
LABEL_18:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v23 = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_AssistMaster___);
  v24 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_AssistEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_AssistEntity___ctor__);
  if ( !v8 )
    goto LABEL_28;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    v8,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_ShopEntity__GetEnumerator__);
  v31 = v30;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_ShopEntity__MoveNext__) )
  {
    if ( !v31.fields._current )
      sub_1C71608(0, v25);
    TargetId = ShopEntity__get_TargetId((ShopEntity_o *)v31.fields._current, 0);
    if ( !v23 )
      sub_1C71608(TargetId, (unsigned int)TargetId);
    EntityListFromAssistId = (System_Collections_Generic_IEnumerable_T__o *)AssistMaster__GetEntityListFromAssistId(
                                                                              (AssistMaster_o *)v23,
                                                                              TargetId,
                                                                              v27);
    if ( !v24 )
      sub_1C71608(EntityListFromAssistId, EntityListFromAssistId);
    System_Collections_Generic_List_object___AddRange(
      v24,
      EntityListFromAssistId,
      (const MethodInfo_3810924 *)Method_System_Collections_Generic_List_AssistEntity__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_ShopEntity__Dispose__);
  return (System_Collections_Generic_List_AssistEntity__o *)v24;
}


System_Collections_Generic_List_AssistEntity__o *AssistMaster__GetAvailableEntityList(
        AssistMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  AssistMaster___c_c *v4; // x0
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x21
  System_Converter_TInput__TOutput__o *_9__9_0; // x22
  Il2CppObject *v7; // x23
  struct AssistMaster___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Collections_Generic_List_TOutput__o *v15; // x21
  Il2CppObject *v16; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x21
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x21
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x2
  Il2CppObject *CurrentLevelEntity; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  Il2CppObject *v44; // x1
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  __int64 v49; // x8
  __int64 v50; // x9
  int *v51; // x10
  __int64 v52; // x0

  if ( (byte_4CC6FB2 & 1) == 0 )
  {
    sub_1C713B0(&AssistMaster_AssistIdComparer_TypeInfo);
    sub_1C713B0(&System_Converter_AssistEntity__AssistEntity__TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_Distinct_AssistEntity___);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_AssistEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_AssistEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_AssistEntity__TypeInfo);
    sub_1C713B0(&Method_ObservableCollectionExtensions_ConvertAll_AssistEntity__AssistEntity___);
    sub_1C713B0(&Method_AssistMaster___c__GetAvailableEntityList_b__9_0__);
    sub_1C713B0(&AssistMaster___c_TypeInfo);
    byte_4CC6FB2 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_AssistEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_AssistEntity___ctor__);
  v4 = AssistMaster___c_TypeInfo;
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v4 = AssistMaster___c_TypeInfo;
  }
  _9__9_0 = (System_Converter_TInput__TOutput__o *)v4->static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = AssistMaster___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__9_0 = (System_Converter_TInput__TOutput__o *)sub_1C715FC(System_Converter_AssistEntity__AssistEntity__TypeInfo);
    System_Converter_object__object____ctor(_9__9_0, v7, Method_AssistMaster___c__GetAvailableEntityList_b__9_0__, 0);
    static_fields = AssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Converter_AssistEntity__AssistEntity__o *)_9__9_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__9_0, (int32_t)_9__9_0, v9, v10, v11, v12, v13, v14);
  }
  v15 = ObservableCollectionExtensions__ConvertAll_object__object_(
          list,
          (System_Converter_T__TOutput__o *)_9__9_0,
          (const MethodInfo_31D8754 *)Method_ObservableCollectionExtensions_ConvertAll_AssistEntity__AssistEntity___);
  v16 = (Il2CppObject *)sub_1C715FC(AssistMaster_AssistIdComparer_TypeInfo);
  System_Object___ctor(v16, 0);
  v17 = System_Linq_Enumerable__Distinct_object__51832228(
          (System_Collections_Generic_IEnumerable_TSource__o *)v15,
          (System_Collections_Generic_IEqualityComparer_TSource__o *)v16,
          (const MethodInfo_316E5A4 *)Method_System_Linq_Enumerable_Distinct_AssistEntity___);
  if ( !v17 )
    sub_1C71608(0, v18);
  klass = v17->klass;
  v20 = v17;
  v21 = *(unsigned __int16 *)&v17->klass->_2.rank;
  if ( *(_WORD *)&v17->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_AssistEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo )
    {
      --v21;
      p_offset += 4;
      if ( !v21 )
        goto LABEL_14;
    }
    v23 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_14:
    v23 = sub_1C47738(v17, System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo, 0);
  }
  v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v23)(
          v20,
          *(_QWORD *)(v23 + 8));
  if ( !v25 )
    sub_1C71608(0, v24);
  while ( 1 )
  {
    v26 = *(_QWORD *)v25;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v28 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_21;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_21:
      v29 = sub_1C47738(v25, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v25, *(_QWORD *)(v29 + 8)) & 1) == 0 )
      break;
    v30 = *(_QWORD *)v25;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_AssistEntity__c **)v32 - 1) != System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_28;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_28:
      v33 = sub_1C47738(v25, System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo, 0);
    }
    v34 = (*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v25, *(_QWORD *)(v33 + 8));
    if ( !v34 )
      sub_1C71608(0, v35);
    CurrentLevelEntity = (Il2CppObject *)AssistMaster__GetCurrentLevelEntity(this, *(_DWORD *)(v34 + 16), v36);
    v44 = CurrentLevelEntity;
    if ( CurrentLevelEntity )
    {
      if ( !v3 )
        sub_1C71608(CurrentLevelEntity, CurrentLevelEntity);
      items = v3->fields._items;
      v46 = Method_System_Collections_Generic_List_AssistEntity__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C71608(CurrentLevelEntity, CurrentLevelEntity);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          CurrentLevelEntity,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
      }
      else
      {
        v48 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v48[4] = (Il2CppClass *)v44;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v48 + 4), (int32_t)v44, v38, v39, v40, v41, v42, v43);
      }
    }
  }
  v49 = *(_QWORD *)v25;
  v50 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
  {
    v51 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
    {
      --v50;
      v51 += 4;
      if ( !v50 )
        goto LABEL_41;
    }
    v52 = v49 + 16LL * *v51 + 312;
  }
  else
  {
LABEL_41:
    v52 = sub_1C47738(v25, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v52)(v25, *(_QWORD *)(v52 + 8));
  return (System_Collections_Generic_List_AssistEntity__o *)v3;
}


AssistEntity_o *AssistMaster__GetCurrentEntity(AssistMaster_o *this, int32_t assistId, const MethodInfo *method)
{
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x0
  AssistMaster___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  System_Func_object__int__o *_9__3_0; // x20
  Il2CppObject *v9; // x21
  struct AssistMaster___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v17; // x0
  AssistMaster___c_c *v18; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x19
  System_Func_object__bool__o *_9__3_1; // x20
  Il2CppObject *v21; // x21
  struct AssistMaster___c_StaticFields *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7

  if ( (byte_4CC6FAD & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____78679080);
    sub_1C713B0(&Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
    sub_1C713B0(&System_Func_AssistEntity__bool__TypeInfo);
    sub_1C713B0(&System_Func_AssistEntity__int__TypeInfo);
    sub_1C713B0(&Method_AssistMaster___c__GetCurrentEntity_b__3_0__);
    sub_1C713B0(&Method_AssistMaster___c__GetCurrentEntity_b__3_1__);
    sub_1C713B0(&AssistMaster___c_TypeInfo);
    byte_4CC6FAD = 1;
  }
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, method);
  v6 = AssistMaster___c_TypeInfo;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId;
  if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v6 = AssistMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__int__o *)v6->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = AssistMaster___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__3_0 = (System_Func_object__int__o *)sub_1C715FC(System_Func_AssistEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_0, v9, Method_AssistMaster___c__GetCurrentEntity_b__3_0__, 0);
    static_fields = AssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_AssistEntity__int__o *)_9__3_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v11, v12, v13, v14, v15, v16);
  }
  v17 = System_Linq_Enumerable__OrderByDescending_object__int_(
          v7,
          (System_Func_TSource__TKey__o *)_9__3_0,
          (const MethodInfo_317AEBC *)Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
  v18 = AssistMaster___c_TypeInfo;
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)v17;
  if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v18 = AssistMaster___c_TypeInfo;
  }
  _9__3_1 = (System_Func_object__bool__o *)v18->static_fields->__9__3_1;
  if ( !_9__3_1 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = AssistMaster___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v18->static_fields->__9;
    _9__3_1 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_AssistEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__3_1, v21, Method_AssistMaster___c__GetCurrentEntity_b__3_1__, 0);
    v22 = AssistMaster___c_TypeInfo->static_fields;
    v22->__9__3_1 = (struct System_Func_AssistEntity__bool__o *)_9__3_1;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v22->__9__3_1, (int32_t)_9__3_1, v23, v24, v25, v26, v27, v28);
  }
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__51858576(
                             v19,
                             (System_Func_TSource__bool__o *)_9__3_1,
                             (const MethodInfo_3174C90 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____78679080);
}


AssistEntity_o *AssistMaster__GetCurrentLevelAndPriorityEntity(
        AssistMaster_o *this,
        int32_t assistId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x0
  AssistMaster___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  System_Func_object__int__o *_9__2_0; // x20
  Il2CppObject *v9; // x21
  struct AssistMaster___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v17; // x0
  AssistMaster___c_c *v18; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v19; // x19
  System_Func_object__int__o *_9__2_1; // x20
  Il2CppObject *v21; // x21
  struct AssistMaster___c_StaticFields *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v29; // x0
  AssistMaster___c_c *v30; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x19
  System_Func_object__bool__o *_9__2_2; // x20
  Il2CppObject *v33; // x21
  struct AssistMaster___c_StaticFields *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7

  if ( (byte_4CC6FAC & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____78679080);
    sub_1C713B0(&Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ThenByDescending_AssistEntity__int___);
    sub_1C713B0(&System_Func_AssistEntity__bool__TypeInfo);
    sub_1C713B0(&System_Func_AssistEntity__int__TypeInfo);
    sub_1C713B0(&Method_AssistMaster___c__GetCurrentLevelAndPriorityEntity_b__2_0__);
    sub_1C713B0(&Method_AssistMaster___c__GetCurrentLevelAndPriorityEntity_b__2_1__);
    sub_1C713B0(&Method_AssistMaster___c__GetCurrentLevelAndPriorityEntity_b__2_2__);
    sub_1C713B0(&AssistMaster___c_TypeInfo);
    byte_4CC6FAC = 1;
  }
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, method);
  v6 = AssistMaster___c_TypeInfo;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId;
  if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v6 = AssistMaster___c_TypeInfo;
  }
  _9__2_0 = (System_Func_object__int__o *)v6->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = AssistMaster___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__2_0 = (System_Func_object__int__o *)sub_1C715FC(System_Func_AssistEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__2_0, v9, Method_AssistMaster___c__GetCurrentLevelAndPriorityEntity_b__2_0__, 0);
    static_fields = AssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_AssistEntity__int__o *)_9__2_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v11, v12, v13, v14, v15, v16);
  }
  v17 = System_Linq_Enumerable__OrderByDescending_object__int_(
          v7,
          (System_Func_TSource__TKey__o *)_9__2_0,
          (const MethodInfo_317AEBC *)Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
  v18 = AssistMaster___c_TypeInfo;
  v19 = v17;
  if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v18 = AssistMaster___c_TypeInfo;
  }
  _9__2_1 = (System_Func_object__int__o *)v18->static_fields->__9__2_1;
  if ( !_9__2_1 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = AssistMaster___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v18->static_fields->__9;
    _9__2_1 = (System_Func_object__int__o *)sub_1C715FC(System_Func_AssistEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__2_1, v21, Method_AssistMaster___c__GetCurrentLevelAndPriorityEntity_b__2_1__, 0);
    v22 = AssistMaster___c_TypeInfo->static_fields;
    v22->__9__2_1 = (struct System_Func_AssistEntity__int__o *)_9__2_1;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v22->__9__2_1, (int32_t)_9__2_1, v23, v24, v25, v26, v27, v28);
  }
  v29 = System_Linq_Enumerable__ThenByDescending_object__int_(
          v19,
          (System_Func_TSource__TKey__o *)_9__2_1,
          (const MethodInfo_318A87C *)Method_System_Linq_Enumerable_ThenByDescending_AssistEntity__int___);
  v30 = AssistMaster___c_TypeInfo;
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)v29;
  if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v30 = AssistMaster___c_TypeInfo;
  }
  _9__2_2 = (System_Func_object__bool__o *)v30->static_fields->__9__2_2;
  if ( !_9__2_2 )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v30 = AssistMaster___c_TypeInfo;
    }
    v33 = (Il2CppObject *)v30->static_fields->__9;
    _9__2_2 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_AssistEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__2_2,
      v33,
      Method_AssistMaster___c__GetCurrentLevelAndPriorityEntity_b__2_2__,
      0);
    v34 = AssistMaster___c_TypeInfo->static_fields;
    v34->__9__2_2 = (struct System_Func_AssistEntity__bool__o *)_9__2_2;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v34->__9__2_2, (int32_t)_9__2_2, v35, v36, v37, v38, v39, v40);
  }
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__51858576(
                             v31,
                             (System_Func_TSource__bool__o *)_9__2_2,
                             (const MethodInfo_3174C90 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____78679080);
}


System_Collections_Generic_List_AssistEntity__o *AssistMaster__GetCurrentLevelAndPriorityEntityList(
        AssistMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  AssistMaster___c_c *v4; // x0
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x21
  System_Converter_TInput__TOutput__o *_9__10_0; // x22
  Il2CppObject *v7; // x23
  struct AssistMaster___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Collections_Generic_List_TOutput__o *v15; // x21
  Il2CppObject *v16; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x21
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x21
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x2
  Il2CppObject *CurrentLevelAndPriorityEntity; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  Il2CppObject *v44; // x1
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  __int64 v49; // x8
  __int64 v50; // x9
  int *v51; // x10
  __int64 v52; // x0

  if ( (byte_4CC6FB3 & 1) == 0 )
  {
    sub_1C713B0(&AssistMaster_AssistIdComparer_TypeInfo);
    sub_1C713B0(&System_Converter_AssistEntity__AssistEntity__TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_Distinct_AssistEntity___);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_AssistEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_AssistEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_AssistEntity__TypeInfo);
    sub_1C713B0(&Method_ObservableCollectionExtensions_ConvertAll_AssistEntity__AssistEntity___);
    sub_1C713B0(&Method_AssistMaster___c__GetCurrentLevelAndPriorityEntityList_b__10_0__);
    sub_1C713B0(&AssistMaster___c_TypeInfo);
    byte_4CC6FB3 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_AssistEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_AssistEntity___ctor__);
  v4 = AssistMaster___c_TypeInfo;
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v4 = AssistMaster___c_TypeInfo;
  }
  _9__10_0 = (System_Converter_TInput__TOutput__o *)v4->static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = AssistMaster___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__10_0 = (System_Converter_TInput__TOutput__o *)sub_1C715FC(System_Converter_AssistEntity__AssistEntity__TypeInfo);
    System_Converter_object__object____ctor(
      _9__10_0,
      v7,
      Method_AssistMaster___c__GetCurrentLevelAndPriorityEntityList_b__10_0__,
      0);
    static_fields = AssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Converter_AssistEntity__AssistEntity__o *)_9__10_0;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__10_0,
      (int32_t)_9__10_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = ObservableCollectionExtensions__ConvertAll_object__object_(
          list,
          (System_Converter_T__TOutput__o *)_9__10_0,
          (const MethodInfo_31D8754 *)Method_ObservableCollectionExtensions_ConvertAll_AssistEntity__AssistEntity___);
  v16 = (Il2CppObject *)sub_1C715FC(AssistMaster_AssistIdComparer_TypeInfo);
  System_Object___ctor(v16, 0);
  v17 = System_Linq_Enumerable__Distinct_object__51832228(
          (System_Collections_Generic_IEnumerable_TSource__o *)v15,
          (System_Collections_Generic_IEqualityComparer_TSource__o *)v16,
          (const MethodInfo_316E5A4 *)Method_System_Linq_Enumerable_Distinct_AssistEntity___);
  if ( !v17 )
    sub_1C71608(0, v18);
  klass = v17->klass;
  v20 = v17;
  v21 = *(unsigned __int16 *)&v17->klass->_2.rank;
  if ( *(_WORD *)&v17->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_AssistEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo )
    {
      --v21;
      p_offset += 4;
      if ( !v21 )
        goto LABEL_14;
    }
    v23 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_14:
    v23 = sub_1C47738(v17, System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo, 0);
  }
  v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v23)(
          v20,
          *(_QWORD *)(v23 + 8));
  if ( !v25 )
    sub_1C71608(0, v24);
  while ( 1 )
  {
    v26 = *(_QWORD *)v25;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v28 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_21;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_21:
      v29 = sub_1C47738(v25, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v25, *(_QWORD *)(v29 + 8)) & 1) == 0 )
      break;
    v30 = *(_QWORD *)v25;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_AssistEntity__c **)v32 - 1) != System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_28;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_28:
      v33 = sub_1C47738(v25, System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo, 0);
    }
    v34 = (*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v25, *(_QWORD *)(v33 + 8));
    if ( !v34 )
      sub_1C71608(0, v35);
    CurrentLevelAndPriorityEntity = (Il2CppObject *)AssistMaster__GetCurrentLevelAndPriorityEntity(
                                                      this,
                                                      *(_DWORD *)(v34 + 16),
                                                      v36);
    v44 = CurrentLevelAndPriorityEntity;
    if ( CurrentLevelAndPriorityEntity )
    {
      if ( !v3 )
        sub_1C71608(CurrentLevelAndPriorityEntity, CurrentLevelAndPriorityEntity);
      items = v3->fields._items;
      v46 = Method_System_Collections_Generic_List_AssistEntity__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C71608(CurrentLevelAndPriorityEntity, CurrentLevelAndPriorityEntity);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          CurrentLevelAndPriorityEntity,
          *(const MethodInfo_3810718 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
      }
      else
      {
        v48 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v48[4] = (Il2CppClass *)v44;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v48 + 4), (int32_t)v44, v38, v39, v40, v41, v42, v43);
      }
    }
  }
  v49 = *(_QWORD *)v25;
  v50 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
  {
    v51 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
    {
      --v50;
      v51 += 4;
      if ( !v50 )
        goto LABEL_41;
    }
    v52 = v49 + 16LL * *v51 + 312;
  }
  else
  {
LABEL_41:
    v52 = sub_1C47738(v25, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v52)(v25, *(_QWORD *)(v52 + 8));
  return (System_Collections_Generic_List_AssistEntity__o *)v3;
}


AssistEntity_o *AssistMaster__GetCurrentLevelEntity(AssistMaster_o *this, int32_t assistId, const MethodInfo *method)
{
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x0
  AssistMaster___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  System_Func_object__int__o *_9__1_0; // x20
  Il2CppObject *v9; // x21
  struct AssistMaster___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v17; // x0
  AssistMaster___c_c *v18; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x19
  System_Func_object__bool__o *_9__1_1; // x20
  Il2CppObject *v21; // x21
  struct AssistMaster___c_StaticFields *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7

  if ( (byte_4CC6FAB & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____78679080);
    sub_1C713B0(&Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
    sub_1C713B0(&System_Func_AssistEntity__bool__TypeInfo);
    sub_1C713B0(&System_Func_AssistEntity__int__TypeInfo);
    sub_1C713B0(&Method_AssistMaster___c__GetCurrentLevelEntity_b__1_0__);
    sub_1C713B0(&Method_AssistMaster___c__GetCurrentLevelEntity_b__1_1__);
    sub_1C713B0(&AssistMaster___c_TypeInfo);
    byte_4CC6FAB = 1;
  }
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, method);
  v6 = AssistMaster___c_TypeInfo;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId;
  if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v6 = AssistMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Func_object__int__o *)v6->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = AssistMaster___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__1_0 = (System_Func_object__int__o *)sub_1C715FC(System_Func_AssistEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__1_0, v9, Method_AssistMaster___c__GetCurrentLevelEntity_b__1_0__, 0);
    static_fields = AssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_AssistEntity__int__o *)_9__1_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v11, v12, v13, v14, v15, v16);
  }
  v17 = System_Linq_Enumerable__OrderByDescending_object__int_(
          v7,
          (System_Func_TSource__TKey__o *)_9__1_0,
          (const MethodInfo_317AEBC *)Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
  v18 = AssistMaster___c_TypeInfo;
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)v17;
  if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v18 = AssistMaster___c_TypeInfo;
  }
  _9__1_1 = (System_Func_object__bool__o *)v18->static_fields->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = AssistMaster___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v18->static_fields->__9;
    _9__1_1 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_AssistEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__1_1, v21, Method_AssistMaster___c__GetCurrentLevelEntity_b__1_1__, 0);
    v22 = AssistMaster___c_TypeInfo->static_fields;
    v22->__9__1_1 = (struct System_Func_AssistEntity__bool__o *)_9__1_1;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v22->__9__1_1, (int32_t)_9__1_1, v23, v24, v25, v26, v27, v28);
  }
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__51858576(
                             v19,
                             (System_Func_TSource__bool__o *)_9__1_1,
                             (const MethodInfo_3174C90 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____78679080);
}


// local variable allocation has failed, the output may be wrong!
AssistEntity_o *AssistMaster__GetEntity(AssistMaster_o *this, int32_t id, int32_t priority, const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CC6FBB & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_AssistMaster__AssistEntity__string__GetEntity__);
    byte_4CC6FBB = 1;
  }
  PK = (Il2CppObject *)AssistEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (AssistEntity_o *)DataMasterBase_object__object__object___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                             PK,
                             (const MethodInfo_340D938 *)Method_DataMasterBase_AssistMaster__AssistEntity__string__GetEntity__);
}


System_Collections_Generic_List_AssistEntity__o *AssistMaster__GetEntityListFromAssistId(
        AssistMaster_o *this,
        int32_t assistId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v9; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_4CC6FAA & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_ToList_AssistEntity___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_AssistEntity___);
    sub_1C713B0(&System_Func_AssistEntity__bool__TypeInfo);
    sub_1C713B0(&Method_AssistMaster___c__DisplayClass0_0__GetEntityListFromAssistId_b__0__);
    sub_1C713B0(&AssistMaster___c__DisplayClass0_0_TypeInfo);
    byte_4CC6FAA = 1;
  }
  v5 = sub_1C715FC(AssistMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C71608(v6, v7);
  *(_DWORD *)(v5 + 16) = assistId;
  list = this->fields.list;
  v9 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_AssistEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_AssistMaster___c__DisplayClass0_0__GetEntityListFromAssistId_b__0__,
    0);
  v10 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_AssistEntity___);
  return (System_Collections_Generic_List_AssistEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                              v10,
                                                              (const MethodInfo_318FC88 *)Method_System_Linq_Enumerable_ToList_AssistEntity___);
}


AssistEntity_o *AssistMaster__GetMaxLevelEntity(AssistMaster_o *this, int32_t assistId, const MethodInfo *method)
{
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x0
  AssistMaster___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  System_Func_object__int__o *_9__6_0; // x20
  Il2CppObject *v9; // x21
  struct AssistMaster___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_4CC6FB0 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___);
    sub_1C713B0(&Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
    sub_1C713B0(&System_Func_AssistEntity__int__TypeInfo);
    sub_1C713B0(&Method_AssistMaster___c__GetMaxLevelEntity_b__6_0__);
    sub_1C713B0(&AssistMaster___c_TypeInfo);
    byte_4CC6FB0 = 1;
  }
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, method);
  v6 = AssistMaster___c_TypeInfo;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId;
  if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v6 = AssistMaster___c_TypeInfo;
  }
  _9__6_0 = (System_Func_object__int__o *)v6->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = AssistMaster___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__6_0 = (System_Func_object__int__o *)sub_1C715FC(System_Func_AssistEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__6_0, v9, Method_AssistMaster___c__GetMaxLevelEntity_b__6_0__, 0);
    static_fields = AssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Func_AssistEntity__int__o *)_9__6_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v11, v12, v13, v14, v15, v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v7,
                                                               (System_Func_TSource__TKey__o *)_9__6_0,
                                                               (const MethodInfo_317AEBC *)Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                             v17,
                             (const MethodInfo_31738EC *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___);
}


AssistEntity_o *AssistMaster__GetMinLevelEntity(AssistMaster_o *this, int32_t assistId, const MethodInfo *method)
{
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x0
  AssistMaster___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  System_Func_object__int__o *_9__7_0; // x20
  Il2CppObject *v9; // x21
  struct AssistMaster___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_4CC6FB1 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___);
    sub_1C713B0(&Method_System_Linq_Enumerable_OrderBy_AssistEntity__int___);
    sub_1C713B0(&System_Func_AssistEntity__int__TypeInfo);
    sub_1C713B0(&Method_AssistMaster___c__GetMinLevelEntity_b__7_0__);
    sub_1C713B0(&AssistMaster___c_TypeInfo);
    byte_4CC6FB1 = 1;
  }
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, method);
  v6 = AssistMaster___c_TypeInfo;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId;
  if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v6 = AssistMaster___c_TypeInfo;
  }
  _9__7_0 = (System_Func_object__int__o *)v6->static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = AssistMaster___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__7_0 = (System_Func_object__int__o *)sub_1C715FC(System_Func_AssistEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__7_0, v9, Method_AssistMaster___c__GetMinLevelEntity_b__7_0__, 0);
    static_fields = AssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Func_AssistEntity__int__o *)_9__7_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v11, v12, v13, v14, v15, v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v7,
                                                               (System_Func_TSource__TKey__o *)_9__7_0,
                                                               (const MethodInfo_317A93C *)Method_System_Linq_Enumerable_OrderBy_AssistEntity__int___);
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                             v17,
                             (const MethodInfo_31738EC *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___);
}


AssistEntity_o *AssistMaster__GetMinPriorityEntity(AssistMaster_o *this, int32_t assistId, const MethodInfo *method)
{
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x0
  AssistMaster___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  System_Func_object__int__o *_9__4_0; // x20
  Il2CppObject *v9; // x21
  struct AssistMaster___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_4CC6FAE & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___);
    sub_1C713B0(&Method_System_Linq_Enumerable_OrderBy_AssistEntity__int___);
    sub_1C713B0(&System_Func_AssistEntity__int__TypeInfo);
    sub_1C713B0(&Method_AssistMaster___c__GetMinPriorityEntity_b__4_0__);
    sub_1C713B0(&AssistMaster___c_TypeInfo);
    byte_4CC6FAE = 1;
  }
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, method);
  v6 = AssistMaster___c_TypeInfo;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId;
  if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v6 = AssistMaster___c_TypeInfo;
  }
  _9__4_0 = (System_Func_object__int__o *)v6->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = AssistMaster___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__4_0 = (System_Func_object__int__o *)sub_1C715FC(System_Func_AssistEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__4_0, v9, Method_AssistMaster___c__GetMinPriorityEntity_b__4_0__, 0);
    static_fields = AssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_AssistEntity__int__o *)_9__4_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v11, v12, v13, v14, v15, v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v7,
                                                               (System_Func_TSource__TKey__o *)_9__4_0,
                                                               (const MethodInfo_317A93C *)Method_System_Linq_Enumerable_OrderBy_AssistEntity__int___);
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                             v17,
                             (const MethodInfo_31738EC *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___);
}


// local variable allocation has failed, the output may be wrong!
AssistEntity_o *AssistMaster__GetNextPartsEntity(
        AssistMaster_o *this,
        int32_t assistId,
        int32_t shopId,
        const MethodInfo *method)
{
  AssistEntity_o *CurrentEntity; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x4
  AssistEntity_o *v10; // x21
  AssistEntity_o *result; // x0
  const MethodInfo *v12; // x2
  int32_t lv; // w22
  AssistEntity_o *MaxLevelEntity; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x3

  CurrentEntity = AssistMaster__GetCurrentEntity(this, assistId, *(const MethodInfo **)&shopId);
  if ( !CurrentEntity )
    return AssistMaster__GetMinLevelEntity(this, assistId, v8);
  v10 = CurrentEntity;
  result = AssistMaster__GetStateUpPartsEntity(this, assistId, CurrentEntity->fields.lv, shopId, v9);
  if ( !result )
  {
    lv = v10->fields.lv;
    MaxLevelEntity = AssistMaster__GetMaxLevelEntity(this, assistId, v12);
    if ( !MaxLevelEntity )
      sub_1C71608(0, v15);
    if ( lv >= MaxLevelEntity->fields.lv )
      return v10;
    else
      return AssistMaster__GetAssistEntity(this, assistId, v10->fields.lv + 1, v16);
  }
  return result;
}


AssistEntity_o *AssistMaster__GetStateUpPartsEntity(
        AssistMaster_o *this,
        int32_t assistId,
        int32_t currentLv,
        int32_t shopId,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x19
  System_Func_object__bool__o *v14; // x20

  if ( (byte_4CC6FB5 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____78679080);
    sub_1C713B0(&System_Func_AssistEntity__bool__TypeInfo);
    sub_1C713B0(&Method_AssistMaster___c__DisplayClass12_0__GetStateUpPartsEntity_b__0__);
    sub_1C713B0(&AssistMaster___c__DisplayClass12_0_TypeInfo);
    byte_4CC6FB5 = 1;
  }
  v9 = sub_1C715FC(AssistMaster___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_1C71608(v10, v11);
  *(_DWORD *)(v9 + 16) = assistId;
  *(_DWORD *)(v9 + 20) = currentLv;
  *(_DWORD *)(v9 + 24) = shopId;
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, v12);
  v14 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_AssistEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_AssistMaster___c__DisplayClass12_0__GetStateUpPartsEntity_b__0__,
    0);
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__51858576(
                             (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId,
                             (System_Func_TSource__bool__o *)v14,
                             (const MethodInfo_3174C90 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____78679080);
}


// local variable allocation has failed, the output may be wrong!
bool AssistMaster__TryGetEntity(
        AssistMaster_o *this,
        AssistEntity_o **entity,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4CC6FBC & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_AssistMaster__AssistEntity__string__TryGetEntity__);
    byte_4CC6FBC = 1;
  }
  PK = (Il2CppObject *)AssistEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_340D984 *)Method_DataMasterBase_AssistMaster__AssistEntity__string__TryGetEntity__);
}


bool AssistMaster__TryGetUnclearedAssistEntity(
        AssistMaster_o *this,
        AssistEntity_o **assistEntity,
        int32_t questId,
        bool isQuestClear,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  Il2CppObject *v15; // x0
  int32_t v16; // w2
  char v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Collections_Generic_List_AssistEntity__o *resultList; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CC6FB9 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___);
    sub_1C713B0(&int___TypeInfo);
    byte_4CC6FB9 = 1;
  }
  resultList = 0;
  *assistEntity = 0;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)assistEntity,
    0,
    questId,
    isQuestClear,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  if ( isQuestClear )
    return 0;
  v12 = sub_1C71458(int___TypeInfo, 1);
  if ( !v12 )
    sub_1C71608(0, v13);
  if ( !*(_DWORD *)(v12 + 24) )
    sub_1C71610(v12);
  *(_DWORD *)(v12 + 32) = questId;
  if ( !AssistMaster__TryGetValidAssistEntityList_42053004(this, &resultList, (System_Int32_array *)v12, v14) )
    return 0;
  v15 = System_Linq_Enumerable__FirstOrDefault_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)resultList,
          (const MethodInfo_31738EC *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___);
  *assistEntity = (AssistEntity_o *)v15;
  sub_1C71354((GrandQuestFolderBoardItem_o *)assistEntity, (int32_t)v15, v16, v17, v18, v19, v20, v21);
  return *assistEntity != 0;
}


bool AssistMaster__TryGetValidAssistEntityList(
        AssistMaster_o *this,
        System_Collections_Generic_List_AssistEntity__o **resultList,
        int32_t questId,
        int32_t questPhase,
        bool isAvailableOnly,
        const MethodInfo *method)
{
  const MethodInfo *v11; // x1
  Il2CppObject *Master_object; // x22
  System_Collections_Generic_List_object__o *CurrentLevelAndPriorityEntityList; // x0
  System_Collections_Generic_List_object__o *v14; // x23
  System_Collections_Generic_List_object__o *v15; // x24
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  __int64 v22; // x0
  __int64 v23; // x1
  _BOOL8 v24; // x0
  __int64 v25; // x1
  Il2CppObject *current; // x23
  __int64 v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  System_Collections_Generic_List_object__o *v34; // x0
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x8
  __int64 v39; // x1
  AssistMaster_o *v40; // x0
  const MethodInfo *v41; // x2
  System_Collections_Generic_List_AssistEntity__o *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4CC6FB4 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToList_AssistEntity___);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_AssistEntity__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_AssistEntity__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_AssistEntity__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_AssistEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_AssistEntity__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_AssistEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_AssistEntity__TypeInfo);
    byte_4CC6FB4 = 1;
  }
  memset(&v51, 0, sizeof(v51));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( isAvailableOnly )
    CurrentLevelAndPriorityEntityList = (System_Collections_Generic_List_object__o *)AssistMaster__GetCurrentLevelAndPriorityEntityList(
                                                                                       this,
                                                                                       v11);
  else
    CurrentLevelAndPriorityEntityList = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                                                       (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
                                                                                       (const MethodInfo_318FC88 *)Method_System_Linq_Enumerable_ToList_AssistEntity___);
  v14 = CurrentLevelAndPriorityEntityList;
  v15 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_AssistEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_AssistEntity___ctor__);
  *resultList = (System_Collections_Generic_List_AssistEntity__o *)v15;
  sub_1C71354((GrandQuestFolderBoardItem_o *)resultList, (int32_t)v15, v16, v17, v18, v19, v20, v21);
  if ( !v14 )
    sub_1C71608(v22, v23);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v50,
    v14,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_AssistEntity__GetEnumerator__);
  v51 = v50;
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v51,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_AssistEntity__MoveNext__);
    if ( !v24 )
      break;
    current = v51.fields._current;
    if ( !v51.fields._current )
      sub_1C71608(v24, v25);
    if ( !Master_object )
      sub_1C71608(v24, v25);
    if ( CommonReleaseMaster__ContainQuestClearPhase(
           (CommonReleaseMaster_o *)Master_object,
           (int32_t)v51.fields._current[3].klass,
           questId,
           questPhase,
           0) )
    {
      v34 = (System_Collections_Generic_List_object__o *)*resultList;
      if ( !*resultList )
        sub_1C71608(0, v27);
      items = v34->fields._items;
      v36 = Method_System_Collections_Generic_List_AssistEntity__Add__;
      ++v34->fields._version;
      if ( !items )
        sub_1C71608(v34, v27);
      size = v34->fields._size;
      if ( (unsigned int)size < LODWORD(items->max_length) )
        goto LABEL_17;
LABEL_23:
      System_Collections_Generic_List_object___AddWithResize(
        v34,
        current,
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
    }
    else if ( CommonReleaseMaster__ContainQuestClear(
                (CommonReleaseMaster_o *)Master_object,
                (int32_t)current[3].klass,
                questId,
                0) )
    {
      v34 = (System_Collections_Generic_List_object__o *)*resultList;
      if ( !*resultList )
        sub_1C71608(0, v39);
      items = v34->fields._items;
      v36 = Method_System_Collections_Generic_List_AssistEntity__Add__;
      ++v34->fields._version;
      if ( !items )
        sub_1C71608(v34, v39);
      size = v34->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
        goto LABEL_23;
LABEL_17:
      v38 = &items->obj.klass + size;
      v34->fields._size = size + 1;
      v38[4] = (Il2CppClass *)current;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v38 + 4), (int32_t)current, v28, v29, v30, v31, v32, v33);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v51,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_AssistEntity__Dispose__);
  v42 = AssistMaster__FilterOverBoost(v40, *resultList, v41);
  *resultList = v42;
  sub_1C71354((GrandQuestFolderBoardItem_o *)resultList, (int32_t)v42, v43, v44, v45, v46, v47, v48);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*resultList, 0);
}


bool AssistMaster__TryGetValidAssistEntityList_42053004(
        AssistMaster_o *this,
        System_Collections_Generic_List_AssistEntity__o **resultList,
        System_Int32_array *questIdList,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x22
  System_Collections_Generic_List_object__o *v8; // x23
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  __int64 v15; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 v22; // x0
  System_Collections_Generic_IEnumerator_T__c *v23; // x8
  __int64 v24; // x9
  int32_t *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x1
  il2cpp_array_size_t max_length; // x8
  __int64 v30; // x23
  unsigned __int64 v31; // x29
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  System_Collections_Generic_List_object__o *v38; // x0
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x8
  System_Collections_Generic_IEnumerator_T__c *v43; // x8
  __int64 v44; // x9
  int32_t *v45; // x10
  __int64 v46; // x0
  AssistMaster_o *v47; // x0
  const MethodInfo *v48; // x2
  System_Collections_Generic_List_AssistEntity__o *v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7

  if ( (byte_4CC6FB6 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_Collection_AssistEntity__GetEnumerator__);
    sub_1C713B0(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_AssistEntity__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_AssistEntity___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_AssistEntity__TypeInfo);
    byte_4CC6FB6 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_AssistEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_AssistEntity___ctor__);
  *resultList = (System_Collections_Generic_List_AssistEntity__o *)v8;
  sub_1C71354((GrandQuestFolderBoardItem_o *)resultList, (int32_t)v8, v9, v10, v11, v12, v13, v14);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C71608(0, v15);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_33A21E0 *)Method_System_Collections_ObjectModel_Collection_AssistEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C71608(0, v17);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v20 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v20;
        p_offset += 4;
        if ( !v20 )
          goto LABEL_11;
      }
      v22 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v22 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
            Enumerator,
            *(_QWORD *)(v22 + 8))
        & 1) == 0 )
      break;
    v23 = Enumerator->klass;
    v24 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v25 = &v23->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_AssistEntity__c **)v25 - 1) != System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_18;
      }
      v26 = (__int64)&v23->vtable[*v25];
    }
    else
    {
LABEL_18:
      v26 = sub_1C47738(Enumerator, System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo, 0);
    }
    v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v26)(
            Enumerator,
            *(_QWORD *)(v26 + 8));
    if ( !questIdList )
      sub_1C71608(v27, v28);
    max_length = questIdList->max_length;
    if ( (int)max_length >= 1 )
    {
      v30 = v27;
      v31 = 0;
      do
      {
        if ( v31 >= (unsigned int)max_length )
          sub_1C71610(v27);
        if ( !v30 )
          sub_1C71608(v27, v28);
        if ( !Master_object )
          sub_1C71608(v27, v28);
        v27 = CommonReleaseMaster__ContainQuestClear(
                (CommonReleaseMaster_o *)Master_object,
                *(_DWORD *)(v30 + 48),
                questIdList->m_Items[v31],
                0);
        if ( (v27 & 1) != 0 )
        {
          v38 = (System_Collections_Generic_List_object__o *)*resultList;
          if ( !*resultList )
            sub_1C71608(0, v28);
          items = v38->fields._items;
          v40 = Method_System_Collections_Generic_List_AssistEntity__Add__;
          ++v38->fields._version;
          if ( !items )
            sub_1C71608(v38, v28);
          size = v38->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v38,
              (Il2CppObject *)v30,
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
          }
          else
          {
            v42 = &items->obj.klass + size;
            v38->fields._size = size + 1;
            v42[4] = (Il2CppClass *)v30;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v42 + 4), v30, v32, v33, v34, v35, v36, v37);
          }
        }
        LODWORD(max_length) = questIdList->max_length;
        ++v31;
      }
      while ( (__int64)v31 < (int)max_length );
    }
  }
  v43 = Enumerator->klass;
  v44 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
  if ( *(_WORD *)&Enumerator->klass->_2.rank )
  {
    v45 = &v43->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
    {
      --v44;
      v45 += 4;
      if ( !v44 )
        goto LABEL_38;
    }
    v46 = (__int64)&v43->vtable[*v45];
  }
  else
  {
LABEL_38:
    v46 = sub_1C47738(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  v47 = (AssistMaster_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v46)(
                            Enumerator,
                            *(_QWORD *)(v46 + 8));
  v49 = AssistMaster__FilterOverBoost(v47, *resultList, v48);
  *resultList = v49;
  sub_1C71354((GrandQuestFolderBoardItem_o *)resultList, (int32_t)v49, v50, v51, v52, v53, v54, v55);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*resultList, 0);
}


void AssistMaster_AssistIdComparer___ctor(AssistMaster_AssistIdComparer_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool AssistMaster_AssistIdComparer__Equals(
        AssistMaster_AssistIdComparer_o *this,
        AssistEntity_o *x,
        AssistEntity_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_1C71608(this, x);
  return x->fields.id == y->fields.id;
}


int32_t AssistMaster_AssistIdComparer__GetHashCode(
        AssistMaster_AssistIdComparer_o *this,
        AssistEntity_o *obj,
        const MethodInfo *method)
{
  if ( !obj )
    sub_1C71608(this, 0);
  return System_Int32__GetHashCode((_DWORD)obj + 16, 0);
}


void AssistMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC6FBD & 1) == 0 )
  {
    sub_1C713B0(&AssistMaster___c_TypeInfo);
    byte_4CC6FBD = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(AssistMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AssistMaster___c_TypeInfo->static_fields->__9 = (struct AssistMaster___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)AssistMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void AssistMaster___c___ctor(AssistMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t AssistMaster___c___FilterOverBoost_b__15_0(
        AssistMaster___c_o *this,
        AssistEntity_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1C71608(this, 0);
  return item->fields.id;
}


bool AssistMaster___c___FilterOverBoost_b__15_1(
        AssistMaster___c_o *this,
        AssistEntity_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  if ( !item )
    sub_1C71608(this, 0);
  return AssistEntity__GetOverBoostQuestId(item, (const MethodInfo *)item) >= 1
      && AssistEntity__IsClearOverBoostQuest(item, v4);
}


bool AssistMaster___c___FilterOverBoost_b__15_2(
        AssistMaster___c_o *this,
        AssistEntity_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1C71608(this, 0);
  return AssistEntity__GetOverBoostQuestId(item, (const MethodInfo *)item) > 0;
}


bool AssistMaster___c___FilterOverBoost_b__15_3(
        AssistMaster___c_o *this,
        AssistEntity_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1C71608(this, 0);
  return AssistEntity__GetOverBoostQuestId(item, (const MethodInfo *)item) < 1;
}


AssistEntity_o *AssistMaster___c___GetAvailableEntityList_b__9_0(
        AssistMaster___c_o *this,
        AssistEntity_o *e,
        const MethodInfo *method)
{
  return e;
}


int32_t AssistMaster___c___GetCurrentEntity_b__3_0(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C71608(this, 0);
  return ent->fields.priority;
}


bool AssistMaster___c___GetCurrentEntity_b__3_1(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C71608(this, 0);
  return AssistEntity__IsOpen(ent, (const MethodInfo *)ent);
}


AssistEntity_o *AssistMaster___c___GetCurrentLevelAndPriorityEntityList_b__10_0(
        AssistMaster___c_o *this,
        AssistEntity_o *e,
        const MethodInfo *method)
{
  return e;
}


int32_t AssistMaster___c___GetCurrentLevelAndPriorityEntity_b__2_0(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C71608(this, 0);
  return ent->fields.lv;
}


int32_t AssistMaster___c___GetCurrentLevelAndPriorityEntity_b__2_1(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C71608(this, 0);
  return ent->fields.priority;
}


bool AssistMaster___c___GetCurrentLevelAndPriorityEntity_b__2_2(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C71608(this, 0);
  return AssistEntity__IsOpen(ent, (const MethodInfo *)ent);
}


int32_t AssistMaster___c___GetCurrentLevelEntity_b__1_0(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C71608(this, 0);
  return ent->fields.lv;
}


bool AssistMaster___c___GetCurrentLevelEntity_b__1_1(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C71608(this, 0);
  return AssistEntity__IsOpen(ent, (const MethodInfo *)ent);
}


int32_t AssistMaster___c___GetMaxLevelEntity_b__6_0(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C71608(this, 0);
  return ent->fields.lv;
}


int32_t AssistMaster___c___GetMinLevelEntity_b__7_0(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C71608(this, 0);
  return ent->fields.lv;
}


int32_t AssistMaster___c___GetMinPriorityEntity_b__4_0(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C71608(this, 0);
  return ent->fields.priority;
}


void AssistMaster___c__DisplayClass0_0___ctor(AssistMaster___c__DisplayClass0_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool AssistMaster___c__DisplayClass0_0___GetEntityListFromAssistId_b__0(
        AssistMaster___c__DisplayClass0_0_o *this,
        AssistEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C71608(this, 0);
  return entity->fields.id == this->fields.assistId;
}


void AssistMaster___c__DisplayClass12_0___ctor(AssistMaster___c__DisplayClass12_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool AssistMaster___c__DisplayClass12_0___GetStateUpPartsEntity_b__0(
        AssistMaster___c__DisplayClass12_0_o *this,
        AssistEntity_o *entity,
        const MethodInfo *method)
{
  AssistMaster___c__DisplayClass12_0_o *v4; // x19
  CommonReleaseEntity_array *List; // x0
  System_Func_object__bool__o *_9__1; // x22
  System_Object_array *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  v4 = this;
  if ( (byte_4CC6FBE & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_Any_CommonReleaseEntity___);
    sub_1C713B0(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&System_Func_CommonReleaseEntity__bool__TypeInfo);
    this = (AssistMaster___c__DisplayClass12_0_o *)sub_1C713B0(&Method_AssistMaster___c__DisplayClass12_0__GetStateUpPartsEntity_b__1__);
    byte_4CC6FBE = 1;
  }
  if ( !entity )
    goto LABEL_13;
  if ( entity->fields.id != v4->fields.assistId || entity->fields.lv != v4->fields.currentLv )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (AssistMaster___c__DisplayClass12_0_o *)DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this )
LABEL_13:
    sub_1C71608(this, entity);
  List = CommonReleaseMaster__getList((CommonReleaseMaster_o *)this, entity->fields.commonReleaseId, 0);
  _9__1 = (System_Func_object__bool__o *)v4->fields.__9__1;
  v7 = (System_Object_array *)List;
  if ( !_9__1 )
  {
    _9__1 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_CommonReleaseEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_AssistMaster___c__DisplayClass12_0__GetStateUpPartsEntity_b__1__,
      0);
    v4->fields.__9__1 = (struct System_Func_CommonReleaseEntity__bool__o *)_9__1;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v8, v9, v10, v11, v12, v13);
  }
  return BasicHelper__Any_object__51593856(
           v7,
           (System_Func_T__bool__o *)_9__1,
           (const MethodInfo_3134280 *)Method_BasicHelper_Any_CommonReleaseEntity___);
}


bool AssistMaster___c__DisplayClass12_0___GetStateUpPartsEntity_b__1(
        AssistMaster___c__DisplayClass12_0_o *this,
        CommonReleaseEntity_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_1C71608(this, 0);
  return CommonReleaseEntity__IsMatch(y, 35, this->fields.shopId, 1, 0);
}


void AssistMaster___c__DisplayClass5_0___ctor(AssistMaster___c__DisplayClass5_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool AssistMaster___c__DisplayClass5_0___GetAssistEntity_b__0(
        AssistMaster___c__DisplayClass5_0_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C71608(this, 0);
  return ent->fields.lv == this->fields.lv;
}