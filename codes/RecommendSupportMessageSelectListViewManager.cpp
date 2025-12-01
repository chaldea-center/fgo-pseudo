void RecommendSupportMessageSelectListViewManager___ctor(
        RecommendSupportMessageSelectListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void RecommendSupportMessageSelectListViewManager__CreateList(
        RecommendSupportMessageSelectListViewManager_o *this,
        int32_t category,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  const MethodInfo *v6; // x1
  System_Collections_Generic_IEnumerable_T__o *v7; // x0
  __int64 v8; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4CC3283 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_ListViewItem__AddRange__);
    byte_4CC3283 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  itemList = this->fields.itemList;
  v7 = (System_Collections_Generic_IEnumerable_T__o *)RecommendSupportMessageSelectListViewManager__GetItemList(
                                                        category,
                                                        v6);
  if ( !itemList
    || (System_Collections_Generic_List_object___AddRange(
          (System_Collections_Generic_List_object__o *)itemList,
          v7,
          (const MethodInfo_3810924 *)Method_System_Collections_Generic_List_ListViewItem__AddRange__),
        (sort = this->fields.sort) == 0) )
  {
    sub_1C71608(v7, v8);
  }
  sort->fields.isAscendingOrder = 0;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  ListViewManager__CheckScroll((ListViewManager_o *)this, 0, 0);
}


void RecommendSupportMessageSelectListViewManager__DestroyList(
        RecommendSupportMessageSelectListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
}


System_Collections_Generic_IEnumerable_RecommendSupportMessageSelectListViewItem__o *RecommendSupportMessageSelectListViewManager__EnumerateItems(
        RecommendSupportMessageSelectListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CC327F & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_OfType_RecommendSupportMessageSelectListViewItem___);
    byte_4CC327F = 1;
  }
  return (System_Collections_Generic_IEnumerable_RecommendSupportMessageSelectListViewItem__o *)System_Linq_Enumerable__OfType_object_(
                                                                                                  (System_Collections_IEnumerable_o *)this->fields.itemList,
                                                                                                  (const MethodInfo_317A3C4 *)Method_System_Linq_Enumerable_OfType_RecommendSupportMessageSelectListViewItem___);
}


System_Collections_Generic_IEnumerable_RecommendSupportMessageSelectListViewObject__o *RecommendSupportMessageSelectListViewManager__EnumerateObjects(
        RecommendSupportMessageSelectListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *v3; // x0
  RecommendSupportMessageSelectListViewManager___c_c *v4; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x19
  System_Func_object__object__o *_9__11_0; // x20
  Il2CppObject *v7; // x21
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4CC3280 & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_ExcludeNull_GameObject___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Select_GameObject__RecommendSupportMessageSelectListViewObject___);
    sub_1C713B0(&System_Func_GameObject__RecommendSupportMessageSelectListViewObject__TypeInfo);
    sub_1C713B0(&Method_RecommendSupportMessageSelectListViewManager___c__EnumerateObjects_b__11_0__);
    sub_1C713B0(&RecommendSupportMessageSelectListViewManager___c_TypeInfo);
    byte_4CC3280 = 1;
  }
  v3 = BasicHelper__ExcludeNull_object_(
         (System_Collections_Generic_IEnumerable_T__o *)this->fields.objectList,
         (const MethodInfo_3134B28 *)Method_BasicHelper_ExcludeNull_GameObject___);
  v4 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)v3;
  if ( !RecommendSupportMessageSelectListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectListViewManager___c_TypeInfo);
    v4 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
  }
  _9__11_0 = (System_Func_object__object__o *)v4->static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__11_0 = (System_Func_object__object__o *)sub_1C715FC(System_Func_GameObject__RecommendSupportMessageSelectListViewObject__TypeInfo);
    System_Func_object__object____ctor(
      _9__11_0,
      v7,
      Method_RecommendSupportMessageSelectListViewManager___c__EnumerateObjects_b__11_0__,
      0);
    static_fields = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Func_GameObject__RecommendSupportMessageSelectListViewObject__o *)_9__11_0;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__11_0,
      (int32_t)_9__11_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  return (System_Collections_Generic_IEnumerable_RecommendSupportMessageSelectListViewObject__o *)System_Linq_Enumerable__Select_object__object_(
                                                                                                    v5,
                                                                                                    (System_Func_TSource__TResult__o *)_9__11_0,
                                                                                                    (const MethodInfo_31818B4 *)Method_System_Linq_Enumerable_Select_GameObject__RecommendSupportMessageSelectListViewObject___);
}


