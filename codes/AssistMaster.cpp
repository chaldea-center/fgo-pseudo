void __fastcall AssistMaster___ctor(AssistMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B01C23 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_AssistMaster__AssistEntity__string___ctor__, method);
    byte_4B01C23 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    362,
    (const MethodInfo_32B1804 *)Method_DataMasterBase_AssistMaster__AssistEntity__string___ctor__);
}


System_Collections_Generic_List_AssistEntity__o *__fastcall AssistMaster__FilterOverBoost(
        AssistMaster_o *this,
        System_Collections_Generic_List_AssistEntity__o *resultList,
        const MethodInfo *method)
{
  __int64 v4; // x1
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
  AssistMaster___c_c *v20; // x0
  System_Func_object__int__o *_9__13_0; // x20
  Il2CppObject *v22; // x21
  struct AssistMaster___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v26; // x20
  System_Collections_Generic_List_object__o *v27; // x19
  __int64 v28; // x0
  __int64 v29; // x1
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___c *klass; // x8
  __int64 v31; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v34; // x1
  __int64 v35; // x20
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  __int64 v44; // x0
  AssistMaster___c_c *v45; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x21
  System_Func_object__bool__o *_9__13_1; // x22
  Il2CppObject *v48; // x23
  struct AssistMaster___c_StaticFields *v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  bool v52; // w0
  AssistMaster___c_c *v53; // x8
  uint32_t cctor_finished; // w9
  System_Func_object__bool__o *_9__13_2; // x22
  Il2CppObject *v56; // x23
  struct AssistMaster___c_StaticFields *v57; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x0
  System_Collections_Generic_IEnumerable_T__o *v61; // x1
  System_Func_object__bool__o *_9__13_3; // x22
  Il2CppObject *v63; // x23
  struct AssistMaster___c_StaticFields *v64; // x0
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v67; // x0
  __int64 v68; // x8
  __int64 v69; // x9
  int *v70; // x10
  __int64 v71; // x0

  if ( (byte_4B01C20 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_Any_AssistEntity___, resultList);
    sub_1BC3008(&Method_System_Linq_Enumerable_GroupBy_AssistEntity__int___, v4);
    sub_1BC3008(&Method_System_Linq_Enumerable_Where_AssistEntity___, v5);
    sub_1BC3008(&System_Func_AssistEntity__bool__TypeInfo, v6);
    sub_1BC3008(&System_Func_AssistEntity__int__TypeInfo, v7);
    sub_1BC3008(&System_IDisposable_TypeInfo, v8);
    sub_1BC3008(&System_Collections_Generic_IEnumerable_IGrouping_int__AssistEntity___TypeInfo, v9);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_IGrouping_int__AssistEntity___TypeInfo, v10);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_AssistEntity__AddRange__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_AssistEntity___ctor__, v13);
    sub_1BC3008(&System_Collections_Generic_List_AssistEntity__TypeInfo, v14);
    sub_1BC3008(&Method_AssistMaster___c__FilterOverBoost_b__13_0__, v15);
    sub_1BC3008(&Method_AssistMaster___c__FilterOverBoost_b__13_1__, v16);
    sub_1BC3008(&Method_AssistMaster___c__FilterOverBoost_b__13_2__, v17);
    sub_1BC3008(&Method_AssistMaster___c__FilterOverBoost_b__13_3__, v18);
    sub_1BC3008(&AssistMaster___c_TypeInfo, v19);
    byte_4B01C20 = 1;
  }
  v20 = AssistMaster___c_TypeInfo;
  if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v20 = AssistMaster___c_TypeInfo;
  }
  _9__13_0 = (System_Func_object__int__o *)v20->static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = AssistMaster___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v20->static_fields->__9;
    _9__13_0 = (System_Func_object__int__o *)sub_1BC3254(System_Func_AssistEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__13_0, v22, Method_AssistMaster___c__FilterOverBoost_b__13_0__, 0LL);
    static_fields = AssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Func_AssistEntity__int__o *)_9__13_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v24, v25);
  }
  v26 = System_Linq_Enumerable__GroupBy_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)resultList,
          (System_Func_TSource__TKey__o *)_9__13_0,
          (const MethodInfo_3028264 *)Method_System_Linq_Enumerable_GroupBy_AssistEntity__int___);
  v27 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_AssistEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_AssistEntity___ctor__);
  if ( !v26 )
    sub_1BC3264(v28, v29);
  klass = v26->klass;
  v31 = *(unsigned __int16 *)(&v26->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v26->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IGrouping_int__AssistEntity___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IGrouping_int__AssistEntity___TypeInfo )
    {
      --v31;
      p_offset += 4;
      if ( !v31 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_14:
    p_method = sub_1C13570(v26, System_Collections_Generic_IEnumerable_IGrouping_int__AssistEntity___TypeInfo, 0LL);
  }
  v35 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *, _QWORD))p_method)(
          v26,
          *(_QWORD *)(p_method + 8));
  if ( !v35 )
    sub_1BC3264(0LL, v34);
  while ( 1 )
  {
    v36 = *(_QWORD *)v35;
    v37 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
    {
      v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v38 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_21;
      }
      v39 = v36 + 16LL * *v38 + 312;
    }
    else
    {
LABEL_21:
      v39 = sub_1C13570(v35, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v35, *(_QWORD *)(v39 + 8)) & 1) == 0 )
      break;
    v40 = *(_QWORD *)v35;
    v41 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
    {
      v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IGrouping_int__AssistEntity___c **)v42 - 1) != System_Collections_Generic_IEnumerator_IGrouping_int__AssistEntity___TypeInfo )
      {
        --v41;
        v42 += 4;
        if ( !v41 )
          goto LABEL_28;
      }
      v43 = v40 + 16LL * *v42 + 312;
    }
    else
    {
LABEL_28:
      v43 = sub_1C13570(v35, System_Collections_Generic_IEnumerator_IGrouping_int__AssistEntity___TypeInfo, 0LL);
    }
    v44 = (*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v35, *(_QWORD *)(v43 + 8));
    v45 = AssistMaster___c_TypeInfo;
    v46 = (System_Collections_Generic_IEnumerable_TSource__o *)v44;
    if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
      v45 = AssistMaster___c_TypeInfo;
    }
    _9__13_1 = (System_Func_object__bool__o *)v45->static_fields->__9__13_1;
    if ( !_9__13_1 )
    {
      if ( !v45->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v45);
        v45 = AssistMaster___c_TypeInfo;
      }
      v48 = (Il2CppObject *)v45->static_fields->__9;
      _9__13_1 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_AssistEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__13_1, v48, Method_AssistMaster___c__FilterOverBoost_b__13_1__, 0LL);
      v49 = AssistMaster___c_TypeInfo->static_fields;
      v49->__9__13_1 = (struct System_Func_AssistEntity__bool__o *)_9__13_1;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v49->__9__13_1, (int32_t)_9__13_1, v50, v51);
    }
    v52 = System_Linq_Enumerable__Any_object__50395312(
            v46,
            (System_Func_TSource__bool__o *)_9__13_1,
            (const MethodInfo_300F8B0 *)Method_System_Linq_Enumerable_Any_AssistEntity___);
    v53 = AssistMaster___c_TypeInfo;
    cctor_finished = AssistMaster___c_TypeInfo->_2.cctor_finished;
    if ( v52 )
    {
      if ( !cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
        v53 = AssistMaster___c_TypeInfo;
      }
      _9__13_2 = (System_Func_object__bool__o *)v53->static_fields->__9__13_2;
      if ( !_9__13_2 )
      {
        if ( !v53->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v53);
          v53 = AssistMaster___c_TypeInfo;
        }
        v56 = (Il2CppObject *)v53->static_fields->__9;
        _9__13_2 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_AssistEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__13_2, v56, Method_AssistMaster___c__FilterOverBoost_b__13_2__, 0LL);
        v57 = AssistMaster___c_TypeInfo->static_fields;
        v57->__9__13_2 = (struct System_Func_AssistEntity__bool__o *)_9__13_2;
        sub_1BC2FAC((CGThumbnailListItem_o *)&v57->__9__13_2, (int32_t)_9__13_2, v58, v59);
      }
      v60 = System_Linq_Enumerable__Where_object_(
              v46,
              (System_Func_TSource__bool__o *)_9__13_2,
              (const MethodInfo_3044F10 *)Method_System_Linq_Enumerable_Where_AssistEntity___);
      v61 = (System_Collections_Generic_IEnumerable_T__o *)v60;
      if ( !v27 )
        sub_1BC3264(v60, v60);
    }
    else
    {
      if ( !cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
        v53 = AssistMaster___c_TypeInfo;
      }
      _9__13_3 = (System_Func_object__bool__o *)v53->static_fields->__9__13_3;
      if ( !_9__13_3 )
      {
        if ( !v53->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v53);
          v53 = AssistMaster___c_TypeInfo;
        }
        v63 = (Il2CppObject *)v53->static_fields->__9;
        _9__13_3 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_AssistEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__13_3, v63, Method_AssistMaster___c__FilterOverBoost_b__13_3__, 0LL);
        v64 = AssistMaster___c_TypeInfo->static_fields;
        v64->__9__13_3 = (struct System_Func_AssistEntity__bool__o *)_9__13_3;
        sub_1BC2FAC((CGThumbnailListItem_o *)&v64->__9__13_3, (int32_t)_9__13_3, v65, v66);
      }
      v67 = System_Linq_Enumerable__Where_object_(
              v46,
              (System_Func_TSource__bool__o *)_9__13_3,
              (const MethodInfo_3044F10 *)Method_System_Linq_Enumerable_Where_AssistEntity___);
      v61 = (System_Collections_Generic_IEnumerable_T__o *)v67;
      if ( !v27 )
        sub_1BC3264(v67, v67);
    }
    System_Collections_Generic_List_object___AddRange(
      v27,
      v61,
      (const MethodInfo_36A104C *)Method_System_Collections_Generic_List_AssistEntity__AddRange__);
  }
  v68 = *(_QWORD *)v35;
  v69 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
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
    v71 = sub_1C13570(v35, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v71)(v35, *(_QWORD *)(v71 + 8));
  return (System_Collections_Generic_List_AssistEntity__o *)v27;
}


