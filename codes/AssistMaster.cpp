void AssistMaster___ctor(AssistMaster_o *this, const MethodInfo *method)
{
  if ( (byte_593825D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_AssistMaster__AssistEntity__string___ctor__);
    byte_593825D = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    364,
    (const MethodInfo_3EDFBF4 *)Method_DataMasterBase_AssistMaster__AssistEntity__string___ctor__);
}


System_Collections_Generic_List_AssistEntity__o *AssistMaster__FilterOverBoost(
        AssistMaster_o *this,
        System_Collections_Generic_List_AssistEntity__o *resultList,
        const MethodInfo *method)
{
  AssistMaster___c_c *v4; // x0
  struct AssistMaster___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__15_0; // x20
  Il2CppObject *v7; // x21
  struct AssistMaster___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v15; // x20
  System_Collections_Generic_List_object__o *v16; // x19
  __int64 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x20
  AssistMaster___c_c *v35; // x0
  struct AssistMaster___c_StaticFields *v36; // x8
  System_Func_object__bool__o *_9__15_1; // x21
  Il2CppObject *v38; // x22
  struct AssistMaster___c_StaticFields *v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  __int64 v46; // x1
  bool v47; // w8
  AssistMaster___c_c *v48; // x0
  int v49; // w9
  struct AssistMaster___c_StaticFields *v50; // x8
  System_Func_object__bool__o *_9__15_2; // x21
  Il2CppObject *v52; // x22
  struct AssistMaster___c_StaticFields *v53; // x0
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x0
  System_Collections_Generic_IEnumerable_T__o *v61; // x1
  struct AssistMaster___c_StaticFields *v62; // x8
  System_Func_object__bool__o *_9__15_3; // x21
  Il2CppObject *v64; // x22
  struct AssistMaster___c_StaticFields *v65; // x0
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x0
  __int64 v73; // x8
  __int64 v74; // x9
  int *v75; // x10
  __int64 v76; // x0
  __int64 v78; // [xsp+18h] [xbp-68h]

  if ( (byte_593825A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_AssistEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_GroupBy_AssistEntity__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_AssistEntity___);
    sub_21FFC50(&System_Func_AssistEntity__bool__TypeInfo);
    sub_21FFC50(&System_Func_AssistEntity__int__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_IGrouping_int__AssistEntity___TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_IGrouping_int__AssistEntity___TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_AssistEntity__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_AssistEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_AssistEntity__TypeInfo);
    sub_21FFC50(&Method_AssistMaster___c__FilterOverBoost_b__15_0__);
    sub_21FFC50(&Method_AssistMaster___c__FilterOverBoost_b__15_1__);
    sub_21FFC50(&Method_AssistMaster___c__FilterOverBoost_b__15_2__);
    sub_21FFC50(&Method_AssistMaster___c__FilterOverBoost_b__15_3__);
    sub_21FFC50(&AssistMaster___c_TypeInfo);
    byte_593825A = 1;
  }
  v4 = AssistMaster___c_TypeInfo;
  if ( !*(&AssistMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo, resultList);
    v4 = AssistMaster___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__15_0 = (System_Func_object__int__o *)static_fields->__9__15_0;
  if ( !_9__15_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, resultList);
      static_fields = AssistMaster___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__15_0 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_AssistEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__15_0, v7, Method_AssistMaster___c__FilterOverBoost_b__15_0__, 0);
    v8 = AssistMaster___c_TypeInfo->static_fields;
    v8->__9__15_0 = (struct System_Func_AssistEntity__int__o *)_9__15_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->__9__15_0, (int32_t)_9__15_0, v9, v10, v11, v12, v13, v14);
  }
  v15 = System_Linq_Enumerable__GroupBy_object__int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)resultList,
          (System_Func_TSource__TKey__o *)_9__15_0,
          (const MethodInfo_384FD10 *)Method_System_Linq_Enumerable_GroupBy_AssistEntity__int___);
  v16 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_AssistEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_AssistEntity___ctor__);
  if ( !v15 )
    sub_21FFECC(v17, v18);
  klass = v15->klass;
  v20 = *(unsigned __int16 *)&v15->klass->_2.rank;
  if ( *(_WORD *)&v15->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IGrouping_int__AssistEntity___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IGrouping_int__AssistEntity___TypeInfo )
    {
      --v20;
      p_offset += 4;
      if ( !v20 )
        goto LABEL_14;
    }
    v22 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_14:
    v22 = sub_2237E2C(v15, System_Collections_Generic_IEnumerable_IGrouping_int__AssistEntity___TypeInfo, 0);
  }
  v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *, _QWORD))v22)(
          v15,
          *(_QWORD *)(v22 + 8));
  v78 = v23;
  while ( 1 )
  {
    if ( !v78 )
      sub_21FFECC(v23, v24);
    v25 = *(_QWORD *)v78;
    v26 = *(unsigned __int16 *)(*(_QWORD *)v78 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v78 + 302LL) )
    {
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v27 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_22;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_22:
      v28 = sub_2237E2C(v78, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v78, *(_QWORD *)(v28 + 8)) & 1) == 0 )
      break;
    v29 = *(_QWORD *)v78;
    v30 = *(unsigned __int16 *)(*(_QWORD *)v78 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v78 + 302LL) )
    {
      v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IGrouping_int__AssistEntity___c **)v31 - 1) != System_Collections_Generic_IEnumerator_IGrouping_int__AssistEntity___TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_29;
      }
      v32 = v29 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_29:
      v32 = sub_2237E2C(v78, System_Collections_Generic_IEnumerator_IGrouping_int__AssistEntity___TypeInfo, 0);
    }
    v34 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v32)(
                                                                 v78,
                                                                 *(_QWORD *)(v32 + 8));
    v35 = AssistMaster___c_TypeInfo;
    if ( !*(&AssistMaster___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo, v33);
      v35 = AssistMaster___c_TypeInfo;
    }
    v36 = v35->static_fields;
    _9__15_1 = (System_Func_object__bool__o *)v36->__9__15_1;
    if ( !_9__15_1 )
    {
      if ( !*(&v35->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v35, v33);
        v36 = AssistMaster___c_TypeInfo->static_fields;
      }
      v38 = (Il2CppObject *)v36->__9;
      _9__15_1 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_AssistEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__15_1, v38, Method_AssistMaster___c__FilterOverBoost_b__15_1__, 0);
      v39 = AssistMaster___c_TypeInfo->static_fields;
      v39->__9__15_1 = (struct System_Func_AssistEntity__bool__o *)_9__15_1;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v39->__9__15_1, (int32_t)_9__15_1, v40, v41, v42, v43, v44, v45);
    }
    v47 = System_Linq_Enumerable__Any_object__58935448(
            v34,
            (System_Func_TSource__bool__o *)_9__15_1,
            (const MethodInfo_3834898 *)Method_System_Linq_Enumerable_Any_AssistEntity___);
    v48 = AssistMaster___c_TypeInfo;
    v49 = *(&AssistMaster___c_TypeInfo->_2.cctor_finished + 1);
    if ( v47 )
    {
      if ( !v49 )
      {
        j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo, v46);
        v48 = AssistMaster___c_TypeInfo;
      }
      v50 = v48->static_fields;
      _9__15_2 = (System_Func_object__bool__o *)v50->__9__15_2;
      if ( !_9__15_2 )
      {
        if ( !*(&v48->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v48, v46);
          v50 = AssistMaster___c_TypeInfo->static_fields;
        }
        v52 = (Il2CppObject *)v50->__9;
        _9__15_2 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_AssistEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__15_2, v52, Method_AssistMaster___c__FilterOverBoost_b__15_2__, 0);
        v53 = AssistMaster___c_TypeInfo->static_fields;
        v53->__9__15_2 = (struct System_Func_AssistEntity__bool__o *)_9__15_2;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v53->__9__15_2,
          (int32_t)_9__15_2,
          v54,
          v55,
          v56,
          v57,
          v58,
          v59);
      }
      v60 = System_Linq_Enumerable__Where_object_(
              v34,
              (System_Func_TSource__bool__o *)_9__15_2,
              (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_AssistEntity___);
      v61 = (System_Collections_Generic_IEnumerable_T__o *)v60;
      if ( !v16 )
        sub_21FFECC(v60, v60);
    }
    else
    {
      if ( !v49 )
      {
        j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo, v46);
        v48 = AssistMaster___c_TypeInfo;
      }
      v62 = v48->static_fields;
      _9__15_3 = (System_Func_object__bool__o *)v62->__9__15_3;
      if ( !_9__15_3 )
      {
        if ( !*(&v48->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v48, v46);
          v62 = AssistMaster___c_TypeInfo->static_fields;
        }
        v64 = (Il2CppObject *)v62->__9;
        _9__15_3 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_AssistEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__15_3, v64, Method_AssistMaster___c__FilterOverBoost_b__15_3__, 0);
        v65 = AssistMaster___c_TypeInfo->static_fields;
        v65->__9__15_3 = (struct System_Func_AssistEntity__bool__o *)_9__15_3;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v65->__9__15_3,
          (int32_t)_9__15_3,
          v66,
          v67,
          v68,
          v69,
          v70,
          v71);
      }
      v72 = System_Linq_Enumerable__Where_object_(
              v34,
              (System_Func_TSource__bool__o *)_9__15_3,
              (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_AssistEntity___);
      v61 = (System_Collections_Generic_IEnumerable_T__o *)v72;
      if ( !v16 )
        sub_21FFECC(v72, v72);
    }
    System_Collections_Generic_List_object___AddRange(
      v16,
      v61,
      (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_AssistEntity__AddRange__);
  }
  v73 = *(_QWORD *)v78;
  v74 = *(unsigned __int16 *)(*(_QWORD *)v78 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v78 + 302LL) )
  {
    v75 = (int *)(*(_QWORD *)(v73 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v75 - 1) != System_IDisposable_TypeInfo )
    {
      --v74;
      v75 += 4;
      if ( !v74 )
        goto LABEL_58;
    }
    v76 = v73 + 16LL * *v75 + 312;
  }
  else
  {
LABEL_58:
    v76 = sub_2237E2C(v78, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v76)(v78, *(_QWORD *)(v76 + 8));
  return (System_Collections_Generic_List_AssistEntity__o *)v16;
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

  if ( (byte_5938252 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____91525840);
    sub_21FFC50(&System_Func_AssistEntity__bool__TypeInfo);
    sub_21FFC50(&Method_AssistMaster___c__DisplayClass5_0__GetAssistEntity_b__0__);
    sub_21FFC50(&AssistMaster___c__DisplayClass5_0_TypeInfo);
    byte_5938252 = 1;
  }
  v7 = sub_21FFEBC(AssistMaster___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_21FFECC(v8, v9);
  *(_DWORD *)(v7 + 16) = lv;
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, v10);
  v12 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_AssistEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v7,
    Method_AssistMaster___c__DisplayClass5_0__GetAssistEntity_b__0__,
    0);
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__59044732(
                             (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId,
                             (System_Func_TSource__bool__o *)v12,
                             (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____91525840);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_AssistEntity__o *AssistMaster__GetAssistEntityListByShopGroupId(
        AssistMaster_o *this,
        int32_t shopGroupId,
        const MethodInfo *method)
{
  int v4; // w8
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  ShopGroupEntity_array *TargetEntityList; // x19
  Il2CppObject *v8; // x21
  System_Collections_Generic_List_object__o *v9; // x20
  int max_length; // w8
  unsigned int v11; // w25
  ShopGroupEntity_o *v12; // x8
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppObject *v22; // x1
  Il2CppClass **v23; // x0
  Il2CppObject *v24; // x21
  System_Collections_Generic_List_object__o *v25; // x19
  __int64 v26; // x1
  __int64 TargetId; // x0
  const MethodInfo *v28; // x2
  System_Collections_Generic_IEnumerable_T__o *EntityListFromAssistId; // x0
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_593825B & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_AssistMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ShopGroupMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ShopMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ShopEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ShopEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ShopEntity__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_AssistEntity__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_AssistEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_AssistEntity__TypeInfo);
    byte_593825B = 1;
  }
  v4 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  memset(&v31, 0, sizeof(v31));
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&shopGroupId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ShopGroupMaster___);
  if ( !Master_object )
    goto LABEL_28;
  TargetEntityList = ShopGroupMaster__GetTargetEntityList((ShopGroupMaster_o *)Master_object, shopGroupId, 0);
  v8 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ShopMaster___);
  v9 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  if ( !TargetEntityList )
    goto LABEL_28;
  max_length = TargetEntityList->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
        sub_21FFED4(Master_object);
      v12 = TargetEntityList->m_Items[v11];
      if ( !v12 )
        break;
      if ( !v8 )
        break;
      Master_object = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)v8,
                        v12->fields.shopId,
                        (const MethodInfo_3EDD388 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
      if ( !v9 )
        break;
      items = v9->fields._items;
      v20 = Method_System_Collections_Generic_List_ShopEntity__Add__;
      ++v9->fields._version;
      if ( !items )
        break;
      size = v9->fields._size;
      v22 = Master_object;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v9,
          Master_object,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        v9->fields._size = size + 1;
        v23[4] = (Il2CppClass *)v22;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v23 + 4), (int32_t)v22, v13, v14, v15, v16, v17, v18);
      }
      max_length = TargetEntityList->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_18;
    }