RecommendSupportMessageSelectListViewItem_o *RecommendSupportMessageSelectListViewManager__GetItem(
        RecommendSupportMessageSelectListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  RecommendSupportMessageSelectListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4CC3286 & 1) == 0 )
  {
    sub_1C713B0(&Method_BasicHelper_IndexValue_ListViewItem___);
    sub_1C713B0(&RecommendSupportMessageSelectListViewItem_TypeInfo);
    byte_4CC3286 = 1;
  }
  result = (RecommendSupportMessageSelectListViewItem_o *)BasicHelper__IndexValue_object__51614552(
                                                            (System_Collections_Generic_List_T__o *)this->fields.itemList,
                                                            index,
                                                            0,
                                                            (const MethodInfo_3139358 *)Method_BasicHelper_IndexValue_ListViewItem___);
  if ( result )
  {
    naturalAligment = RecommendSupportMessageSelectListViewItem_TypeInfo->_2.naturalAligment;
    if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (RecommendSupportMessageSelectListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != RecommendSupportMessageSelectListViewItem_TypeInfo )
        return 0;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


System_Collections_Generic_IEnumerable_RecommendSupportMessageSelectListViewItem__o *RecommendSupportMessageSelectListViewManager__GetItemList(
        int32_t category,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Entities; // x19
  RecommendSupportMessageSelectListViewManager___c_c *v6; // x0
  System_Func_object__bool__o *_9__18_1; // x20
  Il2CppObject *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *static_fields; // x0
  GrandQuestFolderBoardItem_o *p__9__18_1; // x0
  RecommendSupportMessageSelectListViewManager___c_c *v17; // x0
  Il2CppObject *v18; // x21
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *v19; // x0
  RecommendSupportMessageSelectListViewManager___c_c *v20; // x0
  Il2CppObject *v21; // x21
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *v22; // x0
  RecommendSupportMessageSelectListViewManager___c_c *v23; // x0
  Il2CppObject *v24; // x21
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *v25; // x0
  RecommendSupportMessageSelectListViewManager___c_c *v26; // x0
  System_Func_T1__T2__TResult__o *_9__18_0; // x20
  Il2CppObject *v28; // x21
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0

  if ( (byte_4CC3284 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
    sub_1C713B0(&DataManager_TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_Select_RecommendAdviceMessageEntity__RecommendSupportMessageSelectListViewItem___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_RecommendSupportMessageSelectListViewItem___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_RecommendAdviceMessageEntity___);
    sub_1C713B0(&System_Func_RecommendAdviceMessageEntity__bool__TypeInfo);
    sub_1C713B0(&System_Func_RecommendAdviceMessageEntity__int__RecommendSupportMessageSelectListViewItem__TypeInfo);
    sub_1C713B0(&Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_0__);
    sub_1C713B0(&Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_1__);
    sub_1C713B0(&Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_2__);
    sub_1C713B0(&Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_3__);
    sub_1C713B0(&Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_4__);
    sub_1C713B0(&RecommendSupportMessageSelectListViewManager___c_TypeInfo);
    byte_4CC3284 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_314B0B8 *)Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
  if ( !Master_object )
    sub_1C71608(0, v4);
  Entities = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendAdviceMessageMaster__GetEntities(
                                                                    (RecommendAdviceMessageMaster_o *)Master_object,
                                                                    0);
  switch ( category )
  {
    case 1:
      v6 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      if ( !RecommendSupportMessageSelectListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectListViewManager___c_TypeInfo);
        v6 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      }
      _9__18_1 = (System_Func_object__bool__o *)v6->static_fields->__9__18_1;
      if ( _9__18_1 )
        goto LABEL_32;
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      }
      v8 = (Il2CppObject *)v6->static_fields->__9;
      _9__18_1 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_RecommendAdviceMessageEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__18_1,
        v8,
        Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_1__,
        0);
      static_fields = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__18_1 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__18_1;
      p__9__18_1 = (GrandQuestFolderBoardItem_o *)&static_fields->__9__18_1;
      break;
    case 2:
      v17 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      if ( !RecommendSupportMessageSelectListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectListViewManager___c_TypeInfo);
        v17 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      }
      _9__18_1 = (System_Func_object__bool__o *)v17->static_fields->__9__18_2;
      if ( _9__18_1 )
        goto LABEL_32;
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      }
      v18 = (Il2CppObject *)v17->static_fields->__9;
      _9__18_1 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_RecommendAdviceMessageEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__18_1,
        v18,
        Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_2__,
        0);
      v19 = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
      v19->__9__18_2 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__18_1;
      p__9__18_1 = (GrandQuestFolderBoardItem_o *)&v19->__9__18_2;
      break;
    case 3:
      v23 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      if ( !RecommendSupportMessageSelectListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectListViewManager___c_TypeInfo);
        v23 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      }
      _9__18_1 = (System_Func_object__bool__o *)v23->static_fields->__9__18_3;
      if ( _9__18_1 )
        goto LABEL_32;
      if ( !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        v23 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      }
      v24 = (Il2CppObject *)v23->static_fields->__9;
      _9__18_1 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_RecommendAdviceMessageEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__18_1,
        v24,
        Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_3__,
        0);
      v25 = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
      v25->__9__18_3 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__18_1;
      p__9__18_1 = (GrandQuestFolderBoardItem_o *)&v25->__9__18_3;
      break;
    case 4:
      v20 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      if ( !RecommendSupportMessageSelectListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectListViewManager___c_TypeInfo);
        v20 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      }
      _9__18_1 = (System_Func_object__bool__o *)v20->static_fields->__9__18_4;
      if ( _9__18_1 )
        goto LABEL_32;
      if ( !v20->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v20);
        v20 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      }
      v21 = (Il2CppObject *)v20->static_fields->__9;
      _9__18_1 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_RecommendAdviceMessageEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__18_1,
        v21,
        Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_4__,
        0);
      v22 = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
      v22->__9__18_4 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__18_1;
      p__9__18_1 = (GrandQuestFolderBoardItem_o *)&v22->__9__18_4;
      break;
    default:
      goto LABEL_33;
  }
  sub_1C71354(p__9__18_1, (int32_t)_9__18_1, v9, v10, v11, v12, v13, v14);
