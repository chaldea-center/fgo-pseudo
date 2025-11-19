void AssistMaster___ctor(AssistMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB5E98 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_AssistMaster__AssistEntity__string___ctor__);
    byte_4CB5E98 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    362,
    (const MethodInfo_33FB870 *)Method_DataMasterBase_AssistMaster__AssistEntity__string___ctor__);
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
  const MethodInfo *v9; // x3
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v10; // x20
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x20
  __int64 v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x0
  AssistMaster___c_c *v29; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x21
  System_Func_object__bool__o *_9__15_1; // x22
  Il2CppObject *v32; // x23
  struct AssistMaster___c_StaticFields *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  bool v36; // w0
  AssistMaster___c_c *v37; // x8
  uint32_t cctor_finished; // w9
  System_Func_object__bool__o *_9__15_2; // x22
  Il2CppObject *v40; // x23
  struct AssistMaster___c_StaticFields *v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  System_Collections_Generic_IEnumerable_T__o *v45; // x1
  System_Func_object__bool__o *_9__15_3; // x22
  Il2CppObject *v47; // x23
  struct AssistMaster___c_StaticFields *v48; // x0
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x0
  __int64 v52; // x8
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0

  if ( (byte_4CB5E95 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_Any_AssistEntity___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_GroupBy_AssistEntity__int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_AssistEntity___);
    sub_1C6BA08(&System_Func_AssistEntity__bool__TypeInfo);
    sub_1C6BA08(&System_Func_AssistEntity__int__TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerable_IGrouping_int__AssistEntity___TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_IGrouping_int__AssistEntity___TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssistEntity__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssistEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_AssistEntity__TypeInfo);
    sub_1C6BA08(&Method_AssistMaster___c__FilterOverBoost_b__15_0__);
    sub_1C6BA08(&Method_AssistMaster___c__FilterOverBoost_b__15_1__);
    sub_1C6BA08(&Method_AssistMaster___c__FilterOverBoost_b__15_2__);
    sub_1C6BA08(&Method_AssistMaster___c__FilterOverBoost_b__15_3__);
    sub_1C6BA08(&AssistMaster___c_TypeInfo);
    byte_4CB5E95 = 1;
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
    _9__15_0 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_AssistEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__15_0, v6, Method_AssistMaster___c__FilterOverBoost_b__15_0__, 0);
    static_fields = AssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__15_0 = (struct System_Func_AssistEntity__int__o *)_9__15_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__15_0, (int32_t)_9__15_0, v8, v9);
  }
  v10 = System_Linq_Enumerable__GroupBy_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)resultList,
          (System_Func_TSource__TKey__o *)_9__15_0,
          (const MethodInfo_316581C *)Method_System_Linq_Enumerable_GroupBy_AssistEntity__int___);
  v11 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_AssistEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_AssistEntity___ctor__);
  if ( !v10 )
    sub_1C6BC60(v12, v13);
  klass = v10->klass;
  v15 = *(unsigned __int16 *)&v10->klass->_2.rank;
  if ( *(_WORD *)&v10->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IGrouping_int__AssistEntity___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IGrouping_int__AssistEntity___TypeInfo )
    {
      --v15;
      p_offset += 4;
      if ( !v15 )
        goto LABEL_14;
    }
    v17 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_14:
    v17 = sub_1C41D90(v10, System_Collections_Generic_IEnumerable_IGrouping_int__AssistEntity___TypeInfo, 0);
  }
  v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *, _QWORD))v17)(
          v10,
          *(_QWORD *)(v17 + 8));
  if ( !v19 )
    sub_1C6BC60(0, v18);
  while ( 1 )
  {
    v20 = *(_QWORD *)v19;
    v21 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
    {
      v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v22 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_21;
      }
      v23 = v20 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_21:
      v23 = sub_1C41D90(v19, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v19, *(_QWORD *)(v23 + 8)) & 1) == 0 )
      break;
    v24 = *(_QWORD *)v19;
    v25 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
    {
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IGrouping_int__AssistEntity___c **)v26 - 1) != System_Collections_Generic_IEnumerator_IGrouping_int__AssistEntity___TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_28;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_28:
      v27 = sub_1C41D90(v19, System_Collections_Generic_IEnumerator_IGrouping_int__AssistEntity___TypeInfo, 0);
    }
    v28 = (*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v19, *(_QWORD *)(v27 + 8));
    v29 = AssistMaster___c_TypeInfo;
    v30 = (System_Collections_Generic_IEnumerable_TSource__o *)v28;
    if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
      v29 = AssistMaster___c_TypeInfo;
    }
    _9__15_1 = (System_Func_object__bool__o *)v29->static_fields->__9__15_1;
    if ( !_9__15_1 )
    {
      if ( !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29);
        v29 = AssistMaster___c_TypeInfo;
      }
      v32 = (Il2CppObject *)v29->static_fields->__9;
      _9__15_1 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_AssistEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__15_1, v32, Method_AssistMaster___c__FilterOverBoost_b__15_1__, 0);
      v33 = AssistMaster___c_TypeInfo->static_fields;
      v33->__9__15_1 = (struct System_Func_AssistEntity__bool__o *)_9__15_1;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v33->__9__15_1, (int32_t)_9__15_1, v34, v35);
    }
    v36 = System_Linq_Enumerable__Any_object__51678644(
            v30,
            (System_Func_TSource__bool__o *)_9__15_1,
            (const MethodInfo_3148DB4 *)Method_System_Linq_Enumerable_Any_AssistEntity___);
    v37 = AssistMaster___c_TypeInfo;
    cctor_finished = AssistMaster___c_TypeInfo->_2.cctor_finished;
    if ( v36 )
    {
      if ( !cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
        v37 = AssistMaster___c_TypeInfo;
      }
      _9__15_2 = (System_Func_object__bool__o *)v37->static_fields->__9__15_2;
      if ( !_9__15_2 )
      {
        if ( !v37->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v37);
          v37 = AssistMaster___c_TypeInfo;
        }
        v40 = (Il2CppObject *)v37->static_fields->__9;
        _9__15_2 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_AssistEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__15_2, v40, Method_AssistMaster___c__FilterOverBoost_b__15_2__, 0);
        v41 = AssistMaster___c_TypeInfo->static_fields;
        v41->__9__15_2 = (struct System_Func_AssistEntity__bool__o *)_9__15_2;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v41->__9__15_2, (int32_t)_9__15_2, v42, v43);
      }
      v44 = System_Linq_Enumerable__Where_object_(
              v30,
              (System_Func_TSource__bool__o *)_9__15_2,
              (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_AssistEntity___);
      v45 = (System_Collections_Generic_IEnumerable_T__o *)v44;
      if ( !v11 )
        sub_1C6BC60(v44, v44);
    }
    else
    {
      if ( !cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
        v37 = AssistMaster___c_TypeInfo;
      }
      _9__15_3 = (System_Func_object__bool__o *)v37->static_fields->__9__15_3;
      if ( !_9__15_3 )
      {
        if ( !v37->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v37);
          v37 = AssistMaster___c_TypeInfo;
        }
        v47 = (Il2CppObject *)v37->static_fields->__9;
        _9__15_3 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_AssistEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__15_3, v47, Method_AssistMaster___c__FilterOverBoost_b__15_3__, 0);
        v48 = AssistMaster___c_TypeInfo->static_fields;
        v48->__9__15_3 = (struct System_Func_AssistEntity__bool__o *)_9__15_3;
        sub_1C6B9AC((CGThumbnailListItem_o *)&v48->__9__15_3, (int32_t)_9__15_3, v49, v50);
      }
      v51 = System_Linq_Enumerable__Where_object_(
              v30,
              (System_Func_TSource__bool__o *)_9__15_3,
              (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_AssistEntity___);
      v45 = (System_Collections_Generic_IEnumerable_T__o *)v51;
      if ( !v11 )
        sub_1C6BC60(v51, v51);
    }
    System_Collections_Generic_List_object___AddRange(
      v11,
      v45,
      (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_AssistEntity__AddRange__);
  }
  v52 = *(_QWORD *)v19;
  v53 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
  {
    v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v54 - 1) != System_IDisposable_TypeInfo )
    {
      --v53;
      v54 += 4;
      if ( !v53 )
        goto LABEL_57;
    }
    v55 = v52 + 16LL * *v54 + 312;
  }
  else
  {
LABEL_57:
    v55 = sub_1C41D90(v19, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v55)(v19, *(_QWORD *)(v55 + 8));
  return (System_Collections_Generic_List_AssistEntity__o *)v11;
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

  if ( (byte_4CB5E8D & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____78610224);
    sub_1C6BA08(&System_Func_AssistEntity__bool__TypeInfo);
    sub_1C6BA08(&Method_AssistMaster___c__DisplayClass5_0__GetAssistEntity_b__0__);
    sub_1C6BA08(&AssistMaster___c__DisplayClass5_0_TypeInfo);
    byte_4CB5E8D = 1;
  }
  v7 = sub_1C6BC54(AssistMaster___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C6BC60(v8, v9);
  *(_DWORD *)(v7 + 16) = lv;
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, v10);
  v12 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_AssistEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v7,
    Method_AssistMaster___c__DisplayClass5_0__GetAssistEntity_b__0__,
    0);
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__51793644(
                             (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId,
                             (System_Func_TSource__bool__o *)v12,
                             (const MethodInfo_3164EEC *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____78610224);
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
  const MethodInfo *v13; // x3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppObject *v17; // x1
  Il2CppClass **v18; // x0
  Il2CppObject *v19; // x21
  System_Collections_Generic_List_object__o *v20; // x19
  __int64 v21; // x1
  __int64 TargetId; // x0
  const MethodInfo *v23; // x2
  System_Collections_Generic_IEnumerable_T__o *EntityListFromAssistId; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CB5E96 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_AssistMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ShopGroupMaster___);
    sub_1C6BA08(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ShopEntity__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ShopEntity__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ShopEntity__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssistEntity__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopEntity__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssistEntity___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_AssistEntity__TypeInfo);
    byte_4CB5E96 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ShopGroupMaster___);
  if ( !Master_object )
    goto LABEL_28;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)Master_object, shopGroupId, 0);
  v7 = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_ShopMaster___);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  if ( !TargetEntityList )
    goto LABEL_28;
  max_length = TargetEntityList->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
        sub_1C6BC68(Master_object);
      v11 = TargetEntityList->m_Items[v10];
      if ( !v11 )
        break;
      if ( !v7 )
        break;
      Master_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)v7,
                        v11->fields.shopId,
                        (const MethodInfo_33F90DC *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
      if ( !v8 )
        break;
      items = v8->fields._items;
      v15 = Method_System_Collections_Generic_List_ShopEntity__Add__;
      ++v8->fields._version;
      if ( !items )
        break;
      size = v8->fields._size;
      v17 = Master_object;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          Master_object,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        v18 = &items->obj.klass + size;
        v8->fields._size = size + 1;
        v18[4] = (Il2CppClass *)v17;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v17, v12, v13);
      }
      max_length = TargetEntityList->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_18;
    }