// local variable allocation has failed, the output may be wrong!
AssistEntity_o *__fastcall AssistMaster__GetAssistEntity(
        AssistMaster_o *this,
        int32_t assistId,
        int32_t lv,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x19
  System_Func_object__bool__o *v15; // x20

  if ( (byte_4B01C19 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____76850856, *(_QWORD *)&assistId);
    sub_1BC3008(&System_Func_AssistEntity__bool__TypeInfo, v7);
    sub_1BC3008(&Method_AssistMaster___c__DisplayClass4_0__GetAssistEntity_b__0__, v8);
    sub_1BC3008(&AssistMaster___c__DisplayClass4_0_TypeInfo, v9);
    byte_4B01C19 = 1;
  }
  v10 = sub_1BC3254(AssistMaster___c__DisplayClass4_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1BC3264(v11, v12);
  *(_DWORD *)(v10 + 16) = lv;
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, v13);
  v15 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_AssistEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v10,
    Method_AssistMaster___c__DisplayClass4_0__GetAssistEntity_b__0__,
    0LL);
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__50493748(
                             (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId,
                             (System_Func_TSource__bool__o *)v15,
                             (const MethodInfo_3027934 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____76850856);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_AssistEntity__o *__fastcall AssistMaster__GetAssistEntityListByShopGroupId(
        AssistMaster_o *this,
        int32_t shopGroupId,
        const MethodInfo *method)
{
  __int64 v4; // x1
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
  Il2CppObject *Master_object; // x0
  __int64 v19; // x1
  ShopGroupEntity_array *TargetEntityList; // x19
  Il2CppObject *v21; // x21
  System_Collections_Generic_List_object__o *v22; // x20
  __int64 v23; // x2
  int max_length; // w8
  unsigned int v25; // w23
  ShopGroupEntity_o *v26; // x8
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppObject *v32; // x1
  Il2CppClass **v33; // x0
  Il2CppObject *v34; // x21
  System_Collections_Generic_List_object__o *v35; // x19
  __int64 v36; // x1
  __int64 TargetId; // x0
  const MethodInfo *v38; // x2
  System_Collections_Generic_IEnumerable_T__o *EntityListFromAssistId; // x0
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B01C21 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_AssistMaster___, *(_QWORD *)&shopGroupId);
    sub_1BC3008(&Method_DataManager_GetMaster_ShopGroupMaster___, v4);
    sub_1BC3008(&Method_DataManager_GetMaster_ShopMaster___, v5);
    sub_1BC3008(&DataManager_TypeInfo, v6);
    sub_1BC3008(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ShopEntity__Dispose__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ShopEntity__MoveNext__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ShopEntity__get_Current__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_AssistEntity__AddRange__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_ShopEntity__Add__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_ShopEntity__GetEnumerator__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_AssistEntity___ctor__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_ShopEntity___ctor__, v15);
    sub_1BC3008(&System_Collections_Generic_List_ShopEntity__TypeInfo, v16);
    sub_1BC3008(&System_Collections_Generic_List_AssistEntity__TypeInfo, v17);
    byte_4B01C21 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ShopGroupMaster___);
  if ( !Master_object )
    goto LABEL_28;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)Master_object, shopGroupId, 0LL);
  v21 = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ShopMaster___);
  v22 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  if ( !TargetEntityList )
    goto LABEL_28;
  max_length = TargetEntityList->max_length;
  if ( max_length >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      if ( v25 >= max_length )
        sub_1BC326C(Master_object, v19, v23);
      v26 = TargetEntityList->m_Items[v25];
      if ( !v26 )
        break;
      if ( !v21 )
        break;
      Master_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)v21,
                        v26->fields.shopId,
                        (const MethodInfo_32AF070 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
      if ( !v22 )
        break;
      items = v22->fields._items;
      v30 = Method_System_Collections_Generic_List_ShopEntity__Add__;
      ++v22->fields._version;
      if ( !items )
        break;
      size = v22->fields._size;
      v32 = Master_object;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v22,
          Master_object,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = &items->obj.klass + size;
        v22->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v32;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v33 + 4), (int32_t)v32, v27, v28);
      }
      max_length = TargetEntityList->max_length;
      if ( (int)++v25 >= max_length )
        goto LABEL_18;
    }