LABEL_32:
  Entities = System_Linq_Enumerable__Where_object_(
               Entities,
               (System_Func_TSource__bool__o *)_9__18_1,
               (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_RecommendAdviceMessageEntity___);
LABEL_33:
  v26 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
  if ( !RecommendSupportMessageSelectListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectListViewManager___c_TypeInfo);
    v26 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
  }
  _9__18_0 = (System_Func_T1__T2__TResult__o *)v26->static_fields->__9__18_0;
  if ( !_9__18_0 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v26 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v26->static_fields->__9;
    _9__18_0 = (System_Func_T1__T2__TResult__o *)sub_1C715FC(System_Func_RecommendAdviceMessageEntity__int__RecommendSupportMessageSelectListViewItem__TypeInfo);
    System_Func_object__int__object____ctor(
      _9__18_0,
      v28,
      Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_0__,
      0);
    v29 = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
    v29->__9__18_0 = (struct System_Func_RecommendAdviceMessageEntity__int__RecommendSupportMessageSelectListViewItem__o *)_9__18_0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v29->__9__18_0, (int32_t)_9__18_0, v30, v31, v32, v33, v34, v35);
  }
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object__51911592(
                                                               Entities,
                                                               (System_Func_TSource__int__TResult__o *)_9__18_0,
                                                               (const MethodInfo_3181BA8 *)Method_System_Linq_Enumerable_Select_RecommendAdviceMessageEntity__RecommendSupportMessageSelectListViewItem___);
  return (System_Collections_Generic_IEnumerable_RecommendSupportMessageSelectListViewItem__o *)System_Linq_Enumerable__ToArray_object_(
                                                                                                  v36,
                                                                                                  (const MethodInfo_318AFEC *)Method_System_Linq_Enumerable_ToArray_RecommendSupportMessageSelectListViewItem___);
}