LABEL_28:
    sub_21FFECC(Master_object, v6);
  }
LABEL_18:
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v6);
  v24 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_AssistMaster___);
  v25 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_AssistEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_AssistEntity___ctor__);
  if ( !v9 )
    goto LABEL_28;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    v9,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ShopEntity__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ShopEntity__MoveNext__) )
  {
    if ( !v31.fields._current )
      sub_21FFECC(0, v26);
    TargetId = ShopEntity__get_TargetId((ShopEntity_o *)v31.fields._current, 0);
    if ( !v24 )
      sub_21FFECC(TargetId, (unsigned int)TargetId);
    EntityListFromAssistId = (System_Collections_Generic_IEnumerable_T__o *)AssistMaster__GetEntityListFromAssistId(
                                                                              (AssistMaster_o *)v24,
                                                                              TargetId,
                                                                              v28);
    if ( !v25 )
      sub_21FFECC(EntityListFromAssistId, EntityListFromAssistId);
    System_Collections_Generic_List_object___AddRange(
      v25,
      EntityListFromAssistId,
      (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_AssistEntity__AddRange__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ShopEntity__Dispose__);
  return (System_Collections_Generic_List_AssistEntity__o *)v25;
}


System_Collections_Generic_List_AssistEntity__o *AssistMaster__GetAvailableEntityList(
        AssistMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  AssistMaster___c_c *v5; // x0
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x21
  struct AssistMaster___c_StaticFields *static_fields; // x8
  System_Converter_TInput__TOutput__o *_9__9_0; // x22
  Il2CppObject *v9; // x23
  struct AssistMaster___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_List_TOutput__o *v17; // x21
  Il2CppObject *v18; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x21
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 i; // x21
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  __int64 v39; // x0
  __int64 v40; // x1
  const MethodInfo *v41; // x2
  Il2CppObject *CurrentLevelEntity; // x0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  Il2CppObject *v49; // x1
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  Il2CppClass **v53; // x0
  __int64 v54; // x8
  __int64 v55; // x9
  int *v56; // x10
  __int64 v57; // x0
  __int64 v59; // [xsp+18h] [xbp-58h]

  if ( (byte_5938255 & 1) == 0 )
  {
    sub_21FFC50(&AssistMaster_AssistIdComparer_TypeInfo);
    sub_21FFC50(&System_Converter_AssistEntity__AssistEntity__TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Distinct_AssistEntity___);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_AssistEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_AssistEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_AssistEntity__TypeInfo);
    sub_21FFC50(&Method_ObservableCollectionExtensions_ConvertAll_AssistEntity__AssistEntity___);
    sub_21FFC50(&Method_AssistMaster___c__GetAvailableEntityList_b__9_0__);
    sub_21FFC50(&AssistMaster___c_TypeInfo);
    byte_5938255 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_AssistEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_AssistEntity___ctor__);
  v5 = AssistMaster___c_TypeInfo;
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  if ( !*(&AssistMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo, v4);
    v5 = AssistMaster___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__9_0 = (System_Converter_TInput__TOutput__o *)static_fields->__9__9_0;
  if ( !_9__9_0 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, v4);
      static_fields = AssistMaster___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__9_0 = (System_Converter_TInput__TOutput__o *)sub_21FFEBC(System_Converter_AssistEntity__AssistEntity__TypeInfo);
    System_Converter_object__object____ctor(_9__9_0, v9, Method_AssistMaster___c__GetAvailableEntityList_b__9_0__, 0);
    v10 = AssistMaster___c_TypeInfo->static_fields;
    v10->__9__9_0 = (struct System_Converter_AssistEntity__AssistEntity__o *)_9__9_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v10->__9__9_0, (int32_t)_9__9_0, v11, v12, v13, v14, v15, v16);
  }
  v17 = ObservableCollectionExtensions__ConvertAll_object__object_(
          list,
          (System_Converter_T__TOutput__o *)_9__9_0,
          (const MethodInfo_38C0A74 *)Method_ObservableCollectionExtensions_ConvertAll_AssistEntity__AssistEntity___);
  v18 = (Il2CppObject *)sub_21FFEBC(AssistMaster_AssistIdComparer_TypeInfo);
  System_Object___ctor(v18, 0);
  v19 = System_Linq_Enumerable__Distinct_object__59020020(
          (System_Collections_Generic_IEnumerable_TSource__o *)v17,
          (System_Collections_Generic_IEqualityComparer_TSource__o *)v18,
          (const MethodInfo_38492F4 *)Method_System_Linq_Enumerable_Distinct_AssistEntity___);
  if ( !v19 )
    sub_21FFECC(0, v20);
  klass = v19->klass;
  v22 = v19;
  v23 = *(unsigned __int16 *)&v19->klass->_2.rank;
  if ( *(_WORD *)&v19->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_AssistEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo )
    {
      --v23;
      p_offset += 4;
      if ( !v23 )
        goto LABEL_14;
    }
    v25 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_14:
    v25 = sub_2237E2C(v19, System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo, 0);
  }
  v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v25)(
          v22,
          *(_QWORD *)(v25 + 8));
  v59 = v26;
  if ( !v26 )
    sub_21FFECC(v26, v27);
  for ( i = v26; ; i = v59 )
  {
    v29 = *(_QWORD *)i;
    v30 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
    if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
    {
      v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v31 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_22;
      }
      v32 = v29 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_22:
      v32 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v33 = (*(__int64 (__fastcall **)(__int64, _QWORD))v32)(i, *(_QWORD *)(v32 + 8));
    if ( (v33 & 1) == 0 )
      break;
    if ( !v59 )
      sub_21FFECC(v33, v34);
    v35 = *(_QWORD *)v59;
    v36 = *(unsigned __int16 *)(*(_QWORD *)v59 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v59 + 302LL) )
    {
      v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_AssistEntity__c **)v37 - 1) != System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_30;
      }
      v38 = v35 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_30:
      v38 = sub_2237E2C(v59, System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo, 0);
    }
    v39 = (*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v59, *(_QWORD *)(v38 + 8));
    if ( !v39 )
      sub_21FFECC(0, v40);
    CurrentLevelEntity = (Il2CppObject *)AssistMaster__GetCurrentLevelEntity(this, *(_DWORD *)(v39 + 16), v41);
    v49 = CurrentLevelEntity;
    if ( CurrentLevelEntity )
    {
      if ( !v3
        || (items = v3->fields._items,
            v51 = Method_System_Collections_Generic_List_AssistEntity__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_21FFECC(CurrentLevelEntity, CurrentLevelEntity);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          CurrentLevelEntity,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
      }
      else
      {
        v53 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v53[4] = (Il2CppClass *)v49;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v53 + 4), (int32_t)v49, v43, v44, v45, v46, v47, v48);
      }
    }
  }
  if ( v59 )
  {
    v54 = *(_QWORD *)v59;
    v55 = *(unsigned __int16 *)(*(_QWORD *)v59 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v59 + 302LL) )
    {
      v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v56 - 1) != System_IDisposable_TypeInfo )
      {
        --v55;
        v56 += 4;
        if ( !v55 )
          goto LABEL_46;
      }
      v57 = v54 + 16LL * *v56 + 312;
    }
    else
    {
LABEL_46:
      v57 = sub_2237E2C(v59, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v57)(v59, *(_QWORD *)(v57 + 8));
  }
  return (System_Collections_Generic_List_AssistEntity__o *)v3;
}