LABEL_28:
    sub_1BC3264(Master_object, v19);
  }
LABEL_18:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v34 = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_AssistMaster___);
  v35 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_AssistEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_AssistEntity___ctor__);
  if ( !v22 )
    goto LABEL_28;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v41,
    v22,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ShopEntity__GetEnumerator__);
  v42 = v41;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v42,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ShopEntity__MoveNext__) )
  {
    if ( !v42.fields._current )
      sub_1BC3264(0LL, v36);
    TargetId = ShopEntity__get_TargetId((ShopEntity_o *)v42.fields._current, 0LL);
    if ( !v34 )
      sub_1BC3264(TargetId, (unsigned int)TargetId);
    EntityListFromAssistId = (System_Collections_Generic_IEnumerable_T__o *)AssistMaster__GetEntityListFromAssistId(
                                                                              (AssistMaster_o *)v34,
                                                                              TargetId,
                                                                              v38);
    if ( !v35 )
      sub_1BC3264(EntityListFromAssistId, EntityListFromAssistId);
    System_Collections_Generic_List_object___AddRange(
      v35,
      EntityListFromAssistId,
      (const MethodInfo_36A104C *)Method_System_Collections_Generic_List_AssistEntity__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v42,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ShopEntity__Dispose__);
  return (System_Collections_Generic_List_AssistEntity__o *)v35;
}


System_Collections_Generic_List_AssistEntity__o *__fastcall AssistMaster__GetAvailableEntityList(
        AssistMaster_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
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
  System_Collections_Generic_List_object__o *v15; // x19
  AssistMaster___c_c *v16; // x0
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x21
  System_Converter_TInput__TOutput__o *_9__8_0; // x22
  Il2CppObject *v19; // x23
  struct AssistMaster___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_TOutput__o *v23; // x21
  Il2CppObject *v24; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  __int64 v26; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x21
  __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v32; // x1
  __int64 v33; // x21
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  __int64 v42; // x0
  __int64 v43; // x1
  const MethodInfo *v44; // x2
  Il2CppObject *CurrentLevelEntity; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  Il2CppObject *v48; // x1
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass **v52; // x0
  __int64 v53; // x8
  __int64 v54; // x9
  int *v55; // x10
  __int64 v56; // x0

  if ( (byte_4B01C1C & 1) == 0 )
  {
    sub_1BC3008(&AssistMaster_AssistIdComparer_TypeInfo, method);
    sub_1BC3008(&System_Converter_AssistEntity__AssistEntity__TypeInfo, v3);
    sub_1BC3008(&Method_System_Linq_Enumerable_Distinct_AssistEntity___, v4);
    sub_1BC3008(&System_IDisposable_TypeInfo, v5);
    sub_1BC3008(&System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo, v6);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo, v7);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_AssistEntity__Add__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_AssistEntity___ctor__, v10);
    sub_1BC3008(&System_Collections_Generic_List_AssistEntity__TypeInfo, v11);
    sub_1BC3008(&Method_ObservableCollectionExtensions_ConvertAll_AssistEntity__AssistEntity___, v12);
    sub_1BC3008(&Method_AssistMaster___c__GetAvailableEntityList_b__8_0__, v13);
    sub_1BC3008(&AssistMaster___c_TypeInfo, v14);
    byte_4B01C1C = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_AssistEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_AssistEntity___ctor__);
  v16 = AssistMaster___c_TypeInfo;
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v16 = AssistMaster___c_TypeInfo;
  }
  _9__8_0 = (System_Converter_TInput__TOutput__o *)v16->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = AssistMaster___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__8_0 = (System_Converter_TInput__TOutput__o *)sub_1BC3254(System_Converter_AssistEntity__AssistEntity__TypeInfo);
    System_Converter_object__object____ctor(_9__8_0, v19, Method_AssistMaster___c__GetAvailableEntityList_b__8_0__, 0LL);
    static_fields = AssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = (struct System_Converter_AssistEntity__AssistEntity__o *)_9__8_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v21, v22);
  }
  v23 = ObservableCollectionExtensions__ConvertAll_object__object_(
          list,
          (System_Converter_T__TOutput__o *)_9__8_0,
          (const MethodInfo_308B8C0 *)Method_ObservableCollectionExtensions_ConvertAll_AssistEntity__AssistEntity___);
  v24 = (Il2CppObject *)sub_1BC3254(AssistMaster_AssistIdComparer_TypeInfo);
  System_Object___ctor(v24, 0LL);
  v25 = System_Linq_Enumerable__Distinct_object__50467400(
          (System_Collections_Generic_IEnumerable_TSource__o *)v23,
          (System_Collections_Generic_IEqualityComparer_TSource__o *)v24,
          (const MethodInfo_3021248 *)Method_System_Linq_Enumerable_Distinct_AssistEntity___);
  if ( !v25 )
    sub_1BC3264(0LL, v26);
  klass = v25->klass;
  v28 = v25;
  v29 = *(unsigned __int16 *)(&v25->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v25->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_AssistEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo )
    {
      --v29;
      p_offset += 4;
      if ( !v29 )
        goto LABEL_14;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_14:
    p_method = sub_1C13570(v25, System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo, 0LL);
  }
  v33 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v28,
          *(_QWORD *)(p_method + 8));
  if ( !v33 )
    sub_1BC3264(0LL, v32);
  while ( 1 )
  {
    v34 = *(_QWORD *)v33;
    v35 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
    {
      v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v36 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_21;
      }
      v37 = v34 + 16LL * *v36 + 312;
    }
    else
    {
LABEL_21:
      v37 = sub_1C13570(v33, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v33, *(_QWORD *)(v37 + 8)) & 1) == 0 )
      break;
    v38 = *(_QWORD *)v33;
    v39 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
    {
      v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_AssistEntity__c **)v40 - 1) != System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo )
      {
        --v39;
        v40 += 4;
        if ( !v39 )
          goto LABEL_28;
      }
      v41 = v38 + 16LL * *v40 + 312;
    }
    else
    {
LABEL_28:
      v41 = sub_1C13570(v33, System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo, 0LL);
    }
    v42 = (*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v33, *(_QWORD *)(v41 + 8));
    if ( !v42 )
      sub_1BC3264(0LL, v43);
    CurrentLevelEntity = (Il2CppObject *)AssistMaster__GetCurrentLevelEntity(this, *(_DWORD *)(v42 + 16), v44);
    v48 = CurrentLevelEntity;
    if ( CurrentLevelEntity )
    {
      if ( !v15 )
        sub_1BC3264(CurrentLevelEntity, CurrentLevelEntity);
      items = v15->fields._items;
      v50 = Method_System_Collections_Generic_List_AssistEntity__Add__;
      ++v15->fields._version;
      if ( !items )
        sub_1BC3264(CurrentLevelEntity, CurrentLevelEntity);
      size = v15->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v15,
          CurrentLevelEntity,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
      }
      else
      {
        v52 = &items->obj.klass + size;
        v15->fields._size = size + 1;
        v52[4] = (Il2CppClass *)v48;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v52 + 4), (int32_t)v48, v46, v47);
      }
    }
  }
  v53 = *(_QWORD *)v33;
  v54 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
  {
    v55 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
    {
      --v54;
      v55 += 4;
      if ( !v54 )
        goto LABEL_41;
    }
    v56 = v53 + 16LL * *v55 + 312;
  }
  else
  {
LABEL_41:
    v56 = sub_1C13570(v33, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v56)(v33, *(_QWORD *)(v56 + 8));
  return (System_Collections_Generic_List_AssistEntity__o *)v15;
}