void RecommendSupportMessageSelectListViewManager__InvokeOnClick(
        RecommendSupportMessageSelectListViewManager_o *this,
        ListViewObject_o *obj,
        int32_t resultKind,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct RecommendSupportMessageSelectListViewManager_CallbackFunc_o *FuncOnClick; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  unsigned int Index; // w0

  FuncOnClick = this->fields.FuncOnClick;
  this->fields.FuncOnClick = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.FuncOnClick, 0, resultKind, (int32_t)method, v4, v5, v6, v7);
  if ( FuncOnClick )
  {
    if ( !obj )
      sub_1C71608(v11, v12);
    Index = ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))FuncOnClick->fields.invoke_impl)(
      FuncOnClick->fields.method_code,
      (unsigned int)resultKind,
      Index,
      FuncOnClick->fields.method);
  }
}


bool RecommendSupportMessageSelectListViewManager__IsClippingOrNoTermination(
        RecommendSupportMessageSelectListViewManager_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  return item && !item->fields.isTermination
      || ListViewManager__ClippingItem_44112976((ListViewManager_o *)this, item, 0);
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportMessageSelectListViewManager__ModifyList(
        RecommendSupportMessageSelectListViewManager_o *this,
        bool isNeedSort,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_RecommendSupportMessageSelectListViewItem__o *v5; // x0
  System_Object_array *v6; // x0
  RecommendSupportMessageSelectListViewManager___c_c *v7; // x8
  System_Collections_Generic_IEnumerable_T__o *v8; // x21
  System_Action_object__o *_9__19_0; // x22
  Il2CppObject *v10; // x23
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4CC3285 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_RecommendSupportMessageSelectListViewItem__TypeInfo);
    sub_1C713B0(&Method_BasicHelper_ForEach_RecommendSupportMessageSelectListViewItem___);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToArray_RecommendSupportMessageSelectListViewItem___);
    sub_1C713B0(&Method_RecommendSupportMessageSelectListViewManager___c__ModifyList_b__19_0__);
    sub_1C713B0(&RecommendSupportMessageSelectListViewManager___c_TypeInfo);
    byte_4CC3285 = 1;
  }
  v5 = RecommendSupportMessageSelectListViewManager__EnumerateItems(this, (const MethodInfo *)isNeedSort);
  v6 = System_Linq_Enumerable__ToArray_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v5,
         (const MethodInfo_318AFEC *)Method_System_Linq_Enumerable_ToArray_RecommendSupportMessageSelectListViewItem___);
  v7 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
  v8 = (System_Collections_Generic_IEnumerable_T__o *)v6;
  if ( !RecommendSupportMessageSelectListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectListViewManager___c_TypeInfo);
    v7 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
  }
  _9__19_0 = (System_Action_object__o *)v7->static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__19_0 = (System_Action_object__o *)sub_1C715FC(System_Action_RecommendSupportMessageSelectListViewItem__TypeInfo);
    System_Action_object____ctor(
      _9__19_0,
      v10,
      Method_RecommendSupportMessageSelectListViewManager___c__ModifyList_b__19_0__,
      0);
    static_fields = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__19_0 = (struct System_Action_RecommendSupportMessageSelectListViewItem__o *)_9__19_0;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__19_0,
      (int32_t)_9__19_0,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  BasicHelper__ForEach_object_(
    v8,
    (System_Action_T__o *)_9__19_0,
    (const MethodInfo_3136DF4 *)Method_BasicHelper_ForEach_RecommendSupportMessageSelectListViewItem___);
  if ( isNeedSort )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void RecommendSupportMessageSelectListViewManager__OnClickListView(
        RecommendSupportMessageSelectListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void RecommendSupportMessageSelectListViewManager__OnClickSelectListView(
        RecommendSupportMessageSelectListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  RecommendSupportMessageSelectListViewManager__InvokeOnClick(this, obj, 0, v3);
}


void RecommendSupportMessageSelectListViewManager__RequestListObject(
        RecommendSupportMessageSelectListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x21
  UIScrollView_o *v6; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_IEnumerable_T__o *v8; // x20
  System_Action_object__o *v9; // x22
  UnityEngine_Object_o *scrollView; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Action_o *FuncOnMoveEnd; // x20

  if ( (byte_4CC3288 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_RecommendSupportMessageSelectListViewObject__TypeInfo);
    sub_1C713B0(&Method_BasicHelper_ForEach_RecommendSupportMessageSelectListViewObject___);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_RecommendSupportMessageSelectListViewManager___c__DisplayClass26_0__RequestListObject_b__0__);
    sub_1C713B0(&RecommendSupportMessageSelectListViewManager___c__DisplayClass26_0_TypeInfo);
    byte_4CC3288 = 1;
  }
  v5 = sub_1C715FC(RecommendSupportMessageSelectListViewManager___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_13;
  *(_DWORD *)(v5 + 16) = mode;
  v8 = (System_Collections_Generic_IEnumerable_T__o *)RecommendSupportMessageSelectListViewManager__EnumerateObjects(
                                                        this,
                                                        v7);
  v9 = (System_Action_object__o *)sub_1C715FC(System_Action_RecommendSupportMessageSelectListViewObject__TypeInfo);
  System_Action_object____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_RecommendSupportMessageSelectListViewManager___c__DisplayClass26_0__RequestListObject_b__0__,
    0);
  BasicHelper__ForEach_object_(
    v8,
    (System_Action_T__o *)v9,
    (const MethodInfo_3136DF4 *)Method_BasicHelper_ForEach_RecommendSupportMessageSelectListViewObject___);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    v6 = this->fields.scrollView;
    if ( !v6 )
      goto LABEL_13;
    ((void (__fastcall *)(UIScrollView_o *, __int64, const MethodInfo *))v6->klass->vtable._8_UpdateScrollbars.methodPtr)(
      v6,
      1,
      v6->klass->vtable._8_UpdateScrollbars.method);
    v6 = this->fields.scrollView;
    if ( !v6 )
      goto LABEL_13;
    if ( (((__int64 (__fastcall *)(UIScrollView_o *, const MethodInfo *))v6->klass->vtable._6_get_shouldMoveVertically.methodPtr)(
            v6,
            v6->klass->vtable._6_get_shouldMoveVertically.method)
        & 1) != 0 )
    {
      v6 = this->fields.scrollView;
      if ( v6 )
      {
        UIScrollView__UpdatePosition(v6, 0);
        goto LABEL_12;
      }
LABEL_13:
      sub_1C71608(v6, v7);
    }
  }