AssistEntity_o *AssistMaster__GetCurrentEntity(AssistMaster_o *this, int32_t assistId, const MethodInfo *method)
{
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x0
  __int64 v6; // x1
  AssistMaster___c_c *v7; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x19
  struct AssistMaster___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__3_0; // x20
  Il2CppObject *v11; // x21
  struct AssistMaster___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v19; // x0
  __int64 v20; // x1
  AssistMaster___c_c *v21; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x19
  struct AssistMaster___c_StaticFields *v23; // x9
  System_Func_object__bool__o *_9__3_1; // x20
  Il2CppObject *v25; // x21
  struct AssistMaster___c_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7

  if ( (byte_5938250 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____91525840);
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
    sub_21FFC50(&System_Func_AssistEntity__bool__TypeInfo);
    sub_21FFC50(&System_Func_AssistEntity__int__TypeInfo);
    sub_21FFC50(&Method_AssistMaster___c__GetCurrentEntity_b__3_0__);
    sub_21FFC50(&Method_AssistMaster___c__GetCurrentEntity_b__3_1__);
    sub_21FFC50(&AssistMaster___c_TypeInfo);
    byte_5938250 = 1;
  }
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, method);
  v7 = AssistMaster___c_TypeInfo;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId;
  if ( !*(&AssistMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo, v6);
    v7 = AssistMaster___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__3_0 = (System_Func_object__int__o *)static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, v6);
      static_fields = AssistMaster___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__3_0 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_AssistEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__3_0, v11, Method_AssistMaster___c__GetCurrentEntity_b__3_0__, 0);
    v12 = AssistMaster___c_TypeInfo->static_fields;
    v12->__9__3_0 = (struct System_Func_AssistEntity__int__o *)_9__3_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v12->__9__3_0, (int32_t)_9__3_0, v13, v14, v15, v16, v17, v18);
  }
  v19 = System_Linq_Enumerable__OrderByDescending_object__int_(
          v8,
          (System_Func_TSource__TKey__o *)_9__3_0,
          (const MethodInfo_3855CFC *)Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
  v21 = AssistMaster___c_TypeInfo;
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)v19;
  if ( !*(&AssistMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo, v20);
    v21 = AssistMaster___c_TypeInfo;
  }
  v23 = v21->static_fields;
  _9__3_1 = (System_Func_object__bool__o *)v23->__9__3_1;
  if ( !_9__3_1 )
  {
    if ( !*(&v21->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v21, v20);
      v23 = AssistMaster___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)v23->__9;
    _9__3_1 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_AssistEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__3_1, v25, Method_AssistMaster___c__GetCurrentEntity_b__3_1__, 0);
    v26 = AssistMaster___c_TypeInfo->static_fields;
    v26->__9__3_1 = (struct System_Func_AssistEntity__bool__o *)_9__3_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v26->__9__3_1, (int32_t)_9__3_1, v27, v28, v29, v30, v31, v32);
  }
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__59044732(
                             v22,
                             (System_Func_TSource__bool__o *)_9__3_1,
                             (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____91525840);
}