// local variable allocation has failed, the output may be wrong!
AssistEntity_o *__fastcall AssistMaster__GetCurrentEntity(
        AssistMaster_o *this,
        int32_t assistId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x0
  AssistMaster___c_c *v12; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  System_Func_object__int__o *_9__2_0; // x20
  Il2CppObject *v15; // x21
  struct AssistMaster___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v19; // x0
  AssistMaster___c_c *v20; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x19
  System_Func_object__bool__o *_9__2_1; // x20
  Il2CppObject *v23; // x21
  struct AssistMaster___c_StaticFields *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3

  if ( (byte_4B01C17 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____76850856, *(_QWORD *)&assistId);
    sub_1BC3008(&Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___, v5);
    sub_1BC3008(&System_Func_AssistEntity__bool__TypeInfo, v6);
    sub_1BC3008(&System_Func_AssistEntity__int__TypeInfo, v7);
    sub_1BC3008(&Method_AssistMaster___c__GetCurrentEntity_b__2_0__, v8);
    sub_1BC3008(&Method_AssistMaster___c__GetCurrentEntity_b__2_1__, v9);
    sub_1BC3008(&AssistMaster___c_TypeInfo, v10);
    byte_4B01C17 = 1;
  }
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, method);
  v12 = AssistMaster___c_TypeInfo;
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId;
  if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v12 = AssistMaster___c_TypeInfo;
  }
  _9__2_0 = (System_Func_object__int__o *)v12->static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = AssistMaster___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__2_0 = (System_Func_object__int__o *)sub_1BC3254(System_Func_AssistEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__2_0, v15, Method_AssistMaster___c__GetCurrentEntity_b__2_0__, 0LL);
    static_fields = AssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__2_0 = (struct System_Func_AssistEntity__int__o *)_9__2_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__2_0, (int32_t)_9__2_0, v17, v18);
  }
  v19 = System_Linq_Enumerable__OrderByDescending_object__int_(
          v13,
          (System_Func_TSource__TKey__o *)_9__2_0,
          (const MethodInfo_302DA1C *)Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
  v20 = AssistMaster___c_TypeInfo;
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)v19;
  if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v20 = AssistMaster___c_TypeInfo;
  }
  _9__2_1 = (System_Func_object__bool__o *)v20->static_fields->__9__2_1;
  if ( !_9__2_1 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = AssistMaster___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__2_1 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_AssistEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__2_1, v23, Method_AssistMaster___c__GetCurrentEntity_b__2_1__, 0LL);
    v24 = AssistMaster___c_TypeInfo->static_fields;
    v24->__9__2_1 = (struct System_Func_AssistEntity__bool__o *)_9__2_1;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v24->__9__2_1, (int32_t)_9__2_1, v25, v26);
  }
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__50493748(
                             v21,
                             (System_Func_TSource__bool__o *)_9__2_1,
                             (const MethodInfo_3027934 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____76850856);
}


// local variable allocation has failed, the output may be wrong!
AssistEntity_o *__fastcall AssistMaster__GetCurrentLevelEntity(
        AssistMaster_o *this,
        int32_t assistId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x0
  AssistMaster___c_c *v12; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  System_Func_object__int__o *_9__1_0; // x20
  Il2CppObject *v15; // x21
  struct AssistMaster___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v19; // x0
  AssistMaster___c_c *v20; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x19
  System_Func_object__bool__o *_9__1_1; // x20
  Il2CppObject *v23; // x21
  struct AssistMaster___c_StaticFields *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3

  if ( (byte_4B01C16 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____76850856, *(_QWORD *)&assistId);
    sub_1BC3008(&Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___, v5);
    sub_1BC3008(&System_Func_AssistEntity__bool__TypeInfo, v6);
    sub_1BC3008(&System_Func_AssistEntity__int__TypeInfo, v7);
    sub_1BC3008(&Method_AssistMaster___c__GetCurrentLevelEntity_b__1_0__, v8);
    sub_1BC3008(&Method_AssistMaster___c__GetCurrentLevelEntity_b__1_1__, v9);
    sub_1BC3008(&AssistMaster___c_TypeInfo, v10);
    byte_4B01C16 = 1;
  }
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, method);
  v12 = AssistMaster___c_TypeInfo;
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId;
  if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v12 = AssistMaster___c_TypeInfo;
  }
  _9__1_0 = (System_Func_object__int__o *)v12->static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = AssistMaster___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__1_0 = (System_Func_object__int__o *)sub_1BC3254(System_Func_AssistEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__1_0, v15, Method_AssistMaster___c__GetCurrentLevelEntity_b__1_0__, 0LL);
    static_fields = AssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__1_0 = (struct System_Func_AssistEntity__int__o *)_9__1_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__1_0, (int32_t)_9__1_0, v17, v18);
  }
  v19 = System_Linq_Enumerable__OrderByDescending_object__int_(
          v13,
          (System_Func_TSource__TKey__o *)_9__1_0,
          (const MethodInfo_302DA1C *)Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
  v20 = AssistMaster___c_TypeInfo;
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)v19;
  if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v20 = AssistMaster___c_TypeInfo;
  }
  _9__1_1 = (System_Func_object__bool__o *)v20->static_fields->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = AssistMaster___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__1_1 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_AssistEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__1_1, v23, Method_AssistMaster___c__GetCurrentLevelEntity_b__1_1__, 0LL);
    v24 = AssistMaster___c_TypeInfo->static_fields;
    v24->__9__1_1 = (struct System_Func_AssistEntity__bool__o *)_9__1_1;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v24->__9__1_1, (int32_t)_9__1_1, v25, v26);
  }
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__50493748(
                             v21,
                             (System_Func_TSource__bool__o *)_9__1_1,
                             (const MethodInfo_3027934 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____76850856);
}