LABEL_28:
    sub_1C6BC60(Master_object, v5);
  }
LABEL_18:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v19 = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_AssistMaster___);
  v20 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_AssistEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_AssistEntity___ctor__);
  if ( !v8 )
    goto LABEL_28;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    v8,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ShopEntity__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ShopEntity__MoveNext__) )
  {
    if ( !v27.fields._current )
      sub_1C6BC60(0, v21);
    TargetId = ShopEntity__get_TargetId((ShopEntity_o *)v27.fields._current, 0);
    if ( !v19 )
      sub_1C6BC60(TargetId, (unsigned int)TargetId);
    EntityListFromAssistId = (System_Collections_Generic_IEnumerable_T__o *)AssistMaster__GetEntityListFromAssistId(
                                                                              (AssistMaster_o *)v19,
                                                                              TargetId,
                                                                              v23);
    if ( !v20 )
      sub_1C6BC60(EntityListFromAssistId, EntityListFromAssistId);
    System_Collections_Generic_List_object___AddRange(
      v20,
      EntityListFromAssistId,
      (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_AssistEntity__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ShopEntity__Dispose__);
  return (System_Collections_Generic_List_AssistEntity__o *)v20;
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
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_TOutput__o *v11; // x21
  Il2CppObject *v12; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x21
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x21
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x0
  __int64 v31; // x1
  const MethodInfo *v32; // x2
  Il2CppObject *CurrentLevelEntity; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  Il2CppObject *v36; // x1
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  __int64 v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0

  if ( (byte_4CB5E90 & 1) == 0 )
  {
    sub_1C6BA08(&AssistMaster_AssistIdComparer_TypeInfo);
    sub_1C6BA08(&System_Converter_AssistEntity__AssistEntity__TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Distinct_AssistEntity___);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssistEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssistEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_AssistEntity__TypeInfo);
    sub_1C6BA08(&Method_ObservableCollectionExtensions_ConvertAll_AssistEntity__AssistEntity___);
    sub_1C6BA08(&Method_AssistMaster___c__GetAvailableEntityList_b__9_0__);
    sub_1C6BA08(&AssistMaster___c_TypeInfo);
    byte_4CB5E90 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_AssistEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_AssistEntity___ctor__);
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
    _9__9_0 = (System_Converter_TInput__TOutput__o *)sub_1C6BC54(System_Converter_AssistEntity__AssistEntity__TypeInfo);
    System_Converter_object__object____ctor(_9__9_0, v7, Method_AssistMaster___c__GetAvailableEntityList_b__9_0__, 0);
    static_fields = AssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__9_0 = (struct System_Converter_AssistEntity__AssistEntity__o *)_9__9_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__9_0, (int32_t)_9__9_0, v9, v10);
  }
  v11 = ObservableCollectionExtensions__ConvertAll_object__object_(
          list,
          (System_Converter_T__TOutput__o *)_9__9_0,
          (const MethodInfo_31C89B0 *)Method_ObservableCollectionExtensions_ConvertAll_AssistEntity__AssistEntity___);
  v12 = (Il2CppObject *)sub_1C6BC54(AssistMaster_AssistIdComparer_TypeInfo);
  System_Object___ctor(v12, 0);
  v13 = System_Linq_Enumerable__Distinct_object__51767296(
          (System_Collections_Generic_IEnumerable_TSource__o *)v11,
          (System_Collections_Generic_IEqualityComparer_TSource__o *)v12,
          (const MethodInfo_315E800 *)Method_System_Linq_Enumerable_Distinct_AssistEntity___);
  if ( !v13 )
    sub_1C6BC60(0, v14);
  klass = v13->klass;
  v16 = v13;
  v17 = *(unsigned __int16 *)&v13->klass->_2.rank;
  if ( *(_WORD *)&v13->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_AssistEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo )
    {
      --v17;
      p_offset += 4;
      if ( !v17 )
        goto LABEL_14;
    }
    v19 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_14:
    v19 = sub_1C41D90(v13, System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo, 0);
  }
  v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v19)(
          v16,
          *(_QWORD *)(v19 + 8));
  if ( !v21 )
    sub_1C6BC60(0, v20);
  while ( 1 )
  {
    v22 = *(_QWORD *)v21;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v24 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_21;
      }
      v25 = v22 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_21:
      v25 = sub_1C41D90(v21, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v21, *(_QWORD *)(v25 + 8)) & 1) == 0 )
      break;
    v26 = *(_QWORD *)v21;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_AssistEntity__c **)v28 - 1) != System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_28;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_28:
      v29 = sub_1C41D90(v21, System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo, 0);
    }
    v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v21, *(_QWORD *)(v29 + 8));
    if ( !v30 )
      sub_1C6BC60(0, v31);
    CurrentLevelEntity = (Il2CppObject *)AssistMaster__GetCurrentLevelEntity(this, *(_DWORD *)(v30 + 16), v32);
    v36 = CurrentLevelEntity;
    if ( CurrentLevelEntity )
    {
      if ( !v3 )
        sub_1C6BC60(CurrentLevelEntity, CurrentLevelEntity);
      items = v3->fields._items;
      v38 = Method_System_Collections_Generic_List_AssistEntity__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C6BC60(CurrentLevelEntity, CurrentLevelEntity);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          CurrentLevelEntity,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
      }
      else
      {
        v40 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v40[4] = (Il2CppClass *)v36;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v40 + 4), (int32_t)v36, v34, v35);
      }
    }
  }
  v41 = *(_QWORD *)v21;
  v42 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
  {
    v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
    {
      --v42;
      v43 += 4;
      if ( !v42 )
        goto LABEL_41;
    }
    v44 = v41 + 16LL * *v43 + 312;
  }
  else
  {
LABEL_41:
    v44 = sub_1C41D90(v21, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v44)(v21, *(_QWORD *)(v44 + 8));
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
  const MethodInfo *v12; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v13; // x0
  AssistMaster___c_c *v14; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x19
  System_Func_object__bool__o *_9__3_1; // x20
  Il2CppObject *v17; // x21
  struct AssistMaster___c_StaticFields *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4CB5E8B & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____78610224);
    sub_1C6BA08(&Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
    sub_1C6BA08(&System_Func_AssistEntity__bool__TypeInfo);
    sub_1C6BA08(&System_Func_AssistEntity__int__TypeInfo);
    sub_1C6BA08(&Method_AssistMaster___c__GetCurrentEntity_b__3_0__);
    sub_1C6BA08(&Method_AssistMaster___c__GetCurrentEntity_b__3_1__);
    sub_1C6BA08(&AssistMaster___c_TypeInfo);
    byte_4CB5E8B = 1;
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
    _9__3_0 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_AssistEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_0, v9, Method_AssistMaster___c__GetCurrentEntity_b__3_0__, 0);
    static_fields = AssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_AssistEntity__int__o *)_9__3_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v11, v12);
  }
  v13 = System_Linq_Enumerable__OrderByDescending_object__int_(
          v7,
          (System_Func_TSource__TKey__o *)_9__3_0,
          (const MethodInfo_316B118 *)Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
  v14 = AssistMaster___c_TypeInfo;
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)v13;
  if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v14 = AssistMaster___c_TypeInfo;
  }
  _9__3_1 = (System_Func_object__bool__o *)v14->static_fields->__9__3_1;
  if ( !_9__3_1 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = AssistMaster___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v14->static_fields->__9;
    _9__3_1 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_AssistEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__3_1, v17, Method_AssistMaster___c__GetCurrentEntity_b__3_1__, 0);
    v18 = AssistMaster___c_TypeInfo->static_fields;
    v18->__9__3_1 = (struct System_Func_AssistEntity__bool__o *)_9__3_1;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v18->__9__3_1, (int32_t)_9__3_1, v19, v20);
  }
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__51793644(
                             v15,
                             (System_Func_TSource__bool__o *)_9__3_1,
                             (const MethodInfo_3164EEC *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____78610224);
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
  const MethodInfo *v12; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v13; // x0
  AssistMaster___c_c *v14; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v15; // x19
  System_Func_object__int__o *_9__2_1; // x20
  Il2CppObject *v17; // x21
  struct AssistMaster___c_StaticFields *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v21; // x0
  AssistMaster___c_c *v22; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x19
  System_Func_object__bool__o *_9__2_2; // x20
  Il2CppObject *v25; // x21
  struct AssistMaster___c_StaticFields *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3

  if ( (byte_4CB5E8A & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____78610224);
    sub_1C6BA08(&Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ThenByDescending_AssistEntity__int___);
    sub_1C6BA08(&System_Func_AssistEntity__bool__TypeInfo);
    sub_1C6BA08(&System_Func_AssistEntity__int__TypeInfo);
    sub_1C6BA08(&Method_AssistMaster___c__GetCurrentLevelAndPriorityEntity_b__2_0__);
    sub_1C6BA08(&Method_AssistMaster___c__GetCurrentLevelAndPriorityEntity_b__2_1__);
    sub_1C6BA08(&Method_AssistMaster___c__GetCurrentLevelAndPriorityEntity_b__2_2__);
    sub_1C6BA08(&AssistMaster___c_TypeInfo);
    byte_4CB5E8A = 1;
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
    _9__2_0 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_AssistEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__2_0, v9, Method_AssistMaster___c__GetCurrentLevelAndPriorityEntity_b__2_0__, 0);
    static_fields = AssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_AssistEntity__int__o *)_9__2_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v11, v12);
  }
  v13 = System_Linq_Enumerable__OrderByDescending_object__int_(
          v7,
          (System_Func_TSource__TKey__o *)_9__2_0,
          (const MethodInfo_316B118 *)Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
  v14 = AssistMaster___c_TypeInfo;
  v15 = v13;
  if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v14 = AssistMaster___c_TypeInfo;
  }
  _9__2_1 = (System_Func_object__int__o *)v14->static_fields->__9__2_1;
  if ( !_9__2_1 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = AssistMaster___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v14->static_fields->__9;
    _9__2_1 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_AssistEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__2_1, v17, Method_AssistMaster___c__GetCurrentLevelAndPriorityEntity_b__2_1__, 0);
    v18 = AssistMaster___c_TypeInfo->static_fields;
    v18->__9__2_1 = (struct System_Func_AssistEntity__int__o *)_9__2_1;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v18->__9__2_1, (int32_t)_9__2_1, v19, v20);
  }
  v21 = System_Linq_Enumerable__ThenByDescending_object__int_(
          v15,
          (System_Func_TSource__TKey__o *)_9__2_1,
          (const MethodInfo_317AAD8 *)Method_System_Linq_Enumerable_ThenByDescending_AssistEntity__int___);
  v22 = AssistMaster___c_TypeInfo;
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)v21;
  if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v22 = AssistMaster___c_TypeInfo;
  }
  _9__2_2 = (System_Func_object__bool__o *)v22->static_fields->__9__2_2;
  if ( !_9__2_2 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = AssistMaster___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v22->static_fields->__9;
    _9__2_2 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_AssistEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__2_2,
      v25,
      Method_AssistMaster___c__GetCurrentLevelAndPriorityEntity_b__2_2__,
      0);
    v26 = AssistMaster___c_TypeInfo->static_fields;
    v26->__9__2_2 = (struct System_Func_AssistEntity__bool__o *)_9__2_2;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v26->__9__2_2, (int32_t)_9__2_2, v27, v28);
  }
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__51793644(
                             v23,
                             (System_Func_TSource__bool__o *)_9__2_2,
                             (const MethodInfo_3164EEC *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____78610224);
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
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_TOutput__o *v11; // x21
  Il2CppObject *v12; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x21
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x21
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x0
  __int64 v31; // x1
  const MethodInfo *v32; // x2
  Il2CppObject *CurrentLevelAndPriorityEntity; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  Il2CppObject *v36; // x1
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  __int64 v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0

  if ( (byte_4CB5E91 & 1) == 0 )
  {
    sub_1C6BA08(&AssistMaster_AssistIdComparer_TypeInfo);
    sub_1C6BA08(&System_Converter_AssistEntity__AssistEntity__TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Distinct_AssistEntity___);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssistEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssistEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_AssistEntity__TypeInfo);
    sub_1C6BA08(&Method_ObservableCollectionExtensions_ConvertAll_AssistEntity__AssistEntity___);
    sub_1C6BA08(&Method_AssistMaster___c__GetCurrentLevelAndPriorityEntityList_b__10_0__);
    sub_1C6BA08(&AssistMaster___c_TypeInfo);
    byte_4CB5E91 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_AssistEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_AssistEntity___ctor__);
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
    _9__10_0 = (System_Converter_TInput__TOutput__o *)sub_1C6BC54(System_Converter_AssistEntity__AssistEntity__TypeInfo);
    System_Converter_object__object____ctor(
      _9__10_0,
      v7,
      Method_AssistMaster___c__GetCurrentLevelAndPriorityEntityList_b__10_0__,
      0);
    static_fields = AssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Converter_AssistEntity__AssistEntity__o *)_9__10_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v9, v10);
  }
  v11 = ObservableCollectionExtensions__ConvertAll_object__object_(
          list,
          (System_Converter_T__TOutput__o *)_9__10_0,
          (const MethodInfo_31C89B0 *)Method_ObservableCollectionExtensions_ConvertAll_AssistEntity__AssistEntity___);
  v12 = (Il2CppObject *)sub_1C6BC54(AssistMaster_AssistIdComparer_TypeInfo);
  System_Object___ctor(v12, 0);
  v13 = System_Linq_Enumerable__Distinct_object__51767296(
          (System_Collections_Generic_IEnumerable_TSource__o *)v11,
          (System_Collections_Generic_IEqualityComparer_TSource__o *)v12,
          (const MethodInfo_315E800 *)Method_System_Linq_Enumerable_Distinct_AssistEntity___);
  if ( !v13 )
    sub_1C6BC60(0, v14);
  klass = v13->klass;
  v16 = v13;
  v17 = *(unsigned __int16 *)&v13->klass->_2.rank;
  if ( *(_WORD *)&v13->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_AssistEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo )
    {
      --v17;
      p_offset += 4;
      if ( !v17 )
        goto LABEL_14;
    }
    v19 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_14:
    v19 = sub_1C41D90(v13, System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo, 0);
  }
  v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v19)(
          v16,
          *(_QWORD *)(v19 + 8));
  if ( !v21 )
    sub_1C6BC60(0, v20);
  while ( 1 )
  {
    v22 = *(_QWORD *)v21;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v24 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_21;
      }
      v25 = v22 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_21:
      v25 = sub_1C41D90(v21, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v21, *(_QWORD *)(v25 + 8)) & 1) == 0 )
      break;
    v26 = *(_QWORD *)v21;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_AssistEntity__c **)v28 - 1) != System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_28;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_28:
      v29 = sub_1C41D90(v21, System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo, 0);
    }
    v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v21, *(_QWORD *)(v29 + 8));
    if ( !v30 )
      sub_1C6BC60(0, v31);
    CurrentLevelAndPriorityEntity = (Il2CppObject *)AssistMaster__GetCurrentLevelAndPriorityEntity(
                                                      this,
                                                      *(_DWORD *)(v30 + 16),
                                                      v32);
    v36 = CurrentLevelAndPriorityEntity;
    if ( CurrentLevelAndPriorityEntity )
    {
      if ( !v3 )
        sub_1C6BC60(CurrentLevelAndPriorityEntity, CurrentLevelAndPriorityEntity);
      items = v3->fields._items;
      v38 = Method_System_Collections_Generic_List_AssistEntity__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C6BC60(CurrentLevelAndPriorityEntity, CurrentLevelAndPriorityEntity);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          CurrentLevelAndPriorityEntity,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
      }
      else
      {
        v40 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v40[4] = (Il2CppClass *)v36;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v40 + 4), (int32_t)v36, v34, v35);
      }
    }
  }
  v41 = *(_QWORD *)v21;
  v42 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
  {
    v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
    {
      --v42;
      v43 += 4;
      if ( !v42 )
        goto LABEL_41;
    }
    v44 = v41 + 16LL * *v43 + 312;
  }
  else
  {
LABEL_41:
    v44 = sub_1C41D90(v21, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v44)(v21, *(_QWORD *)(v44 + 8));
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
  const MethodInfo *v12; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v13; // x0
  AssistMaster___c_c *v14; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x19
  System_Func_object__bool__o *_9__1_1; // x20
  Il2CppObject *v17; // x21
  struct AssistMaster___c_StaticFields *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4CB5E89 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____78610224);
    sub_1C6BA08(&Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
    sub_1C6BA08(&System_Func_AssistEntity__bool__TypeInfo);
    sub_1C6BA08(&System_Func_AssistEntity__int__TypeInfo);
    sub_1C6BA08(&Method_AssistMaster___c__GetCurrentLevelEntity_b__1_0__);
    sub_1C6BA08(&Method_AssistMaster___c__GetCurrentLevelEntity_b__1_1__);
    sub_1C6BA08(&AssistMaster___c_TypeInfo);
    byte_4CB5E89 = 1;
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
    _9__1_0 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_AssistEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__1_0, v9, Method_AssistMaster___c__GetCurrentLevelEntity_b__1_0__, 0);
    static_fields = AssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_AssistEntity__int__o *)_9__1_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v11, v12);
  }
  v13 = System_Linq_Enumerable__OrderByDescending_object__int_(
          v7,
          (System_Func_TSource__TKey__o *)_9__1_0,
          (const MethodInfo_316B118 *)Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
  v14 = AssistMaster___c_TypeInfo;
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)v13;
  if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v14 = AssistMaster___c_TypeInfo;
  }
  _9__1_1 = (System_Func_object__bool__o *)v14->static_fields->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = AssistMaster___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v14->static_fields->__9;
    _9__1_1 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_AssistEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__1_1, v17, Method_AssistMaster___c__GetCurrentLevelEntity_b__1_1__, 0);
    v18 = AssistMaster___c_TypeInfo->static_fields;
    v18->__9__1_1 = (struct System_Func_AssistEntity__bool__o *)_9__1_1;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v18->__9__1_1, (int32_t)_9__1_1, v19, v20);
  }
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__51793644(
                             v15,
                             (System_Func_TSource__bool__o *)_9__1_1,
                             (const MethodInfo_3164EEC *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____78610224);
}