AssistEntity_o *AssistMaster__GetCurrentLevelAndPriorityEntity(
        AssistMaster_o *this,
        int32_t assistId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x0
  __int64 v6; // x1
  AssistMaster___c_c *v7; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x19
  struct AssistMaster___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__2_0; // x20
  Il2CppObject *v11; // x21
  struct AssistMaster___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v19; // x0
  __int64 v20; // x1
  AssistMaster___c_c *v21; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v22; // x19
  struct AssistMaster___c_StaticFields *v23; // x9
  System_Func_object__int__o *_9__2_1; // x20
  Il2CppObject *v25; // x21
  struct AssistMaster___c_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v33; // x0
  __int64 v34; // x1
  AssistMaster___c_c *v35; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x19
  struct AssistMaster___c_StaticFields *v37; // x9
  System_Func_object__bool__o *_9__2_2; // x20
  Il2CppObject *v39; // x21
  struct AssistMaster___c_StaticFields *v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7

  if ( (byte_593824F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____91525840);
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ThenByDescending_AssistEntity__int___);
    sub_21FFC50(&System_Func_AssistEntity__bool__TypeInfo);
    sub_21FFC50(&System_Func_AssistEntity__int__TypeInfo);
    sub_21FFC50(&Method_AssistMaster___c__GetCurrentLevelAndPriorityEntity_b__2_0__);
    sub_21FFC50(&Method_AssistMaster___c__GetCurrentLevelAndPriorityEntity_b__2_1__);
    sub_21FFC50(&Method_AssistMaster___c__GetCurrentLevelAndPriorityEntity_b__2_2__);
    sub_21FFC50(&AssistMaster___c_TypeInfo);
    byte_593824F = 1;
  }
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, method);
  v7 = AssistMaster___c_TypeInfo;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId;
  if ( !*(&AssistMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo, v6);
    v7 = AssistMaster___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__2_0 = (System_Func_object__int__o *)static_fields->__9__2_0;
  if ( !_9__2_0 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, v6);
      static_fields = AssistMaster___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__2_0 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_AssistEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__2_0, v11, Method_AssistMaster___c__GetCurrentLevelAndPriorityEntity_b__2_0__, 0);
    v12 = AssistMaster___c_TypeInfo->static_fields;
    v12->__9__2_0 = (struct System_Func_AssistEntity__int__o *)_9__2_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v12->__9__2_0, (int32_t)_9__2_0, v13, v14, v15, v16, v17, v18);
  }
  v19 = System_Linq_Enumerable__OrderByDescending_object__int_(
          v8,
          (System_Func_TSource__TKey__o *)_9__2_0,
          (const MethodInfo_3855CFC *)Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
  v21 = AssistMaster___c_TypeInfo;
  v22 = v19;
  if ( !*(&AssistMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo, v20);
    v21 = AssistMaster___c_TypeInfo;
  }
  v23 = v21->static_fields;
  _9__2_1 = (System_Func_object__int__o *)v23->__9__2_1;
  if ( !_9__2_1 )
  {
    if ( !*(&v21->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v21, v20);
      v23 = AssistMaster___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)v23->__9;
    _9__2_1 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_AssistEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__2_1, v25, Method_AssistMaster___c__GetCurrentLevelAndPriorityEntity_b__2_1__, 0);
    v26 = AssistMaster___c_TypeInfo->static_fields;
    v26->__9__2_1 = (struct System_Func_AssistEntity__int__o *)_9__2_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v26->__9__2_1, (int32_t)_9__2_1, v27, v28, v29, v30, v31, v32);
  }
  v33 = System_Linq_Enumerable__ThenByDescending_object__int_(
          v22,
          (System_Func_TSource__TKey__o *)_9__2_1,
          (const MethodInfo_3867EF4 *)Method_System_Linq_Enumerable_ThenByDescending_AssistEntity__int___);
  v35 = AssistMaster___c_TypeInfo;
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)v33;
  if ( !*(&AssistMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo, v34);
    v35 = AssistMaster___c_TypeInfo;
  }
  v37 = v35->static_fields;
  _9__2_2 = (System_Func_object__bool__o *)v37->__9__2_2;
  if ( !_9__2_2 )
  {
    if ( !*(&v35->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v35, v34);
      v37 = AssistMaster___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)v37->__9;
    _9__2_2 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_AssistEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__2_2,
      v39,
      Method_AssistMaster___c__GetCurrentLevelAndPriorityEntity_b__2_2__,
      0);
    v40 = AssistMaster___c_TypeInfo->static_fields;
    v40->__9__2_2 = (struct System_Func_AssistEntity__bool__o *)_9__2_2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v40->__9__2_2, (int32_t)_9__2_2, v41, v42, v43, v44, v45, v46);
  }
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__59044732(
                             v36,
                             (System_Func_TSource__bool__o *)_9__2_2,
                             (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____91525840);
}