// local variable allocation has failed, the output may be wrong!
AssistEntity_o *__fastcall AssistMaster__GetEntity(
        AssistMaster_o *this,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B01C24 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_AssistMaster__AssistEntity__string__GetEntity__, *(_QWORD *)&id);
    byte_4B01C24 = 1;
  }
  PK = (Il2CppObject *)AssistEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (AssistEntity_o *)DataMasterBase_object__object__object___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                             PK,
                             (const MethodInfo_32B3B28 *)Method_DataMasterBase_AssistMaster__AssistEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_AssistEntity__o *__fastcall AssistMaster__GetEntityListFromAssistId(
        AssistMaster_o *this,
        int32_t assistId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x19
  System_Func_object__bool__o *v13; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_4B01C15 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_ToList_AssistEntity___, *(_QWORD *)&assistId);
    sub_1BC3008(&Method_System_Linq_Enumerable_Where_AssistEntity___, v5);
    sub_1BC3008(&System_Func_AssistEntity__bool__TypeInfo, v6);
    sub_1BC3008(&Method_AssistMaster___c__DisplayClass0_0__GetEntityListFromAssistId_b__0__, v7);
    sub_1BC3008(&AssistMaster___c__DisplayClass0_0_TypeInfo, v8);
    byte_4B01C15 = 1;
  }
  v9 = sub_1BC3254(AssistMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1BC3264(v10, v11);
  *(_DWORD *)(v9 + 16) = assistId;
  list = this->fields.list;
  v13 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_AssistEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_AssistMaster___c__DisplayClass0_0__GetEntityListFromAssistId_b__0__,
    0LL);
  v14 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_3044F10 *)Method_System_Linq_Enumerable_Where_AssistEntity___);
  return (System_Collections_Generic_List_AssistEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                              v14,
                                                              (const MethodInfo_3042DE0 *)Method_System_Linq_Enumerable_ToList_AssistEntity___);
}


// local variable allocation has failed, the output may be wrong!
AssistEntity_o *__fastcall AssistMaster__GetMaxLevelEntity(
        AssistMaster_o *this,
        int32_t assistId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x0
  AssistMaster___c_c *v10; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x19
  System_Func_object__int__o *_9__5_0; // x20
  Il2CppObject *v13; // x21
  struct AssistMaster___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_4B01C1A & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___, *(_QWORD *)&assistId);
    sub_1BC3008(&Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___, v5);
    sub_1BC3008(&System_Func_AssistEntity__int__TypeInfo, v6);
    sub_1BC3008(&Method_AssistMaster___c__GetMaxLevelEntity_b__5_0__, v7);
    sub_1BC3008(&AssistMaster___c_TypeInfo, v8);
    byte_4B01C1A = 1;
  }
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, method);
  v10 = AssistMaster___c_TypeInfo;
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId;
  if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v10 = AssistMaster___c_TypeInfo;
  }
  _9__5_0 = (System_Func_object__int__o *)v10->static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = AssistMaster___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__5_0 = (System_Func_object__int__o *)sub_1BC3254(System_Func_AssistEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__5_0, v13, Method_AssistMaster___c__GetMaxLevelEntity_b__5_0__, 0LL);
    static_fields = AssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = (struct System_Func_AssistEntity__int__o *)_9__5_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v15, v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v11,
                                                               (System_Func_TSource__TKey__o *)_9__5_0,
                                                               (const MethodInfo_302DA1C *)Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                             v17,
                             (const MethodInfo_3026590 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___);
}


// local variable allocation has failed, the output may be wrong!
AssistEntity_o *__fastcall AssistMaster__GetMinLevelEntity(
        AssistMaster_o *this,
        int32_t assistId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x0
  AssistMaster___c_c *v10; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x19
  System_Func_object__int__o *_9__6_0; // x20
  Il2CppObject *v13; // x21
  struct AssistMaster___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_4B01C1B & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___, *(_QWORD *)&assistId);
    sub_1BC3008(&Method_System_Linq_Enumerable_OrderBy_AssistEntity__int___, v5);
    sub_1BC3008(&System_Func_AssistEntity__int__TypeInfo, v6);
    sub_1BC3008(&Method_AssistMaster___c__GetMinLevelEntity_b__6_0__, v7);
    sub_1BC3008(&AssistMaster___c_TypeInfo, v8);
    byte_4B01C1B = 1;
  }
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, method);
  v10 = AssistMaster___c_TypeInfo;
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId;
  if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v10 = AssistMaster___c_TypeInfo;
  }
  _9__6_0 = (System_Func_object__int__o *)v10->static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = AssistMaster___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__6_0 = (System_Func_object__int__o *)sub_1BC3254(System_Func_AssistEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__6_0, v13, Method_AssistMaster___c__GetMinLevelEntity_b__6_0__, 0LL);
    static_fields = AssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__6_0 = (struct System_Func_AssistEntity__int__o *)_9__6_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__6_0, (int32_t)_9__6_0, v15, v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v11,
                                                               (System_Func_TSource__TKey__o *)_9__6_0,
                                                               (const MethodInfo_302D508 *)Method_System_Linq_Enumerable_OrderBy_AssistEntity__int___);
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                             v17,
                             (const MethodInfo_3026590 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___);
}


// local variable allocation has failed, the output may be wrong!
AssistEntity_o *__fastcall AssistMaster__GetMinPriorityEntity(
        AssistMaster_o *this,
        int32_t assistId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x0
  AssistMaster___c_c *v10; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x19
  System_Func_object__int__o *_9__3_0; // x20
  Il2CppObject *v13; // x21
  struct AssistMaster___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_4B01C18 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___, *(_QWORD *)&assistId);
    sub_1BC3008(&Method_System_Linq_Enumerable_OrderBy_AssistEntity__int___, v5);
    sub_1BC3008(&System_Func_AssistEntity__int__TypeInfo, v6);
    sub_1BC3008(&Method_AssistMaster___c__GetMinPriorityEntity_b__3_0__, v7);
    sub_1BC3008(&AssistMaster___c_TypeInfo, v8);
    byte_4B01C18 = 1;
  }
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, method);
  v10 = AssistMaster___c_TypeInfo;
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId;
  if ( !AssistMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo);
    v10 = AssistMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__int__o *)v10->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = AssistMaster___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__3_0 = (System_Func_object__int__o *)sub_1BC3254(System_Func_AssistEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_0, v13, Method_AssistMaster___c__GetMinPriorityEntity_b__3_0__, 0LL);
    static_fields = AssistMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_AssistEntity__int__o *)_9__3_0;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v15, v16);
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v11,
                                                               (System_Func_TSource__TKey__o *)_9__3_0,
                                                               (const MethodInfo_302D508 *)Method_System_Linq_Enumerable_OrderBy_AssistEntity__int___);
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                             v17,
                             (const MethodInfo_3026590 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___);
}