LABEL_12:
  FuncOnMoveEnd = this->fields.FuncOnMoveEnd;
  this->fields.FuncOnMoveEnd = 0;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.FuncOnMoveEnd, 0, v11, v12, v13, v14, v15, v16);
  ActionExtensions__Call(FuncOnMoveEnd, 0);
}


void RecommendSupportMessageSelectListViewManager__SetFuncOnClick(
        RecommendSupportMessageSelectListViewManager_o *this,
        RecommendSupportMessageSelectListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.FuncOnClick = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.FuncOnClick,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void RecommendSupportMessageSelectListViewManager__SetMode(
        RecommendSupportMessageSelectListViewManager_o *this,
        int32_t mode,
        RecommendSupportMessageSelectListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.FuncOnClick = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.FuncOnClick,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  RecommendSupportMessageSelectListViewManager__SetMode_35084388(this, mode, v10);
}


void RecommendSupportMessageSelectListViewManager__SetMode_35084388(
        RecommendSupportMessageSelectListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int v6; // w9
  int32_t v7; // w1

  this->fields.initMode = mode;
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
  if ( mode == 2 )
    v6 = 2;
  else
    v6 = 1;
  if ( mode == 3 )
    v7 = 3;
  else
    v7 = v6;
  RecommendSupportMessageSelectListViewManager__RequestListObject(this, v7, v5);
}


void RecommendSupportMessageSelectListViewManager__SetMode_35092928(
        RecommendSupportMessageSelectListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.FuncOnMoveEnd = callback;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.FuncOnMoveEnd,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  RecommendSupportMessageSelectListViewManager__SetMode_35084388(this, mode, v10);
}


void RecommendSupportMessageSelectListViewManager__SetObjectItem(
        RecommendSupportMessageSelectListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x11
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  int32_t v10; // w1

  if ( (byte_4CC3287 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&RecommendSupportMessageSelectListViewObject_TypeInfo);
    byte_4CC3287 = 1;
  }
  if ( obj )
  {
    naturalAligment = RecommendSupportMessageSelectListViewObject_TypeInfo->_2.naturalAligment;
    if ( obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (RecommendSupportMessageSelectListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != RecommendSupportMessageSelectListViewObject_TypeInfo )
        obj = 0;
    }
    else
    {
      obj = 0;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)obj, 0, 0);
  if ( !v7 )
  {
    if ( !obj )
      sub_1C71608(v7, v8);
    if ( this->fields.initMode == 2 )
      v10 = 2;
    else
      v10 = 1;
    RecommendSupportMessageSelectListViewObject__Init((RecommendSupportMessageSelectListViewObject_o *)obj, v10, v9);
  }
}


void RecommendSupportMessageSelectListViewManager__SetScrollViewEnabled(
        RecommendSupportMessageSelectListViewManager_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0

  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    sub_1C71608(0, value);
  UnityEngine_Behaviour__set_enabled(scrollView, value, 0);
}


bool RecommendSupportMessageSelectListViewManager___get_ClippingObjectList_b__15_0(
        RecommendSupportMessageSelectListViewManager_o *this,
        RecommendSupportMessageSelectListViewObject_o *x,
        const MethodInfo *method)
{
  ListViewItem_o *Item; // x0

  if ( !x )
    sub_1C71608(this, 0);
  Item = (ListViewItem_o *)RecommendSupportMessageSelectListViewObject__GetItem(x, (const MethodInfo *)x);
  return Item && !Item->fields.isTermination
      || ListViewManager__ClippingItem_44112976((ListViewManager_o *)this, Item, 0);
}


void RecommendSupportMessageSelectListViewManager__add_FuncOnClick(
        RecommendSupportMessageSelectListViewManager_o *this,
        RecommendSupportMessageSelectListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *FuncOnClick; // x21
  struct RecommendSupportMessageSelectListViewManager_CallbackFunc_o **p_FuncOnClick; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  RecommendSupportMessageSelectListViewManager_o *v10; // x0
  RecommendSupportMessageSelectListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4CC327B & 1) == 0 )
  {
    sub_1C713B0(&RecommendSupportMessageSelectListViewManager_CallbackFunc_TypeInfo);
    byte_4CC327B = 1;
  }
  FuncOnClick = (System_Delegate_o *)this->fields.FuncOnClick;
  p_FuncOnClick = &this->fields.FuncOnClick;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(FuncOnClick, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (RecommendSupportMessageSelectListViewManager_CallbackFunc_c *)v7->klass != RecommendSupportMessageSelectListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CCD184(p_FuncOnClick, v7, FuncOnClick);
    v9 = FuncOnClick == (System_Delegate_o *)v8;
    FuncOnClick = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (RecommendSupportMessageSelectListViewManager_o *)sub_1C719A4(v7);
  RecommendSupportMessageSelectListViewManager__remove_FuncOnClick(v10, v11, v12);
}