System_Collections_Generic_List_AssistEntity__o *AssistMaster__GetCurrentLevelAndPriorityEntityList(
        AssistMaster_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  AssistMaster___c_c *v5; // x0
  System_Collections_ObjectModel_ObservableCollection_T__o *list; // x21
  struct AssistMaster___c_StaticFields *static_fields; // x8
  System_Converter_TInput__TOutput__o *_9__10_0; // x22
  Il2CppObject *v9; // x23
  struct AssistMaster___c_StaticFields *v10; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_List_TOutput__o *v17; // x21
  Il2CppObject *v18; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x21
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 i; // x21
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x0
  __int64 v34; // x1
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  __int64 v39; // x0
  __int64 v40; // x1
  const MethodInfo *v41; // x2
  Il2CppObject *CurrentLevelAndPriorityEntity; // x0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  Il2CppObject *v49; // x1
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  Il2CppClass **v53; // x0
  __int64 v54; // x8
  __int64 v55; // x9
  int *v56; // x10
  __int64 v57; // x0
  __int64 v59; // [xsp+18h] [xbp-58h]

  if ( (byte_5938256 & 1) == 0 )
  {
    sub_21FFC50(&AssistMaster_AssistIdComparer_TypeInfo);
    sub_21FFC50(&System_Converter_AssistEntity__AssistEntity__TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Distinct_AssistEntity___);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_AssistEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_AssistEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_AssistEntity__TypeInfo);
    sub_21FFC50(&Method_ObservableCollectionExtensions_ConvertAll_AssistEntity__AssistEntity___);
    sub_21FFC50(&Method_AssistMaster___c__GetCurrentLevelAndPriorityEntityList_b__10_0__);
    sub_21FFC50(&AssistMaster___c_TypeInfo);
    byte_5938256 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_AssistEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_AssistEntity___ctor__);
  v5 = AssistMaster___c_TypeInfo;
  list = (System_Collections_ObjectModel_ObservableCollection_T__o *)this->fields.list;
  if ( !*(&AssistMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo, v4);
    v5 = AssistMaster___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__10_0 = (System_Converter_TInput__TOutput__o *)static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !*(&v5->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v5, v4);
      static_fields = AssistMaster___c_TypeInfo->static_fields;
    }
    v9 = (Il2CppObject *)static_fields->__9;
    _9__10_0 = (System_Converter_TInput__TOutput__o *)sub_21FFEBC(System_Converter_AssistEntity__AssistEntity__TypeInfo);
    System_Converter_object__object____ctor(
      _9__10_0,
      v9,
      Method_AssistMaster___c__GetCurrentLevelAndPriorityEntityList_b__10_0__,
      0);
    v10 = AssistMaster___c_TypeInfo->static_fields;
    v10->__9__10_0 = (struct System_Converter_AssistEntity__AssistEntity__o *)_9__10_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v10->__9__10_0, (int32_t)_9__10_0, v11, v12, v13, v14, v15, v16);
  }
  v17 = ObservableCollectionExtensions__ConvertAll_object__object_(
          list,
          (System_Converter_T__TOutput__o *)_9__10_0,
          (const MethodInfo_38C0A74 *)Method_ObservableCollectionExtensions_ConvertAll_AssistEntity__AssistEntity___);
  v18 = (Il2CppObject *)sub_21FFEBC(AssistMaster_AssistIdComparer_TypeInfo);
  System_Object___ctor(v18, 0);
  v19 = System_Linq_Enumerable__Distinct_object__59020020(
          (System_Collections_Generic_IEnumerable_TSource__o *)v17,
          (System_Collections_Generic_IEqualityComparer_TSource__o *)v18,
          (const MethodInfo_38492F4 *)Method_System_Linq_Enumerable_Distinct_AssistEntity___);
  if ( !v19 )
    sub_21FFECC(0, v20);
  klass = v19->klass;
  v22 = v19;
  v23 = *(unsigned __int16 *)&v19->klass->_2.rank;
  if ( *(_WORD *)&v19->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_AssistEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo )
    {
      --v23;
      p_offset += 4;
      if ( !v23 )
        goto LABEL_14;
    }
    v25 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_14:
    v25 = sub_2237E2C(v19, System_Collections_Generic_IEnumerable_AssistEntity__TypeInfo, 0);
  }
  v26 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v25)(
          v22,
          *(_QWORD *)(v25 + 8));
  v59 = v26;
  if ( !v26 )
    sub_21FFECC(v26, v27);
  for ( i = v26; ; i = v59 )
  {
    v29 = *(_QWORD *)i;
    v30 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
    if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
    {
      v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v31 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_22;
      }
      v32 = v29 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_22:
      v32 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v33 = (*(__int64 (__fastcall **)(__int64, _QWORD))v32)(i, *(_QWORD *)(v32 + 8));
    if ( (v33 & 1) == 0 )
      break;
    if ( !v59 )
      sub_21FFECC(v33, v34);
    v35 = *(_QWORD *)v59;
    v36 = *(unsigned __int16 *)(*(_QWORD *)v59 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v59 + 302LL) )
    {
      v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_AssistEntity__c **)v37 - 1) != System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_30;
      }
      v38 = v35 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_30:
      v38 = sub_2237E2C(v59, System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo, 0);
    }
    v39 = (*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v59, *(_QWORD *)(v38 + 8));
    if ( !v39 )
      sub_21FFECC(0, v40);
    CurrentLevelAndPriorityEntity = (Il2CppObject *)AssistMaster__GetCurrentLevelAndPriorityEntity(
                                                      this,
                                                      *(_DWORD *)(v39 + 16),
                                                      v41);
    v49 = CurrentLevelAndPriorityEntity;
    if ( CurrentLevelAndPriorityEntity )
    {
      if ( !v3
        || (items = v3->fields._items,
            v51 = Method_System_Collections_Generic_List_AssistEntity__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_21FFECC(CurrentLevelAndPriorityEntity, CurrentLevelAndPriorityEntity);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          CurrentLevelAndPriorityEntity,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
      }
      else
      {
        v53 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v53[4] = (Il2CppClass *)v49;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v53 + 4), (int32_t)v49, v43, v44, v45, v46, v47, v48);
      }
    }
  }
  if ( v59 )
  {
    v54 = *(_QWORD *)v59;
    v55 = *(unsigned __int16 *)(*(_QWORD *)v59 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v59 + 302LL) )
    {
      v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v56 - 1) != System_IDisposable_TypeInfo )
      {
        --v55;
        v56 += 4;
        if ( !v55 )
          goto LABEL_46;
      }
      v57 = v54 + 16LL * *v56 + 312;
    }
    else
    {
LABEL_46:
      v57 = sub_2237E2C(v59, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v57)(v59, *(_QWORD *)(v57 + 8));
  }
  return (System_Collections_Generic_List_AssistEntity__o *)v3;
}


AssistEntity_o *AssistMaster__GetCurrentLevelEntity(AssistMaster_o *this, int32_t assistId, const MethodInfo *method)
{
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x0
  __int64 v6; // x1
  AssistMaster___c_c *v7; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x19
  struct AssistMaster___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__1_0; // x20
  Il2CppObject *v11; // x21
  struct AssistMaster___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v19; // x0
  __int64 v20; // x1
  AssistMaster___c_c *v21; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x19
  struct AssistMaster___c_StaticFields *v23; // x9
  System_Func_object__bool__o *_9__1_1; // x20
  Il2CppObject *v25; // x21
  struct AssistMaster___c_StaticFields *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7

  if ( (byte_593824E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____91525840);
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
    sub_21FFC50(&System_Func_AssistEntity__bool__TypeInfo);
    sub_21FFC50(&System_Func_AssistEntity__int__TypeInfo);
    sub_21FFC50(&Method_AssistMaster___c__GetCurrentLevelEntity_b__1_0__);
    sub_21FFC50(&Method_AssistMaster___c__GetCurrentLevelEntity_b__1_1__);
    sub_21FFC50(&AssistMaster___c_TypeInfo);
    byte_593824E = 1;
  }
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, method);
  v7 = AssistMaster___c_TypeInfo;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId;
  if ( !*(&AssistMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo, v6);
    v7 = AssistMaster___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__1_0 = (System_Func_object__int__o *)static_fields->__9__1_0;
  if ( !_9__1_0 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, v6);
      static_fields = AssistMaster___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__1_0 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_AssistEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__1_0, v11, Method_AssistMaster___c__GetCurrentLevelEntity_b__1_0__, 0);
    v12 = AssistMaster___c_TypeInfo->static_fields;
    v12->__9__1_0 = (struct System_Func_AssistEntity__int__o *)_9__1_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v12->__9__1_0, (int32_t)_9__1_0, v13, v14, v15, v16, v17, v18);
  }
  v19 = System_Linq_Enumerable__OrderByDescending_object__int_(
          v8,
          (System_Func_TSource__TKey__o *)_9__1_0,
          (const MethodInfo_3855CFC *)Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
  v21 = AssistMaster___c_TypeInfo;
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)v19;
  if ( !*(&AssistMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo, v20);
    v21 = AssistMaster___c_TypeInfo;
  }
  v23 = v21->static_fields;
  _9__1_1 = (System_Func_object__bool__o *)v23->__9__1_1;
  if ( !_9__1_1 )
  {
    if ( !*(&v21->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v21, v20);
      v23 = AssistMaster___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)v23->__9;
    _9__1_1 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_AssistEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__1_1, v25, Method_AssistMaster___c__GetCurrentLevelEntity_b__1_1__, 0);
    v26 = AssistMaster___c_TypeInfo->static_fields;
    v26->__9__1_1 = (struct System_Func_AssistEntity__bool__o *)_9__1_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v26->__9__1_1, (int32_t)_9__1_1, v27, v28, v29, v30, v31, v32);
  }
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__59044732(
                             v22,
                             (System_Func_TSource__bool__o *)_9__1_1,
                             (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____91525840);
}


// local variable allocation has failed, the output may be wrong!
AssistEntity_o *AssistMaster__GetEntity(AssistMaster_o *this, int32_t id, int32_t priority, const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_593825E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_AssistMaster__AssistEntity__string__GetEntity__);
    byte_593825E = 1;
  }
  PK = (Il2CppObject *)AssistEntity__CreatePK(id, priority, *(const MethodInfo **)&priority);
  return (AssistEntity_o *)DataMasterBase_object__object__object___GetEntity(
                             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                             PK,
                             (const MethodInfo_3EE2044 *)Method_DataMasterBase_AssistMaster__AssistEntity__string__GetEntity__);
}