// local variable allocation has failed, the output may be wrong!
AssistEntity_o *__fastcall AssistMaster__GetNextPartsEntity(
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
      sub_1BC3264(0LL, v15);
    if ( lv >= MaxLevelEntity->fields.lv )
      return v10;
    else
      return AssistMaster__GetAssistEntity(this, assistId, v10->fields.lv + 1, v16);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
AssistEntity_o *__fastcall AssistMaster__GetStateUpPartsEntity(
        AssistMaster_o *this,
        int32_t assistId,
        int32_t currentLv,
        int32_t shopId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x23
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x19
  System_Func_object__bool__o *v17; // x20

  if ( (byte_4B01C1E & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____76850856, *(_QWORD *)&assistId);
    sub_1BC3008(&System_Func_AssistEntity__bool__TypeInfo, v9);
    sub_1BC3008(&Method_AssistMaster___c__DisplayClass10_0__GetStateUpPartsEntity_b__0__, v10);
    sub_1BC3008(&AssistMaster___c__DisplayClass10_0_TypeInfo, v11);
    byte_4B01C1E = 1;
  }
  v12 = sub_1BC3254(AssistMaster___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BC3264(v13, v14);
  *(_DWORD *)(v12 + 16) = assistId;
  *(_DWORD *)(v12 + 20) = currentLv;
  *(_DWORD *)(v12 + 24) = shopId;
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, v15);
  v17 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_AssistEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v12,
    Method_AssistMaster___c__DisplayClass10_0__GetStateUpPartsEntity_b__0__,
    0LL);
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__50493748(
                             (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId,
                             (System_Func_TSource__bool__o *)v17,
                             (const MethodInfo_3027934 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____76850856);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AssistMaster__TryGetEntity(
        AssistMaster_o *this,
        AssistEntity_o **entity,
        int32_t id,
        int32_t priority,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x2

  if ( (byte_4B01C25 & 1) == 0 )
  {
    sub_1BC3008(&Method_DataMasterBase_AssistMaster__AssistEntity__string__TryGetEntity__, entity);
    byte_4B01C25 = 1;
  }
  PK = (Il2CppObject *)AssistEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_32B3B74 *)Method_DataMasterBase_AssistMaster__AssistEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AssistMaster__TryGetUnclearedAssistEntity(
        AssistMaster_o *this,
        AssistEntity_o **assistEntity,
        int32_t questId,
        bool isQuestClear,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_Int32_array *v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  Il2CppObject *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_AssistEntity__o *resultList; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B01C22 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___, assistEntity);
    sub_1BC3008(&int___TypeInfo, v9);
    byte_4B01C22 = 1;
  }
  resultList = 0LL;
  *assistEntity = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)assistEntity, 0, questId, (const MethodInfo *)isQuestClear);
  if ( isQuestClear )
    return 0;
  v10 = (System_Int32_array *)sub_1BC30B0(int___TypeInfo, 1LL);
  if ( !v10 )
    sub_1BC3264(0LL, v11);
  if ( !v10->max_length )
    sub_1BC326C(v10, v11, v10);
  v10->m_Items[1] = questId;
  if ( !AssistMaster__TryGetValidAssistEntityList_40793396(this, &resultList, v10, v12) )
    return 0;
  v13 = System_Linq_Enumerable__FirstOrDefault_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)resultList,
          (const MethodInfo_3026590 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___);
  *assistEntity = (AssistEntity_o *)v13;
  sub_1BC2FAC((CGThumbnailListItem_o *)assistEntity, (int32_t)v13, v14, v15);
  return *assistEntity != 0LL;
}


bool __fastcall AssistMaster__TryGetValidAssistEntityList(
        AssistMaster_o *this,
        System_Collections_Generic_List_AssistEntity__o **resultList,
        int32_t questId,
        int32_t questPhase,
        bool isAvailableOnly,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  const MethodInfo *v20; // x1
  Il2CppObject *Master_object; // x22
  System_Collections_Generic_List_object__o *AvailableEntityList; // x0
  System_Collections_Generic_List_object__o *v23; // x23
  System_Collections_Generic_List_object__o *v24; // x24
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 v27; // x0
  __int64 v28; // x1
  _BOOL8 v29; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x4
  Il2CppObject *current; // x23
  __int64 v33; // x1
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Collections_Generic_List_object__o *v36; // x0
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x8
  __int64 v41; // x1
  AssistMaster_o *v42; // x0
  const MethodInfo *v43; // x2
  System_Collections_Generic_List_AssistEntity__o *v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B01C1D & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_CommonReleaseMaster___, resultList);
    sub_1BC3008(&DataManager_TypeInfo, v11);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToList_AssistEntity___, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_AssistEntity__Dispose__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_AssistEntity__MoveNext__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_AssistEntity__get_Current__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_AssistEntity__Add__, v16);
    sub_1BC3008(&Method_System_Collections_Generic_List_AssistEntity__GetEnumerator__, v17);
    sub_1BC3008(&Method_System_Collections_Generic_List_AssistEntity___ctor__, v18);
    sub_1BC3008(&System_Collections_Generic_List_AssistEntity__TypeInfo, v19);
    byte_4B01C1D = 1;
  }
  memset(&v49, 0, sizeof(v49));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( isAvailableOnly )
    AvailableEntityList = (System_Collections_Generic_List_object__o *)AssistMaster__GetAvailableEntityList(this, v20);
  else
    AvailableEntityList = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                                         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
                                                                         (const MethodInfo_3042DE0 *)Method_System_Linq_Enumerable_ToList_AssistEntity___);
  v23 = AvailableEntityList;
  v24 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_AssistEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_AssistEntity___ctor__);
  *resultList = (System_Collections_Generic_List_AssistEntity__o *)v24;
  sub_1BC2FAC((CGThumbnailListItem_o *)resultList, (int32_t)v24, v25, v26);
  if ( !v23 )
    sub_1BC3264(v27, v28);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v48,
    v23,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_AssistEntity__GetEnumerator__);
  v49 = v48;
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v49,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_AssistEntity__MoveNext__);
    if ( !v29 )
      break;
    current = v49.fields._current;
    if ( !v49.fields._current )
      sub_1BC3264(v29, v30);
    if ( !Master_object )
      sub_1BC3264(v29, v30);
    if ( CommonReleaseMaster__ContainQuestClearPhase(
           (CommonReleaseMaster_o *)Master_object,
           (int32_t)v49.fields._current[3].klass,
           questId,
           questPhase,
           v31) )
    {
      v36 = (System_Collections_Generic_List_object__o *)*resultList;
      if ( !*resultList )
        sub_1BC3264(0LL, v33);
      items = v36->fields._items;
      v38 = Method_System_Collections_Generic_List_AssistEntity__Add__;
      ++v36->fields._version;
      if ( !items )
        sub_1BC3264(v36, v33);
      size = v36->fields._size;
      if ( (unsigned int)size < items->max_length )
        goto LABEL_17;
LABEL_23:
      System_Collections_Generic_List_object___AddWithResize(
        v36,
        current,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
    }
    else if ( CommonReleaseMaster__ContainQuestClear(
                (CommonReleaseMaster_o *)Master_object,
                (int32_t)current[3].klass,
                questId,
                v35) )
    {
      v36 = (System_Collections_Generic_List_object__o *)*resultList;
      if ( !*resultList )
        sub_1BC3264(0LL, v41);
      items = v36->fields._items;
      v38 = Method_System_Collections_Generic_List_AssistEntity__Add__;
      ++v36->fields._version;
      if ( !items )
        sub_1BC3264(v36, v41);
      size = v36->fields._size;
      if ( (unsigned int)size >= items->max_length )
        goto LABEL_23;
LABEL_17:
      v40 = &items->obj.klass + size;
      v36->fields._size = size + 1;
      v40[4] = (Il2CppClass *)current;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v40 + 4), (int32_t)current, v34, v35);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v49,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_AssistEntity__Dispose__);
  v44 = AssistMaster__FilterOverBoost(v42, *resultList, v43);
  *resultList = v44;
  sub_1BC2FAC((CGThumbnailListItem_o *)resultList, (int32_t)v44, v45, v46);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*resultList, 0LL);
}