// local variable allocation has failed, the output may be wrong!
AssistEntity_o *AssistMaster__GetEntity(AssistMaster_o *this, int32_t id, int32_t priority, const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4CB5E99 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_AssistMaster__AssistEntity__string__GetEntity__);
    byte_4CB5E99 = 1;
  }
  PK = (Il2CppObject *)AssistEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (AssistEntity_o *)DataMasterBase_object__object__object___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                             PK,
                             (const MethodInfo_33FDB94 *)Method_DataMasterBase_AssistMaster__AssistEntity__string__GetEntity__);
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

  if ( (byte_4CB5E88 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToList_AssistEntity___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_AssistEntity___);
    sub_1C6BA08(&System_Func_AssistEntity__bool__TypeInfo);
    sub_1C6BA08(&Method_AssistMaster___c__DisplayClass0_0__GetEntityListFromAssistId_b__0__);
    sub_1C6BA08(&AssistMaster___c__DisplayClass0_0_TypeInfo);
    byte_4CB5E88 = 1;
  }
  v5 = sub_1C6BC54(AssistMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C6BC60(v6, v7);
  *(_DWORD *)(v5 + 16) = assistId;
  list = this->fields.list;
  v9 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_AssistEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_AssistMaster___c__DisplayClass0_0__GetEntityListFromAssistId_b__0__,
    0);
  v10 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_AssistEntity___);
  return (System_Collections_Generic_List_AssistEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                              v10,
                                                              (const MethodInfo_317FEE4 *)Method_System_Linq_Enumerable_ToList_AssistEntity___);
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
  const MethodInfo *v12; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0

  if ( (byte_4CB5E8E & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
    sub_1C6BA08(&System_Func_AssistEntity__int__TypeInfo);
    sub_1C6BA08(&Method_AssistMaster___c__GetMaxLevelEntity_b__6_0__);
    sub_1C6BA08(&AssistMaster___c_TypeInfo);
    byte_4CB5E8E = 1;
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
    _9__6_0 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_AssistEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__6_0, v9, Method_AssistMaster___c__GetMaxLevelEntity_b__6_0__, 0);
    static_fields = AssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Func_AssistEntity__int__o *)_9__6_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v11, v12);
  }
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v7,
                                                               (System_Func_TSource__TKey__o *)_9__6_0,
                                                               (const MethodInfo_316B118 *)Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                             v13,
                             (const MethodInfo_3163B48 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___);
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
  const MethodInfo *v12; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0

  if ( (byte_4CB5E8F & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_OrderBy_AssistEntity__int___);
    sub_1C6BA08(&System_Func_AssistEntity__int__TypeInfo);
    sub_1C6BA08(&Method_AssistMaster___c__GetMinLevelEntity_b__7_0__);
    sub_1C6BA08(&AssistMaster___c_TypeInfo);
    byte_4CB5E8F = 1;
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
    _9__7_0 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_AssistEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__7_0, v9, Method_AssistMaster___c__GetMinLevelEntity_b__7_0__, 0);
    static_fields = AssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__7_0 = (struct System_Func_AssistEntity__int__o *)_9__7_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__7_0, (int32_t)_9__7_0, v11, v12);
  }
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v7,
                                                               (System_Func_TSource__TKey__o *)_9__7_0,
                                                               (const MethodInfo_316AB98 *)Method_System_Linq_Enumerable_OrderBy_AssistEntity__int___);
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                             v13,
                             (const MethodInfo_3163B48 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___);
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
  const MethodInfo *v12; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x0

  if ( (byte_4CB5E8C & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_OrderBy_AssistEntity__int___);
    sub_1C6BA08(&System_Func_AssistEntity__int__TypeInfo);
    sub_1C6BA08(&Method_AssistMaster___c__GetMinPriorityEntity_b__4_0__);
    sub_1C6BA08(&AssistMaster___c_TypeInfo);
    byte_4CB5E8C = 1;
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
    _9__4_0 = (System_Func_object__int__o *)sub_1C6BC54(System_Func_AssistEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__4_0, v9, Method_AssistMaster___c__GetMinPriorityEntity_b__4_0__, 0);
    static_fields = AssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Func_AssistEntity__int__o *)_9__4_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v11, v12);
  }
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v7,
                                                               (System_Func_TSource__TKey__o *)_9__4_0,
                                                               (const MethodInfo_316AB98 *)Method_System_Linq_Enumerable_OrderBy_AssistEntity__int___);
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                             v13,
                             (const MethodInfo_3163B48 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___);
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
      sub_1C6BC60(0, v15);
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

  if ( (byte_4CB5E93 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____78610224);
    sub_1C6BA08(&System_Func_AssistEntity__bool__TypeInfo);
    sub_1C6BA08(&Method_AssistMaster___c__DisplayClass12_0__GetStateUpPartsEntity_b__0__);
    sub_1C6BA08(&AssistMaster___c__DisplayClass12_0_TypeInfo);
    byte_4CB5E93 = 1;
  }
  v9 = sub_1C6BC54(AssistMaster___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_1C6BC60(v10, v11);
  *(_DWORD *)(v9 + 16) = assistId;
  *(_DWORD *)(v9 + 20) = currentLv;
  *(_DWORD *)(v9 + 24) = shopId;
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, v12);
  v14 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_AssistEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_AssistMaster___c__DisplayClass12_0__GetStateUpPartsEntity_b__0__,
    0);
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__51793644(
                             (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId,
                             (System_Func_TSource__bool__o *)v14,
                             (const MethodInfo_3164EEC *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____78610224);
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

  if ( (byte_4CB5E9A & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_AssistMaster__AssistEntity__string__TryGetEntity__);
    byte_4CB5E9A = 1;
  }
  PK = (Il2CppObject *)AssistEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_33FDBE0 *)Method_DataMasterBase_AssistMaster__AssistEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool AssistMaster__TryGetUnclearedAssistEntity(
        AssistMaster_o *this,
        AssistEntity_o **assistEntity,
        int32_t questId,
        bool isQuestClear,
        const MethodInfo *method)
{
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  Il2CppObject *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_AssistEntity__o *resultList; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CB5E97 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___);
    sub_1C6BA08(&int___TypeInfo);
    byte_4CB5E97 = 1;
  }
  resultList = 0;
  *assistEntity = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)assistEntity, 0, questId, (const MethodInfo *)isQuestClear);
  if ( isQuestClear )
    return 0;
  v9 = sub_1C6BAB0(int___TypeInfo, 1);
  if ( !v9 )
    sub_1C6BC60(0, v10);
  if ( !*(_DWORD *)(v9 + 24) )
    sub_1C6BC68(v9);
  *(_DWORD *)(v9 + 32) = questId;
  if ( !AssistMaster__TryGetValidAssistEntityList_42009364(this, &resultList, (System_Int32_array *)v9, v11) )
    return 0;
  v12 = System_Linq_Enumerable__FirstOrDefault_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)resultList,
          (const MethodInfo_3163B48 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___);
  *assistEntity = (AssistEntity_o *)v12;
  sub_1C6B9AC((CGThumbnailListItem_o *)assistEntity, (int32_t)v12, v13, v14);
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
  const MethodInfo *v17; // x3
  __int64 v18; // x0
  __int64 v19; // x1
  _BOOL8 v20; // x0
  __int64 v21; // x1
  Il2CppObject *current; // x23
  __int64 v23; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_List_object__o *v26; // x0
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x8
  __int64 v31; // x1
  AssistMaster_o *v32; // x0
  const MethodInfo *v33; // x2
  System_Collections_Generic_List_AssistEntity__o *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4CB5E92 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToList_AssistEntity___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_AssistEntity__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_AssistEntity__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_AssistEntity__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssistEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssistEntity__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssistEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_AssistEntity__TypeInfo);
    byte_4CB5E92 = 1;
  }
  memset(&v39, 0, sizeof(v39));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( isAvailableOnly )
    CurrentLevelAndPriorityEntityList = (System_Collections_Generic_List_object__o *)AssistMaster__GetCurrentLevelAndPriorityEntityList(
                                                                                       this,
                                                                                       v11);
  else
    CurrentLevelAndPriorityEntityList = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                                                       (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
                                                                                       (const MethodInfo_317FEE4 *)Method_System_Linq_Enumerable_ToList_AssistEntity___);
  v14 = CurrentLevelAndPriorityEntityList;
  v15 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_AssistEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_AssistEntity___ctor__);
  *resultList = (System_Collections_Generic_List_AssistEntity__o *)v15;
  sub_1C6B9AC((CGThumbnailListItem_o *)resultList, (int32_t)v15, v16, v17);
  if ( !v14 )
    sub_1C6BC60(v18, v19);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    v14,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_AssistEntity__GetEnumerator__);
  v39 = v38;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v39,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_AssistEntity__MoveNext__);
    if ( !v20 )
      break;
    current = v39.fields._current;
    if ( !v39.fields._current )
      sub_1C6BC60(v20, v21);
    if ( !Master_object )
      sub_1C6BC60(v20, v21);
    if ( CommonReleaseMaster__ContainQuestClearPhase(
           (CommonReleaseMaster_o *)Master_object,
           (int32_t)v39.fields._current[3].klass,
           questId,
           questPhase,
           0) )
    {
      v26 = (System_Collections_Generic_List_object__o *)*resultList;
      if ( !*resultList )
        sub_1C6BC60(0, v23);
      items = v26->fields._items;
      v28 = Method_System_Collections_Generic_List_AssistEntity__Add__;
      ++v26->fields._version;
      if ( !items )
        sub_1C6BC60(v26, v23);
      size = v26->fields._size;
      if ( (unsigned int)size < LODWORD(items->max_length) )
        goto LABEL_17;
LABEL_23:
      System_Collections_Generic_List_object___AddWithResize(
        v26,
        current,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    }
    else if ( CommonReleaseMaster__ContainQuestClear(
                (CommonReleaseMaster_o *)Master_object,
                (int32_t)current[3].klass,
                questId,
                0) )
    {
      v26 = (System_Collections_Generic_List_object__o *)*resultList;
      if ( !*resultList )
        sub_1C6BC60(0, v31);
      items = v26->fields._items;
      v28 = Method_System_Collections_Generic_List_AssistEntity__Add__;
      ++v26->fields._version;
      if ( !items )
        sub_1C6BC60(v26, v31);
      size = v26->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
        goto LABEL_23;
LABEL_17:
      v30 = &items->obj.klass + size;
      v26->fields._size = size + 1;
      v30[4] = (Il2CppClass *)current;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v30 + 4), (int32_t)current, v24, v25);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v39,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_AssistEntity__Dispose__);
  v34 = AssistMaster__FilterOverBoost(v32, *resultList, v33);
  *resultList = v34;
  sub_1C6B9AC((CGThumbnailListItem_o *)resultList, (int32_t)v34, v35, v36);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*resultList, 0);
}