System_Collections_Generic_List_AssistEntity__o *AssistMaster__GetEntityListFromAssistId(
        AssistMaster_o *this,
        int32_t assistId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_ObjectModel_ObservableCollection_TEntity__o *list; // x20
  System_Func_AssistEntity__bool__c *v9; // x0
  System_Func_object__bool__o *v10; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0

  if ( (byte_593824D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_AssistEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_AssistEntity___);
    sub_21FFC50(&System_Func_AssistEntity__bool__TypeInfo);
    sub_21FFC50(&Method_AssistMaster___c__DisplayClass0_0__GetEntityListFromAssistId_b__0__);
    sub_21FFC50(&AssistMaster___c__DisplayClass0_0_TypeInfo);
    byte_593824D = 1;
  }
  v5 = sub_21FFEBC(AssistMaster___c__DisplayClass0_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  list = this->fields.list;
  v9 = System_Func_AssistEntity__bool__TypeInfo;
  *(_DWORD *)(v5 + 16) = assistId;
  v10 = (System_Func_object__bool__o *)sub_21FFEBC(v9);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_AssistMaster___c__DisplayClass0_0__GetEntityListFromAssistId_b__0__,
    0);
  v11 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)list,
          (System_Func_TSource__bool__o *)v10,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_AssistEntity___);
  return (System_Collections_Generic_List_AssistEntity__o *)System_Linq_Enumerable__ToList_object_(
                                                              v11,
                                                              (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_AssistEntity___);
}


AssistEntity_o *AssistMaster__GetMaxLevelEntity(AssistMaster_o *this, int32_t assistId, const MethodInfo *method)
{
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x0
  __int64 v6; // x1
  AssistMaster___c_c *v7; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x19
  struct AssistMaster___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__6_0; // x20
  Il2CppObject *v11; // x21
  struct AssistMaster___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0

  if ( (byte_5938253 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
    sub_21FFC50(&System_Func_AssistEntity__int__TypeInfo);
    sub_21FFC50(&Method_AssistMaster___c__GetMaxLevelEntity_b__6_0__);
    sub_21FFC50(&AssistMaster___c_TypeInfo);
    byte_5938253 = 1;
  }
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, method);
  v7 = AssistMaster___c_TypeInfo;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId;
  if ( !*(&AssistMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo, v6);
    v7 = AssistMaster___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__6_0 = (System_Func_object__int__o *)static_fields->__9__6_0;
  if ( !_9__6_0 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, v6);
      static_fields = AssistMaster___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__6_0 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_AssistEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__6_0, v11, Method_AssistMaster___c__GetMaxLevelEntity_b__6_0__, 0);
    v12 = AssistMaster___c_TypeInfo->static_fields;
    v12->__9__6_0 = (struct System_Func_AssistEntity__int__o *)_9__6_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v12->__9__6_0, (int32_t)_9__6_0, v13, v14, v15, v16, v17, v18);
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               v8,
                                                               (System_Func_TSource__TKey__o *)_9__6_0,
                                                               (const MethodInfo_3855CFC *)Method_System_Linq_Enumerable_OrderByDescending_AssistEntity__int___);
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                             v19,
                             (const MethodInfo_384E0B0 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___);
}


AssistEntity_o *AssistMaster__GetMinLevelEntity(AssistMaster_o *this, int32_t assistId, const MethodInfo *method)
{
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x0
  __int64 v6; // x1
  AssistMaster___c_c *v7; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x19
  struct AssistMaster___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__7_0; // x20
  Il2CppObject *v11; // x21
  struct AssistMaster___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0

  if ( (byte_5938254 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderBy_AssistEntity__int___);
    sub_21FFC50(&System_Func_AssistEntity__int__TypeInfo);
    sub_21FFC50(&Method_AssistMaster___c__GetMinLevelEntity_b__7_0__);
    sub_21FFC50(&AssistMaster___c_TypeInfo);
    byte_5938254 = 1;
  }
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, method);
  v7 = AssistMaster___c_TypeInfo;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId;
  if ( !*(&AssistMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo, v6);
    v7 = AssistMaster___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__7_0 = (System_Func_object__int__o *)static_fields->__9__7_0;
  if ( !_9__7_0 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, v6);
      static_fields = AssistMaster___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__7_0 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_AssistEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__7_0, v11, Method_AssistMaster___c__GetMinLevelEntity_b__7_0__, 0);
    v12 = AssistMaster___c_TypeInfo->static_fields;
    v12->__9__7_0 = (struct System_Func_AssistEntity__int__o *)_9__7_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v12->__9__7_0, (int32_t)_9__7_0, v13, v14, v15, v16, v17, v18);
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v8,
                                                               (System_Func_TSource__TKey__o *)_9__7_0,
                                                               (const MethodInfo_38556D8 *)Method_System_Linq_Enumerable_OrderBy_AssistEntity__int___);
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                             v19,
                             (const MethodInfo_384E0B0 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___);
}


AssistEntity_o *AssistMaster__GetMinPriorityEntity(AssistMaster_o *this, int32_t assistId, const MethodInfo *method)
{
  System_Collections_Generic_List_AssistEntity__o *EntityListFromAssistId; // x0
  __int64 v6; // x1
  AssistMaster___c_c *v7; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x19
  struct AssistMaster___c_StaticFields *static_fields; // x9
  System_Func_object__int__o *_9__4_0; // x20
  Il2CppObject *v11; // x21
  struct AssistMaster___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0

  if ( (byte_5938251 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___);
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderBy_AssistEntity__int___);
    sub_21FFC50(&System_Func_AssistEntity__int__TypeInfo);
    sub_21FFC50(&Method_AssistMaster___c__GetMinPriorityEntity_b__4_0__);
    sub_21FFC50(&AssistMaster___c_TypeInfo);
    byte_5938251 = 1;
  }
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, method);
  v7 = AssistMaster___c_TypeInfo;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId;
  if ( !*(&AssistMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AssistMaster___c_TypeInfo, v6);
    v7 = AssistMaster___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__4_0 = (System_Func_object__int__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, v6);
      static_fields = AssistMaster___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_AssistEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__4_0, v11, Method_AssistMaster___c__GetMinPriorityEntity_b__4_0__, 0);
    v12 = AssistMaster___c_TypeInfo->static_fields;
    v12->__9__4_0 = (struct System_Func_AssistEntity__int__o *)_9__4_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v12->__9__4_0, (int32_t)_9__4_0, v13, v14, v15, v16, v17, v18);
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v8,
                                                               (System_Func_TSource__TKey__o *)_9__4_0,
                                                               (const MethodInfo_38556D8 *)Method_System_Linq_Enumerable_OrderBy_AssistEntity__int___);
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                             v19,
                             (const MethodInfo_384E0B0 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___);
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
      sub_21FFECC(0, v15);
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

  if ( (byte_5938258 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____91525840);
    sub_21FFC50(&System_Func_AssistEntity__bool__TypeInfo);
    sub_21FFC50(&Method_AssistMaster___c__DisplayClass12_0__GetStateUpPartsEntity_b__0__);
    sub_21FFC50(&AssistMaster___c__DisplayClass12_0_TypeInfo);
    byte_5938258 = 1;
  }
  v9 = sub_21FFEBC(AssistMaster___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_21FFECC(v10, v11);
  *(_DWORD *)(v9 + 16) = assistId;
  *(_DWORD *)(v9 + 20) = currentLv;
  *(_DWORD *)(v9 + 24) = shopId;
  EntityListFromAssistId = AssistMaster__GetEntityListFromAssistId(this, assistId, v12);
  v14 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_AssistEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_AssistMaster___c__DisplayClass12_0__GetStateUpPartsEntity_b__0__,
    0);
  return (AssistEntity_o *)System_Linq_Enumerable__FirstOrDefault_object__59044732(
                             (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromAssistId,
                             (System_Func_TSource__bool__o *)v14,
                             (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity____91525840);
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

  if ( (byte_593825F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_AssistMaster__AssistEntity__string__TryGetEntity__);
    byte_593825F = 1;
  }
  PK = (Il2CppObject *)AssistEntity__CreatePK(id, priority, *(const MethodInfo **)&id);
  return DataMasterBase_object__object__object___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           (Il2CppObject **)entity,
           PK,
           (const MethodInfo_3EE2090 *)Method_DataMasterBase_AssistMaster__AssistEntity__string__TryGetEntity__);
}