void RecommendSupportMessageSelectListViewManager__add_FuncOnMoveEnd(
        RecommendSupportMessageSelectListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *FuncOnMoveEnd; // x21
  struct System_Action_o **p_FuncOnMoveEnd; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  RecommendSupportMessageSelectListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4CC327D & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    byte_4CC327D = 1;
  }
  FuncOnMoveEnd = (System_Delegate_o *)this->fields.FuncOnMoveEnd;
  p_FuncOnMoveEnd = &this->fields.FuncOnMoveEnd;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(FuncOnMoveEnd, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1CCD184(p_FuncOnMoveEnd, v7, FuncOnMoveEnd);
    v9 = FuncOnMoveEnd == (System_Delegate_o *)v8;
    FuncOnMoveEnd = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (RecommendSupportMessageSelectListViewManager_o *)sub_1C719A4(v7);
  RecommendSupportMessageSelectListViewManager__remove_FuncOnMoveEnd(v10, v11, v12);
}


System_Collections_Generic_List_RecommendSupportMessageSelectListViewObject__o *RecommendSupportMessageSelectListViewManager__get_ClippingObjectList(
        RecommendSupportMessageSelectListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_RecommendSupportMessageSelectListViewObject__o *v3; // x20
  System_Func_object__bool__o *v4; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0

  if ( (byte_4CC3282 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_ToList_RecommendSupportMessageSelectListViewObject___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_RecommendSupportMessageSelectListViewObject___);
    sub_1C713B0(&System_Func_RecommendSupportMessageSelectListViewObject__bool__TypeInfo);
    sub_1C713B0(&Method_RecommendSupportMessageSelectListViewManager__get_ClippingObjectList_b__15_0__);
    byte_4CC3282 = 1;
  }
  v3 = RecommendSupportMessageSelectListViewManager__EnumerateObjects(this, method);
  v4 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_RecommendSupportMessageSelectListViewObject__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v4,
    (Il2CppObject *)this,
    Method_RecommendSupportMessageSelectListViewManager__get_ClippingObjectList_b__15_0__,
    0);
  v5 = System_Linq_Enumerable__Where_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v3,
         (System_Func_TSource__bool__o *)v4,
         (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_RecommendSupportMessageSelectListViewObject___);
  return (System_Collections_Generic_List_RecommendSupportMessageSelectListViewObject__o *)System_Linq_Enumerable__ToList_object_(
                                                                                             v5,
                                                                                             (const MethodInfo_318FC88 *)Method_System_Linq_Enumerable_ToList_RecommendSupportMessageSelectListViewObject___);
}