bool AssistMaster__TryGetValidAssistEntityList_42009364(
        AssistMaster_o *this,
        System_Collections_Generic_List_AssistEntity__o **resultList,
        System_Int32_array *questIdList,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x22
  System_Collections_Generic_List_object__o *v8; // x23
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 v18; // x0
  System_Collections_Generic_IEnumerator_T__c *v19; // x8
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  il2cpp_array_size_t max_length; // x8
  __int64 v26; // x23
  unsigned __int64 v27; // x29
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Collections_Generic_List_object__o *v30; // x0
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x8
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  __int64 v36; // x9
  int32_t *v37; // x10
  __int64 v38; // x0
  AssistMaster_o *v39; // x0
  const MethodInfo *v40; // x2
  System_Collections_Generic_List_AssistEntity__o *v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3

  if ( (byte_4CB5E94 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_AssistEntity__GetEnumerator__);
    sub_1C6BA08(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssistEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_AssistEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_AssistEntity__TypeInfo);
    byte_4CB5E94 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_AssistEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_AssistEntity___ctor__);
  *resultList = (System_Collections_Generic_List_AssistEntity__o *)v8;
  sub_1C6B9AC((CGThumbnailListItem_o *)resultList, (int32_t)v8, v9, v10);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1C6BC60(0, v11);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_339243C *)Method_System_Collections_ObjectModel_Collection_AssistEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1C6BC60(0, v13);
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
          goto LABEL_11;
      }
      v18 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v18 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
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
      while ( *((System_Collections_Generic_IEnumerator_AssistEntity__c **)v21 - 1) != System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_18;
      }
      v22 = (__int64)&v19->vtable[*v21];
    }
    else
    {
LABEL_18:
      v22 = sub_1C41D90(Enumerator, System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo, 0);
    }
    v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v22)(
            Enumerator,
            *(_QWORD *)(v22 + 8));
    if ( !questIdList )
      sub_1C6BC60(v23, v24);
    max_length = questIdList->max_length;
    if ( (int)max_length >= 1 )
    {
      v26 = v23;
      v27 = 0;
      do
      {
        if ( v27 >= (unsigned int)max_length )
          sub_1C6BC68(v23);
        if ( !v26 )
          sub_1C6BC60(v23, v24);
        if ( !Master_object )
          sub_1C6BC60(v23, v24);
        v23 = CommonReleaseMaster__ContainQuestClear(
                (CommonReleaseMaster_o *)Master_object,
                *(_DWORD *)(v26 + 48),
                questIdList->m_Items[v27],
                0);
        if ( (v23 & 1) != 0 )
        {
          v30 = (System_Collections_Generic_List_object__o *)*resultList;
          if ( !*resultList )
            sub_1C6BC60(0, v24);
          items = v30->fields._items;
          v32 = Method_System_Collections_Generic_List_AssistEntity__Add__;
          ++v30->fields._version;
          if ( !items )
            sub_1C6BC60(v30, v24);
          size = v30->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v30,
              (Il2CppObject *)v26,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
          }
          else
          {
            v34 = &items->obj.klass + size;
            v30->fields._size = size + 1;
            v34[4] = (Il2CppClass *)v26;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v34 + 4), v26, v28, v29);
          }
        }
        LODWORD(max_length) = questIdList->max_length;
        ++v27;
      }
      while ( (__int64)v27 < (int)max_length );
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
        goto LABEL_38;
    }
    v38 = (__int64)&v35->vtable[*v37];
  }
  else
  {
LABEL_38:
    v38 = sub_1C41D90(Enumerator, System_IDisposable_TypeInfo, 0);
  }
  v39 = (AssistMaster_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(
                            Enumerator,
                            *(_QWORD *)(v38 + 8));
  v41 = AssistMaster__FilterOverBoost(v39, *resultList, v40);
  *resultList = v41;
  sub_1C6B9AC((CGThumbnailListItem_o *)resultList, (int32_t)v41, v42, v43);
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
    sub_1C6BC60(this, x);
  return x->fields.id == y->fields.id;
}