// local variable allocation has failed, the output may be wrong!
bool AssistMaster__TryGetUnclearedAssistEntity(
        AssistMaster_o *this,
        AssistEntity_o **assistEntity,
        int32_t questId,
        bool isQuestClear,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  Il2CppObject *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Collections_Generic_List_AssistEntity__o *resultList; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_593825C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___);
    sub_21FFC50(&int___TypeInfo);
    byte_593825C = 1;
  }
  resultList = 0;
  *assistEntity = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)assistEntity,
    0,
    *(System_String_o **)&questId,
    (System_String_o *)isQuestClear,
    (int32_t)method,
    v5,
    v6,
    v7);
  if ( isQuestClear )
    return 0;
  v12 = sub_21FFD10(int___TypeInfo, 1);
  if ( !v12 )
    sub_21FFECC(0, v13);
  if ( !*(_DWORD *)(v12 + 24) )
    sub_21FFED4(v12);
  *(_DWORD *)(v12 + 32) = questId;
  if ( !AssistMaster__TryGetValidAssistEntityList_48725300(this, &resultList, (System_Int32_array *)v12, v14) )
    return 0;
  v15 = System_Linq_Enumerable__FirstOrDefault_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)resultList,
          (const MethodInfo_384E0B0 *)Method_System_Linq_Enumerable_FirstOrDefault_AssistEntity___);
  *assistEntity = (AssistEntity_o *)v15;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)assistEntity, (int32_t)v15, v16, v17, v18, v19, v20, v21);
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
  int v11; // w8
  const MethodInfo *v12; // x1
  Il2CppObject *Master_object; // x22
  System_Collections_Generic_List_object__o *CurrentLevelAndPriorityEntityList; // x0
  System_Collections_Generic_List_object__o *v15; // x23
  System_Collections_Generic_List_object__o *v16; // x24
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x0
  __int64 v24; // x1
  _BOOL8 v25; // x0
  __int64 v26; // x1
  Il2CppObject *current; // x23
  __int64 v28; // x1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_Collections_Generic_List_object__o *v35; // x0
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  Il2CppClass **v39; // x8
  __int64 v40; // x1
  AssistMaster_o *v41; // x0
  const MethodInfo *v42; // x2
  System_Collections_Generic_List_AssistEntity__o *v43; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_5938257 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_AssistEntity___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_AssistEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_AssistEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_AssistEntity__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_AssistEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_AssistEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_AssistEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_AssistEntity__TypeInfo);
    byte_5938257 = 1;
  }
  v11 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  memset(&v52, 0, sizeof(v52));
  if ( !v11 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, resultList);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( isAvailableOnly )
    CurrentLevelAndPriorityEntityList = (System_Collections_Generic_List_object__o *)AssistMaster__GetCurrentLevelAndPriorityEntityList(
                                                                                       this,
                                                                                       v12);
  else
    CurrentLevelAndPriorityEntityList = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                                                       (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.list,
                                                                                       (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_AssistEntity___);
  v15 = CurrentLevelAndPriorityEntityList;
  v16 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_AssistEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_AssistEntity___ctor__);
  *resultList = (System_Collections_Generic_List_AssistEntity__o *)v16;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)resultList, (int32_t)v16, v17, v18, v19, v20, v21, v22);
  if ( !v15 )
    sub_21FFECC(v23, v24);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v51,
    v15,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_AssistEntity__GetEnumerator__);
  v52 = v51;
  v51.fields._list = 0;
  *(_QWORD *)&v51.fields._index = &v52;
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v52,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_AssistEntity__MoveNext__);
    if ( !v25 )
      break;
    current = v52.fields._current;
    if ( !v52.fields._current )
      sub_21FFECC(v25, v26);
    if ( !Master_object )
      sub_21FFECC(v25, v26);
    if ( CommonReleaseMaster__ContainQuestClearPhase(
           (CommonReleaseMaster_o *)Master_object,
           (int32_t)v52.fields._current[3].klass,
           questId,
           questPhase,
           0) )
    {
      v35 = (System_Collections_Generic_List_object__o *)*resultList;
      if ( !*resultList
        || (items = v35->fields._items,
            v37 = Method_System_Collections_Generic_List_AssistEntity__Add__,
            ++v35->fields._version,
            !items) )
      {
        sub_21FFECC(v35, v28);
      }
      size = v35->fields._size;
      if ( (unsigned int)size < LODWORD(items->max_length) )
        goto LABEL_17;
LABEL_23:
      System_Collections_Generic_List_object___AddWithResize(
        v35,
        current,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
    }
    else if ( CommonReleaseMaster__ContainQuestClear(
                (CommonReleaseMaster_o *)Master_object,
                (int32_t)current[3].klass,
                questId,
                0) )
    {
      v35 = (System_Collections_Generic_List_object__o *)*resultList;
      if ( !*resultList
        || (items = v35->fields._items,
            v37 = Method_System_Collections_Generic_List_AssistEntity__Add__,
            ++v35->fields._version,
            !items) )
      {
        sub_21FFECC(v35, v40);
      }
      size = v35->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
        goto LABEL_23;
LABEL_17:
      v39 = &items->obj.klass + size;
      v35->fields._size = size + 1;
      v39[4] = (Il2CppClass *)current;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v39 + 4), (int32_t)current, v29, v30, v31, v32, v33, v34);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v52,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_AssistEntity__Dispose__);
  v43 = AssistMaster__FilterOverBoost(v41, *resultList, v42);
  *resultList = v43;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)resultList, (int32_t)v43, v44, v45, v46, v47, v48, v49);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*resultList, 0);
}