bool __fastcall AssistMaster__TryGetValidAssistEntityList_40793396(
        AssistMaster_o *this,
        System_Collections_Generic_List_AssistEntity__o **resultList,
        System_Int32_array *questIdList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *Master_object; // x22
  System_Collections_Generic_List_object__o *v16; // x23
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v21; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x20
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v24; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  const MethodInfo *v34; // x3
  __int64 v35; // x8
  __int64 v36; // x23
  unsigned __int64 v37; // x29
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
  const MethodInfo *v51; // x3

  if ( (byte_4B01C1F & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_ObjectModel_Collection_AssistEntity__GetEnumerator__, resultList);
    sub_1BC3008(&Method_DataManager_GetMaster_CommonReleaseMaster___, v7);
    sub_1BC3008(&DataManager_TypeInfo, v8);
    sub_1BC3008(&System_IDisposable_TypeInfo, v9);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo, v10);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_AssistEntity__Add__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_AssistEntity___ctor__, v13);
    sub_1BC3008(&System_Collections_Generic_List_AssistEntity__TypeInfo, v14);
    byte_4B01C1F = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v16 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_AssistEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_AssistEntity___ctor__);
  *resultList = (System_Collections_Generic_List_AssistEntity__o *)v16;
  sub_1BC2FAC((CGThumbnailListItem_o *)resultList, (int32_t)v16, v17, v18);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_1BC3264(0LL, v19);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_324AE30 *)Method_System_Collections_ObjectModel_Collection_AssistEntity__GetEnumerator__);
  if ( !Enumerator )
    sub_1BC3264(0LL, v21);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v24 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v24;
        p_offset += 4;
        if ( !v24 )
          goto LABEL_11;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_11:
      p_method = sub_1C13570(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v27 = Enumerator->klass;
    v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_AssistEntity__c **)v29 - 1) != System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_18;
      }
      v30 = (__int64)&v27->vtable[*v29].method;
    }
    else
    {
LABEL_18:
      v30 = sub_1C13570(Enumerator, System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo, 0LL);
    }
    v31 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
            Enumerator,
            *(_QWORD *)(v30 + 8));
    if ( !questIdList )
      sub_1BC3264(v31, v32);
    v35 = *(_QWORD *)&questIdList->max_length;
    if ( (int)v35 >= 1 )
    {
      v36 = v31;
      v37 = 0LL;
      do
      {
        if ( v37 >= (unsigned int)v35 )
          sub_1BC326C(v31, v32, v33);
        if ( !v36 )
          sub_1BC3264(v31, v32);
        if ( !Master_object )
          sub_1BC3264(v31, v32);
        v31 = CommonReleaseMaster__ContainQuestClear(
                (CommonReleaseMaster_o *)Master_object,
                *(_DWORD *)(v36 + 48),
                questIdList->m_Items[v37 + 1],
                v34);
        if ( (v31 & 1) != 0 )
        {
          v38 = (System_Collections_Generic_List_object__o *)*resultList;
          if ( !*resultList )
            sub_1BC3264(0LL, v32);
          items = v38->fields._items;
          v40 = Method_System_Collections_Generic_List_AssistEntity__Add__;
          ++v38->fields._version;
          if ( !items )
            sub_1BC3264(v38, v32);
          size = v38->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v38,
              (Il2CppObject *)v36,
              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
          }
          else
          {
            v42 = &items->obj.klass + size;
            v38->fields._size = size + 1;
            v42[4] = (Il2CppClass *)v36;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v42 + 4), v36, v33, v34);
          }
        }
        LODWORD(v35) = questIdList->max_length;
        ++v37;
      }
      while ( (__int64)v37 < (int)v35 );
    }
  }
  v43 = Enumerator->klass;
  v44 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
  {
    v45 = &v43->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
    {
      --v44;
      v45 += 4;
      if ( !v44 )
        goto LABEL_38;
    }
    v46 = (__int64)&v43->vtable[*v45].method;
  }
  else
  {
LABEL_38:
    v46 = sub_1C13570(Enumerator, System_IDisposable_TypeInfo, 0LL);
  }
  v47 = (AssistMaster_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v46)(
                            Enumerator,
                            *(_QWORD *)(v46 + 8));
  v49 = AssistMaster__FilterOverBoost(v47, *resultList, v48);
  *resultList = v49;
  sub_1BC2FAC((CGThumbnailListItem_o *)resultList, (int32_t)v49, v50, v51);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*resultList, 0LL);
}