int32_t AssistMaster_AssistIdComparer__GetHashCode(
        AssistMaster_AssistIdComparer_o *this,
        AssistEntity_o *obj,
        const MethodInfo *method)
{
  if ( !obj )
    sub_1C6BC60(this, 0);
  return System_Int32__GetHashCode((_DWORD)obj + 16, 0);
}


void AssistMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB5E9B & 1) == 0 )
  {
    sub_1C6BA08(&AssistMaster___c_TypeInfo);
    byte_4CB5E9B = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(AssistMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AssistMaster___c_TypeInfo->static_fields->__9 = (struct AssistMaster___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)AssistMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C6BC60(this, 0);
  return item->fields.id;
}


bool AssistMaster___c___FilterOverBoost_b__15_1(
        AssistMaster___c_o *this,
        AssistEntity_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  if ( !item )
    sub_1C6BC60(this, 0);
  return AssistEntity__GetOverBoostQuestId(item, (const MethodInfo *)item) >= 1
      && AssistEntity__IsClearOverBoostQuest(item, v4);
}


bool AssistMaster___c___FilterOverBoost_b__15_2(
        AssistMaster___c_o *this,
        AssistEntity_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1C6BC60(this, 0);
  return AssistEntity__GetOverBoostQuestId(item, (const MethodInfo *)item) > 0;
}


bool AssistMaster___c___FilterOverBoost_b__15_3(
        AssistMaster___c_o *this,
        AssistEntity_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1C6BC60(this, 0);
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
    sub_1C6BC60(this, 0);
  return ent->fields.priority;
}


bool AssistMaster___c___GetCurrentEntity_b__3_1(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C6BC60(this, 0);
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
    sub_1C6BC60(this, 0);
  return ent->fields.lv;
}


int32_t AssistMaster___c___GetCurrentLevelAndPriorityEntity_b__2_1(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C6BC60(this, 0);
  return ent->fields.priority;
}


bool AssistMaster___c___GetCurrentLevelAndPriorityEntity_b__2_2(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C6BC60(this, 0);
  return AssistEntity__IsOpen(ent, (const MethodInfo *)ent);
}


int32_t AssistMaster___c___GetCurrentLevelEntity_b__1_0(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C6BC60(this, 0);
  return ent->fields.lv;
}


bool AssistMaster___c___GetCurrentLevelEntity_b__1_1(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C6BC60(this, 0);
  return AssistEntity__IsOpen(ent, (const MethodInfo *)ent);
}


int32_t AssistMaster___c___GetMaxLevelEntity_b__6_0(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C6BC60(this, 0);
  return ent->fields.lv;
}


int32_t AssistMaster___c___GetMinLevelEntity_b__7_0(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C6BC60(this, 0);
  return ent->fields.lv;
}


int32_t AssistMaster___c___GetMinPriorityEntity_b__4_0(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1C6BC60(this, 0);
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
    sub_1C6BC60(this, 0);
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
  const MethodInfo *v9; // x3

  v4 = this;
  if ( (byte_4CB5E9C & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_Any_CommonReleaseEntity___);
    sub_1C6BA08(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C6BA08(&DataManager_TypeInfo);
    sub_1C6BA08(&System_Func_CommonReleaseEntity__bool__TypeInfo);
    this = (AssistMaster___c__DisplayClass12_0_o *)sub_1C6BA08(&Method_AssistMaster___c__DisplayClass12_0__GetStateUpPartsEntity_b__1__);
    byte_4CB5E9C = 1;
  }
  if ( !entity )
    goto LABEL_13;
  if ( entity->fields.id != v4->fields.assistId || entity->fields.lv != v4->fields.currentLv )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (AssistMaster___c__DisplayClass12_0_o *)DataManager__GetMaster_object_((const MethodInfo_313B314 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this )
LABEL_13:
    sub_1C6BC60(this, entity);
  List = CommonReleaseMaster__getList((CommonReleaseMaster_o *)this, entity->fields.commonReleaseId, 0);
  _9__1 = (System_Func_object__bool__o *)v4->fields.__9__1;
  v7 = (System_Object_array *)List;
  if ( !_9__1 )
  {
    _9__1 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_CommonReleaseEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_AssistMaster___c__DisplayClass12_0__GetStateUpPartsEntity_b__1__,
      0);
    v4->fields.__9__1 = (struct System_Func_CommonReleaseEntity__bool__o *)_9__1;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v8, v9);
  }
  return BasicHelper__Any_object__51528924(
           v7,
           (System_Func_T__bool__o *)_9__1,
           (const MethodInfo_31244DC *)Method_BasicHelper_Any_CommonReleaseEntity___);
}


bool AssistMaster___c__DisplayClass12_0___GetStateUpPartsEntity_b__1(
        AssistMaster___c__DisplayClass12_0_o *this,
        CommonReleaseEntity_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_1C6BC60(this, 0);
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
    sub_1C6BC60(this, 0);
  return ent->fields.lv == this->fields.lv;
}