System_Collections_Generic_List_RecommendSupportMessageSelectListViewObject__o *RecommendSupportMessageSelectListViewManager__get_ObjectList(
        RecommendSupportMessageSelectListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_RecommendSupportMessageSelectListViewObject__o *v3; // x0

  if ( (byte_4CC3281 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_ToList_RecommendSupportMessageSelectListViewObject___);
    byte_4CC3281 = 1;
  }
  v3 = RecommendSupportMessageSelectListViewManager__EnumerateObjects(this, method);
  return (System_Collections_Generic_List_RecommendSupportMessageSelectListViewObject__o *)System_Linq_Enumerable__ToList_object_(
                                                                                             (System_Collections_Generic_IEnumerable_TSource__o *)v3,
                                                                                             (const MethodInfo_318FC88 *)Method_System_Linq_Enumerable_ToList_RecommendSupportMessageSelectListViewObject___);
}


void RecommendSupportMessageSelectListViewManager__remove_FuncOnClick(
        RecommendSupportMessageSelectListViewManager_o *this,
        RecommendSupportMessageSelectListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *FuncOnClick; // x21
  struct RecommendSupportMessageSelectListViewManager_CallbackFunc_o **p_FuncOnClick; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  RecommendSupportMessageSelectListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4CC327C & 1) == 0 )
  {
    sub_1C713B0(&RecommendSupportMessageSelectListViewManager_CallbackFunc_TypeInfo);
    byte_4CC327C = 1;
  }
  FuncOnClick = (System_Delegate_o *)this->fields.FuncOnClick;
  p_FuncOnClick = &this->fields.FuncOnClick;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(FuncOnClick, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (RecommendSupportMessageSelectListViewManager_CallbackFunc_c *)v7->klass != RecommendSupportMessageSelectListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CCD184(p_FuncOnClick, v7, FuncOnClick);
    v9 = FuncOnClick == (System_Delegate_o *)v8;
    FuncOnClick = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (RecommendSupportMessageSelectListViewManager_o *)sub_1C719A4(v7);
  RecommendSupportMessageSelectListViewManager__add_FuncOnMoveEnd(v10, v11, v12);
}


void RecommendSupportMessageSelectListViewManager__remove_FuncOnMoveEnd(
        RecommendSupportMessageSelectListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *FuncOnMoveEnd; // x21
  struct System_Action_o **p_FuncOnMoveEnd; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  RecommendSupportMessageSelectListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4CC327E & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    byte_4CC327E = 1;
  }
  FuncOnMoveEnd = (System_Delegate_o *)this->fields.FuncOnMoveEnd;
  p_FuncOnMoveEnd = &this->fields.FuncOnMoveEnd;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(FuncOnMoveEnd, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1CCD184(p_FuncOnMoveEnd, v7, FuncOnMoveEnd);
    v9 = FuncOnMoveEnd == (System_Delegate_o *)v8;
    FuncOnMoveEnd = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (RecommendSupportMessageSelectListViewManager_o *)sub_1C719A4(v7);
  RecommendSupportMessageSelectListViewManager__EnumerateItems(v10, v11);
}


void RecommendSupportMessageSelectListViewManager_CallbackFunc___ctor(
        RecommendSupportMessageSelectListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AA208C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA2034;
}