void __fastcall AssistMaster_AssistIdComparer___ctor(AssistMaster_AssistIdComparer_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AssistMaster_AssistIdComparer__Equals(
        AssistMaster_AssistIdComparer_o *this,
        AssistEntity_o *x,
        AssistEntity_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_1BC3264(this, x);
  return x->fields.id == y->fields.id;
}


int32_t __fastcall AssistMaster_AssistIdComparer__GetHashCode(
        AssistMaster_AssistIdComparer_o *this,
        AssistEntity_o *obj,
        const MethodInfo *method)
{
  if ( !obj )
    sub_1BC3264(this, 0LL);
  return System_Int32__GetHashCode((_DWORD)obj + 16, 0LL);
}


void __fastcall AssistMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B01C26 & 1) == 0 )
  {
    sub_1BC3008(&AssistMaster___c_TypeInfo, v1);
    byte_4B01C26 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(AssistMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  AssistMaster___c_TypeInfo->static_fields->__9 = (struct AssistMaster___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)AssistMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall AssistMaster___c___ctor(AssistMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall AssistMaster___c___FilterOverBoost_b__13_0(
        AssistMaster___c_o *this,
        AssistEntity_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1BC3264(this, 0LL);
  return item->fields.id;
}


bool __fastcall AssistMaster___c___FilterOverBoost_b__13_1(
        AssistMaster___c_o *this,
        AssistEntity_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  if ( !item )
    sub_1BC3264(this, 0LL);
  return AssistEntity__GetOverBoostQuestId(item, (const MethodInfo *)item) >= 1
      && AssistEntity__IsClearOverBoostQuest(item, v4);
}


bool __fastcall AssistMaster___c___FilterOverBoost_b__13_2(
        AssistMaster___c_o *this,
        AssistEntity_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1BC3264(this, 0LL);
  return AssistEntity__GetOverBoostQuestId(item, (const MethodInfo *)item) > 0;
}


bool __fastcall AssistMaster___c___FilterOverBoost_b__13_3(
        AssistMaster___c_o *this,
        AssistEntity_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1BC3264(this, 0LL);
  return AssistEntity__GetOverBoostQuestId(item, (const MethodInfo *)item) < 1;
}


AssistEntity_o *__fastcall AssistMaster___c___GetAvailableEntityList_b__8_0(
        AssistMaster___c_o *this,
        AssistEntity_o *e,
        const MethodInfo *method)
{
  return e;
}


int32_t __fastcall AssistMaster___c___GetCurrentEntity_b__2_0(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1BC3264(this, 0LL);
  return ent->fields.priority;
}


bool __fastcall AssistMaster___c___GetCurrentEntity_b__2_1(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1BC3264(this, 0LL);
  return AssistEntity__IsOpen(ent, (const MethodInfo *)ent);
}


int32_t __fastcall AssistMaster___c___GetCurrentLevelEntity_b__1_0(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1BC3264(this, 0LL);
  return ent->fields.lv;
}


bool __fastcall AssistMaster___c___GetCurrentLevelEntity_b__1_1(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1BC3264(this, 0LL);
  return AssistEntity__IsOpen(ent, (const MethodInfo *)ent);
}


int32_t __fastcall AssistMaster___c___GetMaxLevelEntity_b__5_0(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1BC3264(this, 0LL);
  return ent->fields.lv;
}


int32_t __fastcall AssistMaster___c___GetMinLevelEntity_b__6_0(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1BC3264(this, 0LL);
  return ent->fields.lv;
}


int32_t __fastcall AssistMaster___c___GetMinPriorityEntity_b__3_0(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1BC3264(this, 0LL);
  return ent->fields.priority;
}


void __fastcall AssistMaster___c__DisplayClass0_0___ctor(
        AssistMaster___c__DisplayClass0_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AssistMaster___c__DisplayClass0_0___GetEntityListFromAssistId_b__0(
        AssistMaster___c__DisplayClass0_0_o *this,
        AssistEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BC3264(this, 0LL);
  return entity->fields.id == this->fields.assistId;
}


void __fastcall AssistMaster___c__DisplayClass10_0___ctor(
        AssistMaster___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AssistMaster___c__DisplayClass10_0___GetStateUpPartsEntity_b__0(
        AssistMaster___c__DisplayClass10_0_o *this,
        AssistEntity_o *entity,
        const MethodInfo *method)
{
  AssistMaster___c__DisplayClass10_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  CommonReleaseEntity_array *List; // x0
  System_Func_object__bool__o *_9__1; // x22
  System_Object_array *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  v4 = this;
  if ( (byte_4B01C27 & 1) == 0 )
  {
    sub_1BC3008(&Method_BasicHelper_Any_CommonReleaseEntity___, entity);
    sub_1BC3008(&Method_DataManager_GetMaster_CommonReleaseMaster___, v5);
    sub_1BC3008(&DataManager_TypeInfo, v6);
    sub_1BC3008(&System_Func_CommonReleaseEntity__bool__TypeInfo, v7);
    this = (AssistMaster___c__DisplayClass10_0_o *)sub_1BC3008(
                                                     &Method_AssistMaster___c__DisplayClass10_0__GetStateUpPartsEntity_b__1__,
                                                     v8);
    byte_4B01C27 = 1;
  }
  if ( !entity )
    goto LABEL_13;
  if ( entity->fields.id != v4->fields.assistId || entity->fields.lv != v4->fields.currentLv )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (AssistMaster___c__DisplayClass10_0_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this )
LABEL_13:
    sub_1BC3264(this, entity);
  List = CommonReleaseMaster__getList((CommonReleaseMaster_o *)this, entity->fields.commonReleaseId, v9);
  _9__1 = (System_Func_object__bool__o *)v4->fields.__9__1;
  v12 = (System_Object_array *)List;
  if ( !_9__1 )
  {
    _9__1 = (System_Func_object__bool__o *)sub_1BC3254(System_Func_CommonReleaseEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_AssistMaster___c__DisplayClass10_0__GetStateUpPartsEntity_b__1__,
      0LL);
    v4->fields.__9__1 = (struct System_Func_CommonReleaseEntity__bool__o *)_9__1;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v13, v14);
  }
  return BasicHelper__Any_object__50246536(
           v12,
           (System_Func_T__bool__o *)_9__1,
           (const MethodInfo_2FEB388 *)Method_BasicHelper_Any_CommonReleaseEntity___);
}


bool __fastcall AssistMaster___c__DisplayClass10_0___GetStateUpPartsEntity_b__1(
        AssistMaster___c__DisplayClass10_0_o *this,
        CommonReleaseEntity_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_1BC3264(this, 0LL);
  return y->fields.condType == 35 && y->fields.condId == this->fields.shopId && y->fields.condNum == 1;
}


void __fastcall AssistMaster___c__DisplayClass4_0___ctor(
        AssistMaster___c__DisplayClass4_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall AssistMaster___c__DisplayClass4_0___GetAssistEntity_b__0(
        AssistMaster___c__DisplayClass4_0_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_1BC3264(this, 0LL);
  return ent->fields.lv == this->fields.lv;
}