bool AssistMaster__TryGetValidAssistEntityList_48725300(
        AssistMaster_o *this,
        System_Collections_Generic_List_AssistEntity__o **resultList,
        System_Int32_array *questIdList,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  System_Collections_Generic_List_object__o *v8; // x23
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x22
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v21; // x9
  int *p_offset; // x10
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x2
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x0
  __int64 v32; // x1
  il2cpp_array_size_t max_length; // x8
  __int64 v34; // x22
  unsigned __int64 v35; // x27
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  System_Collections_Generic_List_object__o *v42; // x0
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x8
  System_Collections_Generic_IEnumerator_T__c *v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  System_Collections_Generic_List_AssistEntity__o *v51; // x0
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  System_Collections_Generic_IEnumerator_T__o *v59; // [xsp+18h] [xbp-58h]

  if ( (byte_5938259 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_AssistEntity__GetEnumerator__);
    sub_21FFC50(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_AssistEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_AssistEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_AssistEntity__TypeInfo);
    byte_5938259 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, resultList);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  v8 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_AssistEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_AssistEntity___ctor__);
  *resultList = (System_Collections_Generic_List_AssistEntity__o *)v8;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)resultList, (int32_t)v8, v9, v10, v11, v12, v13, v14);
  list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
  if ( !list )
    sub_21FFECC(0, v15);
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 list,
                 (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_AssistEntity__GetEnumerator__);
  v59 = Enumerator;
  if ( !Enumerator )
    sub_21FFECC(Enumerator, v18);
  for ( i = Enumerator; ; i = v59 )
  {
    klass = i->klass;
    v21 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v21;
        p_offset += 4;
        if ( !v21 )
          goto LABEL_12;
      }
      v23 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v23 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v23)(
            i,
            *(_QWORD *)(v23 + 8));
    if ( (v24 & 1) == 0 )
      break;
    if ( !v59 )
      sub_21FFECC(v24, v25);
    v27 = v59->klass;
    v28 = *(unsigned __int16 *)&v59->klass->_2.rank;
    if ( *(_WORD *)&v59->klass->_2.rank )
    {
      v29 = &v27->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_AssistEntity__c **)v29 - 1) != System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_20;
      }
      v30 = (__int64)&v27->vtable[*v29];
    }
    else
    {
LABEL_20:
      v30 = sub_2237E2C(v59, System_Collections_Generic_IEnumerator_AssistEntity__TypeInfo, 0);
    }
    v31 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
            v59,
            *(_QWORD *)(v30 + 8));
    if ( !questIdList )
      sub_21FFECC(v31, v32);
    max_length = questIdList->max_length;
    if ( (int)max_length >= 1 )
    {
      v34 = v31;
      v35 = 0;
      do
      {
        if ( v35 >= (unsigned int)max_length )
          sub_21FFED4(v31);
        if ( !v34 )
          sub_21FFECC(v31, v32);
        if ( !Master_object )
          sub_21FFECC(v31, v32);
        v31 = CommonReleaseMaster__ContainQuestClear(
                (CommonReleaseMaster_o *)Master_object,
                *(_DWORD *)(v34 + 48),
                questIdList->m_Items[v35],
                0);
        if ( (v31 & 1) != 0 )
        {
          v42 = (System_Collections_Generic_List_object__o *)*resultList;
          if ( !*resultList
            || (items = v42->fields._items,
                v44 = Method_System_Collections_Generic_List_AssistEntity__Add__,
                ++v42->fields._version,
                !items) )
          {
            sub_21FFECC(v42, v32);
          }
          size = v42->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v42,
              (Il2CppObject *)v34,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
          }
          else
          {
            v46 = &items->obj.klass + size;
            v42->fields._size = size + 1;
            v46[4] = (Il2CppClass *)v34;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v46 + 4), v34, v36, v37, v38, v39, v40, v41);
          }
        }
        LODWORD(max_length) = questIdList->max_length;
        ++v35;
      }
      while ( (__int64)v35 < (int)max_length );
    }
  }
  if ( v59 )
  {
    v47 = v59->klass;
    v48 = *(unsigned __int16 *)&v59->klass->_2.rank;
    if ( *(_WORD *)&v59->klass->_2.rank )
    {
      v49 = &v47->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
      {
        --v48;
        v49 += 4;
        if ( !v48 )
          goto LABEL_42;
      }
      v50 = (__int64)&v47->vtable[*v49];
    }
    else
    {
LABEL_42:
      v50 = sub_2237E2C(v59, System_IDisposable_TypeInfo, 0);
    }
    v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v50)(
            v59,
            *(_QWORD *)(v50 + 8));
  }
  v51 = AssistMaster__FilterOverBoost((AssistMaster_o *)v24, *resultList, v26);
  *resultList = v51;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)resultList, (int32_t)v51, v52, v53, v54, v55, v56, v57);
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
    sub_21FFECC(this, x);
  return x->fields.id == y->fields.id;
}


int32_t AssistMaster_AssistIdComparer__GetHashCode(
        AssistMaster_AssistIdComparer_o *this,
        AssistEntity_o *obj,
        const MethodInfo *method)
{
  if ( !obj )
    sub_21FFECC(this, 0);
  return System_Int32__GetHashCode((_DWORD)obj + 16, 0);
}


void AssistMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5938260 & 1) == 0 )
  {
    sub_21FFC50(&AssistMaster___c_TypeInfo);
    byte_5938260 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(AssistMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AssistMaster___c_TypeInfo->static_fields->__9 = (struct AssistMaster___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)AssistMaster___c_TypeInfo->static_fields,
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
    sub_21FFECC(this, 0);
  return item->fields.id;
}


bool AssistMaster___c___FilterOverBoost_b__15_1(
        AssistMaster___c_o *this,
        AssistEntity_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  if ( !item )
    sub_21FFECC(this, 0);
  return AssistEntity__GetOverBoostQuestId(item, (const MethodInfo *)item) >= 1
      && AssistEntity__IsClearOverBoostQuest(item, v4);
}


bool AssistMaster___c___FilterOverBoost_b__15_2(
        AssistMaster___c_o *this,
        AssistEntity_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_21FFECC(this, 0);
  return AssistEntity__GetOverBoostQuestId(item, (const MethodInfo *)item) > 0;
}


bool AssistMaster___c___FilterOverBoost_b__15_3(
        AssistMaster___c_o *this,
        AssistEntity_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_21FFECC(this, 0);
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
    sub_21FFECC(this, 0);
  return ent->fields.priority;
}


bool AssistMaster___c___GetCurrentEntity_b__3_1(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_21FFECC(this, 0);
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
    sub_21FFECC(this, 0);
  return ent->fields.lv;
}


int32_t AssistMaster___c___GetCurrentLevelAndPriorityEntity_b__2_1(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_21FFECC(this, 0);
  return ent->fields.priority;
}


bool AssistMaster___c___GetCurrentLevelAndPriorityEntity_b__2_2(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_21FFECC(this, 0);
  return AssistEntity__IsOpen(ent, (const MethodInfo *)ent);
}


int32_t AssistMaster___c___GetCurrentLevelEntity_b__1_0(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_21FFECC(this, 0);
  return ent->fields.lv;
}


bool AssistMaster___c___GetCurrentLevelEntity_b__1_1(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_21FFECC(this, 0);
  return AssistEntity__IsOpen(ent, (const MethodInfo *)ent);
}


int32_t AssistMaster___c___GetMaxLevelEntity_b__6_0(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_21FFECC(this, 0);
  return ent->fields.lv;
}


int32_t AssistMaster___c___GetMinLevelEntity_b__7_0(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_21FFECC(this, 0);
  return ent->fields.lv;
}


int32_t AssistMaster___c___GetMinPriorityEntity_b__4_0(
        AssistMaster___c_o *this,
        AssistEntity_o *ent,
        const MethodInfo *method)
{
  if ( !ent )
    sub_21FFECC(this, 0);
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
    sub_21FFECC(this, 0);
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
  System_Object_array *List; // x20
  System_Func_object__bool__o *_9__1; // x22
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  v4 = this;
  if ( (byte_5938261 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_CommonReleaseEntity___);
    sub_21FFC50(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&System_Func_CommonReleaseEntity__bool__TypeInfo);
    this = (AssistMaster___c__DisplayClass12_0_o *)sub_21FFC50(&Method_AssistMaster___c__DisplayClass12_0__GetStateUpPartsEntity_b__1__);
    byte_5938261 = 1;
  }
  if ( !entity )
    goto LABEL_13;
  if ( entity->fields.id != v4->fields.assistId || entity->fields.lv != v4->fields.currentLv )
    return 0;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, entity);
  this = (AssistMaster___c__DisplayClass12_0_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
  if ( !this )
LABEL_13:
    sub_21FFECC(this, entity);
  List = (System_Object_array *)CommonReleaseMaster__getList(
                                  (CommonReleaseMaster_o *)this,
                                  entity->fields.commonReleaseId,
                                  0);
  _9__1 = (System_Func_object__bool__o *)v4->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_CommonReleaseEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_AssistMaster___c__DisplayClass12_0__GetStateUpPartsEntity_b__1__,
      0);
    v4->fields.__9__1 = (struct System_Func_CommonReleaseEntity__bool__o *)_9__1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v7, v8, v9, v10, v11, v12);
  }
  return BasicHelper__Any_object__58575580(
           List,
           (System_Func_T__bool__o *)_9__1,
           (const MethodInfo_37DCADC *)Method_BasicHelper_Any_CommonReleaseEntity___);
}


bool AssistMaster___c__DisplayClass12_0___GetStateUpPartsEntity_b__1(
        AssistMaster___c__DisplayClass12_0_o *this,
        CommonReleaseEntity_o *y,
        const MethodInfo *method)
{
  if ( !y )
    sub_21FFECC(this, 0);
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
    sub_21FFECC(this, 0);
  return ent->fields.lv == this->fields.lv;
}