System_IAsyncResult_o *RecommendSupportMessageSelectListViewManager_CallbackFunc__BeginInvoke(
        RecommendSupportMessageSelectListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v11; // [xsp+28h] [xbp-38h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v11 = result;
  v12 = kind;
  if ( (byte_4CC3289 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&RecommendSupportMessageSelectListViewManager_ResultKind_TypeInfo);
    byte_4CC3289 = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(RecommendSupportMessageSelectListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_1C71364(this, v10, callback, object);
}


void RecommendSupportMessageSelectListViewManager_CallbackFunc__EndInvoke(
        RecommendSupportMessageSelectListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
}


void RecommendSupportMessageSelectListViewManager_CallbackFunc__Invoke(
        RecommendSupportMessageSelectListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    kind,
    result,
    this->fields.method);
}


void RecommendSupportMessageSelectListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC328A & 1) == 0 )
  {
    sub_1C713B0(&RecommendSupportMessageSelectListViewManager___c_TypeInfo);
    byte_4CC328A = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(RecommendSupportMessageSelectListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields->__9 = (struct RecommendSupportMessageSelectListViewManager___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void RecommendSupportMessageSelectListViewManager___c___ctor(
        RecommendSupportMessageSelectListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


RecommendSupportMessageSelectListViewObject_o *RecommendSupportMessageSelectListViewManager___c___EnumerateObjects_b__11_0(
        RecommendSupportMessageSelectListViewManager___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  if ( (byte_4CC328B & 1) == 0 )
  {
    this = (RecommendSupportMessageSelectListViewManager___c_o *)sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportMessageSelectListViewObject___);
    byte_4CC328B = 1;
  }
  if ( !x )
    sub_1C71608(this, x);
  return (RecommendSupportMessageSelectListViewObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                            x,
                                                            (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportMessageSelectListViewObject___);
}


RecommendSupportMessageSelectListViewItem_o *RecommendSupportMessageSelectListViewManager___c___GetItemList_b__18_0(
        RecommendSupportMessageSelectListViewManager___c_o *this,
        RecommendAdviceMessageEntity_o *item,
        int32_t i,
        const MethodInfo *method)
{
  RecommendSupportMessageSelectListViewItem_o *v6; // x21
  const MethodInfo *v7; // x3

  if ( (byte_4CC328C & 1) == 0 )
  {
    sub_1C713B0(&RecommendSupportMessageSelectListViewItem_TypeInfo);
    byte_4CC328C = 1;
  }
  v6 = (RecommendSupportMessageSelectListViewItem_o *)sub_1C715FC(RecommendSupportMessageSelectListViewItem_TypeInfo);
  RecommendSupportMessageSelectListViewItem___ctor(v6, i, item, v7);
  return v6;
}


bool RecommendSupportMessageSelectListViewManager___c___GetItemList_b__18_1(
        RecommendSupportMessageSelectListViewManager___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C71608(this, 0);
  return entity->fields.category == 1;
}


bool RecommendSupportMessageSelectListViewManager___c___GetItemList_b__18_2(
        RecommendSupportMessageSelectListViewManager___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C71608(this, 0);
  return entity->fields.category == 2;
}


bool RecommendSupportMessageSelectListViewManager___c___GetItemList_b__18_3(
        RecommendSupportMessageSelectListViewManager___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C71608(this, 0);
  return entity->fields.category == 3;
}


bool RecommendSupportMessageSelectListViewManager___c___GetItemList_b__18_4(
        RecommendSupportMessageSelectListViewManager___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C71608(this, 0);
  return entity->fields.category == 4;
}


void RecommendSupportMessageSelectListViewManager___c___ModifyList_b__19_0(
        RecommendSupportMessageSelectListViewManager___c_o *this,
        RecommendSupportMessageSelectListViewItem_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  RecommendSupportMessageSelectListViewItem__UpdateProperties(x, (const MethodInfo *)x);
}


void RecommendSupportMessageSelectListViewManager___c__DisplayClass26_0___ctor(
        RecommendSupportMessageSelectListViewManager___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void RecommendSupportMessageSelectListViewManager___c__DisplayClass26_0___RequestListObject_b__0(
        RecommendSupportMessageSelectListViewManager___c__DisplayClass26_0_o *this,
        RecommendSupportMessageSelectListViewObject_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C71608(this, 0);
  RecommendSupportMessageSelectListViewObject__Init(x, this->fields.mode, method);
}