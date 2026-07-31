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

  if ( (byte_593436D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__AddRange__);
    byte_593436D = 1;
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
          (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_ListViewItem__AddRange__),
        (sort = this->fields.sort) == 0) )
  {
    sub_21FFECC(v7, v8);
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
  if ( (byte_5934369 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_OfType_RecommendSupportMessageSelectListViewItem___);
    byte_5934369 = 1;
  }
  return (System_Collections_Generic_IEnumerable_RecommendSupportMessageSelectListViewItem__o *)System_Linq_Enumerable__OfType_object_(
                                                                                                  (System_Collections_IEnumerable_o *)this->fields.itemList,
                                                                                                  (const MethodInfo_3855054 *)Method_System_Linq_Enumerable_OfType_RecommendSupportMessageSelectListViewItem___);
}


System_Collections_Generic_IEnumerable_RecommendSupportMessageSelectListViewObject__o *RecommendSupportMessageSelectListViewManager__EnumerateObjects(
        RecommendSupportMessageSelectListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  RecommendSupportMessageSelectListViewManager___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *static_fields; // x9
  System_Func_object__object__o *_9__11_0; // x20
  Il2CppObject *v10; // x21
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_593436A & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_ExcludeNull_GameObject___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_GameObject__RecommendSupportMessageSelectListViewObject___);
    sub_21FFC50(&System_Func_GameObject__RecommendSupportMessageSelectListViewObject__TypeInfo);
    sub_21FFC50(&Method_RecommendSupportMessageSelectListViewManager___c__EnumerateObjects_b__11_0__);
    sub_21FFC50(&RecommendSupportMessageSelectListViewManager___c_TypeInfo);
    byte_593436A = 1;
  }
  v3 = BasicHelper__ExcludeNull_object_(
         (System_Collections_Generic_IEnumerable_T__o *)this->fields.objectList,
         (const MethodInfo_37DD3BC *)Method_BasicHelper_ExcludeNull_GameObject___);
  v6 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)v3;
  if ( !*(&RecommendSupportMessageSelectListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectListViewManager___c_TypeInfo, v4, v5);
    v6 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__11_0 = (System_Func_object__object__o *)static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, v4, v5);
      static_fields = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__11_0 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_GameObject__RecommendSupportMessageSelectListViewObject__TypeInfo);
    System_Func_object__object____ctor(
      _9__11_0,
      v10,
      Method_RecommendSupportMessageSelectListViewManager___c__EnumerateObjects_b__11_0__,
      0);
    v11 = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
    v11->__9__11_0 = (struct System_Func_GameObject__RecommendSupportMessageSelectListViewObject__o *)_9__11_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v11->__9__11_0, (int32_t)_9__11_0, v12, v13, v14, v15, v16, v17);
  }
  return (System_Collections_Generic_IEnumerable_RecommendSupportMessageSelectListViewObject__o *)System_Linq_Enumerable__Select_object__object_(
                                                                                                    v7,
                                                                                                    (System_Func_TSource__TResult__o *)_9__11_0,
                                                                                                    (const MethodInfo_385DD00 *)Method_System_Linq_Enumerable_Select_GameObject__RecommendSupportMessageSelectListViewObject___);
}


RecommendSupportMessageSelectListViewItem_o *RecommendSupportMessageSelectListViewManager__GetItem(
        RecommendSupportMessageSelectListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  RecommendSupportMessageSelectListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_5934370 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_IndexValue_ListViewItem___);
    sub_21FFC50(&RecommendSupportMessageSelectListViewItem_TypeInfo);
    byte_5934370 = 1;
  }
  result = (RecommendSupportMessageSelectListViewItem_o *)BasicHelper__IndexValue_object__58595452(
                                                            (System_Collections_Generic_List_T__o *)this->fields.itemList,
                                                            index,
                                                            0,
                                                            (const MethodInfo_37E187C *)Method_BasicHelper_IndexValue_ListViewItem___);
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
  __int64 v2; // x2
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_IEnumerable_TSource__o *Entities; // x19
  RecommendSupportMessageSelectListViewManager___c_c *v9; // x0
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *v10; // x8
  System_Func_object__bool__o *_9__18_1; // x20
  Il2CppObject *v12; // x21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *v19; // x0
  MissionNaviTransitionBoardItem_o *p__9__18_1; // x0
  RecommendSupportMessageSelectListViewManager___c_c *v21; // x0
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *v22; // x8
  Il2CppObject *v23; // x21
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *v24; // x0
  RecommendSupportMessageSelectListViewManager___c_c *v25; // x0
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *static_fields; // x8
  Il2CppObject *v27; // x21
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *v28; // x0
  RecommendSupportMessageSelectListViewManager___c_c *v29; // x0
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *v30; // x8
  Il2CppObject *v31; // x21
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *v32; // x0
  RecommendSupportMessageSelectListViewManager___c_c *v33; // x0
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *v34; // x8
  System_Func_T1__T2__TResult__o *_9__18_0; // x20
  Il2CppObject *v36; // x21
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *v37; // x0
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0

  if ( (byte_593436E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_RecommendAdviceMessageEntity__RecommendSupportMessageSelectListViewItem___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_RecommendSupportMessageSelectListViewItem___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_RecommendAdviceMessageEntity___);
    sub_21FFC50(&System_Func_RecommendAdviceMessageEntity__bool__TypeInfo);
    sub_21FFC50(&System_Func_RecommendAdviceMessageEntity__int__RecommendSupportMessageSelectListViewItem__TypeInfo);
    sub_21FFC50(&Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_0__);
    sub_21FFC50(&Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_1__);
    sub_21FFC50(&Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_2__);
    sub_21FFC50(&Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_3__);
    sub_21FFC50(&Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_4__);
    sub_21FFC50(&RecommendSupportMessageSelectListViewManager___c_TypeInfo);
    byte_593436E = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
  if ( !Master_object )
    sub_21FFECC(0, v5);
  Entities = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendAdviceMessageMaster__GetEntities(
                                                                    (RecommendAdviceMessageMaster_o *)Master_object,
                                                                    0);
  if ( category <= 2 )
  {
    if ( category == 1 )
    {
      v25 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      if ( !*(&RecommendSupportMessageSelectListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectListViewManager___c_TypeInfo, v6, v7);
        v25 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      }
      static_fields = v25->static_fields;
      _9__18_1 = (System_Func_object__bool__o *)static_fields->__9__18_1;
      if ( _9__18_1 )
        goto LABEL_36;
      if ( !*(&v25->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v25, v6, v7);
        static_fields = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
      }
      v27 = (Il2CppObject *)static_fields->__9;
      _9__18_1 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_RecommendAdviceMessageEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__18_1,
        v27,
        Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_1__,
        0);
      v28 = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
      v28->__9__18_1 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__18_1;
      p__9__18_1 = (MissionNaviTransitionBoardItem_o *)&v28->__9__18_1;
    }
    else
    {
      if ( category != 2 )
        goto LABEL_37;
      v9 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      if ( !*(&RecommendSupportMessageSelectListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectListViewManager___c_TypeInfo, v6, v7);
        v9 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      }
      v10 = v9->static_fields;
      _9__18_1 = (System_Func_object__bool__o *)v10->__9__18_2;
      if ( _9__18_1 )
        goto LABEL_36;
      if ( !*(&v9->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v9, v6, v7);
        v10 = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
      }
      v12 = (Il2CppObject *)v10->__9;
      _9__18_1 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_RecommendAdviceMessageEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__18_1,
        v12,
        Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_2__,
        0);
      v19 = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
      v19->__9__18_2 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__18_1;
      p__9__18_1 = (MissionNaviTransitionBoardItem_o *)&v19->__9__18_2;
    }
    goto LABEL_35;
  }
  if ( category == 3 )
  {
    v29 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
    if ( !*(&RecommendSupportMessageSelectListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectListViewManager___c_TypeInfo, v6, v7);
      v29 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
    }
    v30 = v29->static_fields;
    _9__18_1 = (System_Func_object__bool__o *)v30->__9__18_3;
    if ( _9__18_1 )
      goto LABEL_36;
    if ( !*(&v29->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v29, v6, v7);
      v30 = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
    }
    v31 = (Il2CppObject *)v30->__9;
    _9__18_1 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_RecommendAdviceMessageEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__18_1,
      v31,
      Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_3__,
      0);
    v32 = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
    v32->__9__18_3 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__18_1;
    p__9__18_1 = (MissionNaviTransitionBoardItem_o *)&v32->__9__18_3;
    goto LABEL_35;
  }
  if ( category != 4 )
    goto LABEL_37;
  v21 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
  if ( !*(&RecommendSupportMessageSelectListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectListViewManager___c_TypeInfo, v6, v7);
    v21 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
  }
  v22 = v21->static_fields;
  _9__18_1 = (System_Func_object__bool__o *)v22->__9__18_4;
  if ( !_9__18_1 )
  {
    if ( !*(&v21->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v21, v6, v7);
      v22 = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
    }
    v23 = (Il2CppObject *)v22->__9;
    _9__18_1 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_RecommendAdviceMessageEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__18_1,
      v23,
      Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_4__,
      0);
    v24 = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
    v24->__9__18_4 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__18_1;
    p__9__18_1 = (MissionNaviTransitionBoardItem_o *)&v24->__9__18_4;
LABEL_35:
    sub_21FFBF4(p__9__18_1, (int32_t)_9__18_1, v13, v14, v15, v16, v17, v18);
  }
LABEL_36:
  Entities = System_Linq_Enumerable__Where_object_(
               Entities,
               (System_Func_TSource__bool__o *)_9__18_1,
               (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_RecommendAdviceMessageEntity___);
LABEL_37:
  v33 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
  if ( !*(&RecommendSupportMessageSelectListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectListViewManager___c_TypeInfo, v6, v7);
    v33 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
  }
  v34 = v33->static_fields;
  _9__18_0 = (System_Func_T1__T2__TResult__o *)v34->__9__18_0;
  if ( !_9__18_0 )
  {
    if ( !*(&v33->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v33, v6, v7);
      v34 = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
    }
    v36 = (Il2CppObject *)v34->__9;
    _9__18_0 = (System_Func_T1__T2__TResult__o *)sub_21FFEBC(System_Func_RecommendAdviceMessageEntity__int__RecommendSupportMessageSelectListViewItem__TypeInfo);
    System_Func_object__int__object____ctor(
      _9__18_0,
      v36,
      Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_0__,
      0);
    v37 = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
    v37->__9__18_0 = (struct System_Func_RecommendAdviceMessageEntity__int__RecommendSupportMessageSelectListViewItem__o *)_9__18_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v37->__9__18_0, (int32_t)_9__18_0, v38, v39, v40, v41, v42, v43);
  }
  v44 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object__59105316(
                                                               Entities,
                                                               (System_Func_TSource__int__TResult__o *)_9__18_0,
                                                               (const MethodInfo_385E024 *)Method_System_Linq_Enumerable_Select_RecommendAdviceMessageEntity__RecommendSupportMessageSelectListViewItem___);
  return (System_Collections_Generic_IEnumerable_RecommendSupportMessageSelectListViewItem__o *)System_Linq_Enumerable__ToArray_object_(
                                                                                                  v44,
                                                                                                  (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_RecommendSupportMessageSelectListViewItem___);
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportMessageSelectListViewManager__InvokeOnClick(
        RecommendSupportMessageSelectListViewManager_o *this,
        ListViewObject_o *obj,
        int32_t resultKind,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct RecommendSupportMessageSelectListViewManager_CallbackFunc_o *FuncOnClick; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  unsigned int Index; // w0

  FuncOnClick = this->fields.FuncOnClick;
  this->fields.FuncOnClick = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.FuncOnClick,
    0,
    *(System_String_o **)&resultKind,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  if ( FuncOnClick )
  {
    if ( !obj )
      sub_21FFECC(v11, v12);
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
      || ListViewManager__ClippingItem_50765052((ListViewManager_o *)this, item, 0);
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportMessageSelectListViewManager__ModifyList(
        RecommendSupportMessageSelectListViewManager_o *this,
        bool isNeedSort,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_RecommendSupportMessageSelectListViewItem__o *v5; // x0
  System_Object_array *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  RecommendSupportMessageSelectListViewManager___c_c *v9; // x8
  System_Collections_Generic_IEnumerable_T__o *v10; // x21
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *static_fields; // x9
  System_Action_object__o *_9__19_0; // x22
  Il2CppObject *v13; // x23
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  if ( (byte_593436F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_RecommendSupportMessageSelectListViewItem__TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ForEach_RecommendSupportMessageSelectListViewItem___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_RecommendSupportMessageSelectListViewItem___);
    sub_21FFC50(&Method_RecommendSupportMessageSelectListViewManager___c__ModifyList_b__19_0__);
    sub_21FFC50(&RecommendSupportMessageSelectListViewManager___c_TypeInfo);
    byte_593436F = 1;
  }
  v5 = RecommendSupportMessageSelectListViewManager__EnumerateItems(this, (const MethodInfo *)isNeedSort);
  v6 = System_Linq_Enumerable__ToArray_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v5,
         (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_RecommendSupportMessageSelectListViewItem___);
  v9 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
  v10 = (System_Collections_Generic_IEnumerable_T__o *)v6;
  if ( !*(&RecommendSupportMessageSelectListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectListViewManager___c_TypeInfo, v7, v8);
    v9 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__19_0 = (System_Action_object__o *)static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( !*(&v9->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v9, v7, v8);
      static_fields = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__19_0 = (System_Action_object__o *)sub_21FFEBC(System_Action_RecommendSupportMessageSelectListViewItem__TypeInfo);
    System_Action_object____ctor(
      _9__19_0,
      v13,
      Method_RecommendSupportMessageSelectListViewManager___c__ModifyList_b__19_0__,
      0);
    v14 = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
    v14->__9__19_0 = (struct System_Action_RecommendSupportMessageSelectListViewItem__o *)_9__19_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->__9__19_0, (int32_t)_9__19_0, v15, v16, v17, v18, v19, v20);
  }
  BasicHelper__ForEach_object_(
    v10,
    (System_Action_T__o *)_9__19_0,
    (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_RecommendSupportMessageSelectListViewItem___);
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
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *scrollView; // x20
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Action_o *FuncOnMoveEnd; // x20

  if ( (byte_5934372 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_RecommendSupportMessageSelectListViewObject__TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ForEach_RecommendSupportMessageSelectListViewObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_RecommendSupportMessageSelectListViewManager___c__DisplayClass26_0__RequestListObject_b__0__);
    sub_21FFC50(&RecommendSupportMessageSelectListViewManager___c__DisplayClass26_0_TypeInfo);
    byte_5934372 = 1;
  }
  v5 = sub_21FFEBC(RecommendSupportMessageSelectListViewManager___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_13;
  *(_DWORD *)(v5 + 16) = mode;
  v8 = (System_Collections_Generic_IEnumerable_T__o *)RecommendSupportMessageSelectListViewManager__EnumerateObjects(
                                                        this,
                                                        v7);
  v9 = (System_Action_object__o *)sub_21FFEBC(System_Action_RecommendSupportMessageSelectListViewObject__TypeInfo);
  System_Action_object____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_RecommendSupportMessageSelectListViewManager___c__DisplayClass26_0__RequestListObject_b__0__,
    0);
  BasicHelper__ForEach_object_(
    v8,
    (System_Action_T__o *)v9,
    (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_RecommendSupportMessageSelectListViewObject___);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
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
      sub_21FFECC(v6, v7);
    }
  }
LABEL_12:
  FuncOnMoveEnd = this->fields.FuncOnMoveEnd;
  this->fields.FuncOnMoveEnd = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.FuncOnMoveEnd, 0, v13, v14, v15, v16, v17, v18);
  ActionExtensions__Call(FuncOnMoveEnd, 0);
}


void RecommendSupportMessageSelectListViewManager__SetFuncOnClick(
        RecommendSupportMessageSelectListViewManager_o *this,
        RecommendSupportMessageSelectListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.FuncOnClick = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.FuncOnClick,
    (int32_t)callback,
    (System_String_o *)method,
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.FuncOnClick = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.FuncOnClick,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  RecommendSupportMessageSelectListViewManager__SetMode_41561020(this, mode, v10);
}


void RecommendSupportMessageSelectListViewManager__SetMode_41561020(
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


void RecommendSupportMessageSelectListViewManager__SetMode_41569540(
        RecommendSupportMessageSelectListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.FuncOnMoveEnd = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.FuncOnMoveEnd,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  RecommendSupportMessageSelectListViewManager__SetMode_41561020(this, mode, v10);
}


void RecommendSupportMessageSelectListViewManager__SetObjectItem(
        RecommendSupportMessageSelectListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v4; // x20
  __int64 naturalAligment; // x11
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  int32_t v10; // w1

  v4 = (UnityEngine_Object_o *)obj;
  if ( (byte_5934371 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&RecommendSupportMessageSelectListViewObject_TypeInfo);
    byte_5934371 = 1;
  }
  if ( v4 )
  {
    naturalAligment = RecommendSupportMessageSelectListViewObject_TypeInfo->_2.naturalAligment;
    if ( v4->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (RecommendSupportMessageSelectListViewObject_c *)v4->klass->_2.typeHierarchy[naturalAligment - 1] != RecommendSupportMessageSelectListViewObject_TypeInfo )
        v4 = 0;
    }
    else
    {
      v4 = 0;
    }
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj, item);
  v7 = UnityEngine_Object__op_Equality(v4, 0, 0);
  if ( !v7 )
  {
    if ( !v4 )
      sub_21FFECC(v7, v8);
    if ( this->fields.initMode == 2 )
      v10 = 2;
    else
      v10 = 1;
    RecommendSupportMessageSelectListViewObject__Init((RecommendSupportMessageSelectListViewObject_o *)v4, v10, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void RecommendSupportMessageSelectListViewManager__SetScrollViewEnabled(
        RecommendSupportMessageSelectListViewManager_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0

  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    sub_21FFECC(0, value);
  UnityEngine_Behaviour__set_enabled(scrollView, value, 0);
}


bool RecommendSupportMessageSelectListViewManager___get_ClippingObjectList_b__15_0(
        RecommendSupportMessageSelectListViewManager_o *this,
        RecommendSupportMessageSelectListViewObject_o *x,
        const MethodInfo *method)
{
  ListViewItem_o *Item; // x0

  if ( !x )
    sub_21FFECC(this, 0);
  Item = (ListViewItem_o *)RecommendSupportMessageSelectListViewObject__GetItem(x, (const MethodInfo *)x);
  return Item && !Item->fields.isTermination
      || ListViewManager__ClippingItem_50765052((ListViewManager_o *)this, Item, 0);
}


void RecommendSupportMessageSelectListViewManager__add_FuncOnClick(
        RecommendSupportMessageSelectListViewManager_o *this,
        RecommendSupportMessageSelectListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *FuncOnClick; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  RecommendSupportMessageSelectListViewManager_o *v11; // x0
  RecommendSupportMessageSelectListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_5934365 & 1) == 0 )
  {
    sub_21FFC50(&RecommendSupportMessageSelectListViewManager_CallbackFunc_TypeInfo);
    byte_5934365 = 1;
  }
  FuncOnClick = (System_Delegate_o *)this->fields.FuncOnClick;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(FuncOnClick, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (RecommendSupportMessageSelectListViewManager_CallbackFunc_c *)v6->klass != RecommendSupportMessageSelectListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.FuncOnClick, v6, FuncOnClick);
    v10 = v9 == (_QWORD)FuncOnClick;
    FuncOnClick = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (RecommendSupportMessageSelectListViewManager_o *)sub_220024C(
                                                            v6,
                                                            RecommendSupportMessageSelectListViewManager_CallbackFunc_TypeInfo,
                                                            v7,
                                                            v8);
  RecommendSupportMessageSelectListViewManager__remove_FuncOnClick(v11, v12, v13);
}


void RecommendSupportMessageSelectListViewManager__add_FuncOnMoveEnd(
        RecommendSupportMessageSelectListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *FuncOnMoveEnd; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  RecommendSupportMessageSelectListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_5934367 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_5934367 = 1;
  }
  FuncOnMoveEnd = (System_Delegate_o *)this->fields.FuncOnMoveEnd;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(FuncOnMoveEnd, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.FuncOnMoveEnd, v6, FuncOnMoveEnd);
    v10 = v9 == (_QWORD)FuncOnMoveEnd;
    FuncOnMoveEnd = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (RecommendSupportMessageSelectListViewManager_o *)sub_220024C(v6, System_Action_TypeInfo, v7, v8);
  RecommendSupportMessageSelectListViewManager__remove_FuncOnMoveEnd(v11, v12, v13);
}


System_Collections_Generic_List_RecommendSupportMessageSelectListViewObject__o *RecommendSupportMessageSelectListViewManager__get_ClippingObjectList(
        RecommendSupportMessageSelectListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_RecommendSupportMessageSelectListViewObject__o *v3; // x20
  System_Func_object__bool__o *v4; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0

  if ( (byte_593436C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_RecommendSupportMessageSelectListViewObject___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_RecommendSupportMessageSelectListViewObject___);
    sub_21FFC50(&System_Func_RecommendSupportMessageSelectListViewObject__bool__TypeInfo);
    sub_21FFC50(&Method_RecommendSupportMessageSelectListViewManager__get_ClippingObjectList_b__15_0__);
    byte_593436C = 1;
  }
  v3 = RecommendSupportMessageSelectListViewManager__EnumerateObjects(this, method);
  v4 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_RecommendSupportMessageSelectListViewObject__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v4,
    (Il2CppObject *)this,
    Method_RecommendSupportMessageSelectListViewManager__get_ClippingObjectList_b__15_0__,
    0);
  v5 = System_Linq_Enumerable__Where_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v3,
         (System_Func_TSource__bool__o *)v4,
         (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_RecommendSupportMessageSelectListViewObject___);
  return (System_Collections_Generic_List_RecommendSupportMessageSelectListViewObject__o *)System_Linq_Enumerable__ToList_object_(
                                                                                             v5,
                                                                                             (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_RecommendSupportMessageSelectListViewObject___);
}


System_Collections_Generic_List_RecommendSupportMessageSelectListViewObject__o *RecommendSupportMessageSelectListViewManager__get_ObjectList(
        RecommendSupportMessageSelectListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_RecommendSupportMessageSelectListViewObject__o *v3; // x0

  if ( (byte_593436B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_RecommendSupportMessageSelectListViewObject___);
    byte_593436B = 1;
  }
  v3 = RecommendSupportMessageSelectListViewManager__EnumerateObjects(this, method);
  return (System_Collections_Generic_List_RecommendSupportMessageSelectListViewObject__o *)System_Linq_Enumerable__ToList_object_(
                                                                                             (System_Collections_Generic_IEnumerable_TSource__o *)v3,
                                                                                             (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_RecommendSupportMessageSelectListViewObject___);
}


void RecommendSupportMessageSelectListViewManager__remove_FuncOnClick(
        RecommendSupportMessageSelectListViewManager_o *this,
        RecommendSupportMessageSelectListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *FuncOnClick; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  RecommendSupportMessageSelectListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_5934366 & 1) == 0 )
  {
    sub_21FFC50(&RecommendSupportMessageSelectListViewManager_CallbackFunc_TypeInfo);
    byte_5934366 = 1;
  }
  FuncOnClick = (System_Delegate_o *)this->fields.FuncOnClick;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(FuncOnClick, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (RecommendSupportMessageSelectListViewManager_CallbackFunc_c *)v6->klass != RecommendSupportMessageSelectListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.FuncOnClick, v6, FuncOnClick);
    v10 = v9 == (_QWORD)FuncOnClick;
    FuncOnClick = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (RecommendSupportMessageSelectListViewManager_o *)sub_220024C(
                                                            v6,
                                                            RecommendSupportMessageSelectListViewManager_CallbackFunc_TypeInfo,
                                                            v7,
                                                            v8);
  RecommendSupportMessageSelectListViewManager__add_FuncOnMoveEnd(v11, v12, v13);
}


void RecommendSupportMessageSelectListViewManager__remove_FuncOnMoveEnd(
        RecommendSupportMessageSelectListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *FuncOnMoveEnd; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  RecommendSupportMessageSelectListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_5934368 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_5934368 = 1;
  }
  FuncOnMoveEnd = (System_Delegate_o *)this->fields.FuncOnMoveEnd;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(FuncOnMoveEnd, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.FuncOnMoveEnd, v6, FuncOnMoveEnd);
    v10 = v9 == (_QWORD)FuncOnMoveEnd;
    FuncOnMoveEnd = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (RecommendSupportMessageSelectListViewManager_o *)sub_220024C(v6, System_Action_TypeInfo, v7, v8);
  RecommendSupportMessageSelectListViewManager__EnumerateItems(v11, v12);
}


void RecommendSupportMessageSelectListViewManager_CallbackFunc___ctor(
        RecommendSupportMessageSelectListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1FF2620;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FF25C8;
}


System_IAsyncResult_o *RecommendSupportMessageSelectListViewManager_CallbackFunc__BeginInvoke(
        RecommendSupportMessageSelectListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-34h] BYREF

  v12 = kind;
  v11 = result;
  if ( (byte_5934373 & 1) == 0 )
  {
    sub_21FFC50(&RecommendSupportMessageSelectListViewManager_ResultKind_TypeInfo);
    byte_5934373 = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(RecommendSupportMessageSelectListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(qword_594C070, &v11);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v10, callback, object);
}


void RecommendSupportMessageSelectListViewManager_CallbackFunc__EndInvoke(
        RecommendSupportMessageSelectListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5934374 & 1) == 0 )
  {
    sub_21FFC50(&RecommendSupportMessageSelectListViewManager___c_TypeInfo);
    byte_5934374 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(RecommendSupportMessageSelectListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields->__9 = (struct RecommendSupportMessageSelectListViewManager___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields,
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
  if ( (byte_5934375 & 1) == 0 )
  {
    this = (RecommendSupportMessageSelectListViewManager___c_o *)sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportMessageSelectListViewObject___);
    byte_5934375 = 1;
  }
  if ( !x )
    sub_21FFECC(this, x);
  return (RecommendSupportMessageSelectListViewObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                            x,
                                                            (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportMessageSelectListViewObject___);
}


RecommendSupportMessageSelectListViewItem_o *RecommendSupportMessageSelectListViewManager___c___GetItemList_b__18_0(
        RecommendSupportMessageSelectListViewManager___c_o *this,
        RecommendAdviceMessageEntity_o *item,
        int32_t i,
        const MethodInfo *method)
{
  RecommendSupportMessageSelectListViewItem_o *v6; // x21
  const MethodInfo *v7; // x3

  if ( (byte_5934376 & 1) == 0 )
  {
    sub_21FFC50(&RecommendSupportMessageSelectListViewItem_TypeInfo);
    byte_5934376 = 1;
  }
  v6 = (RecommendSupportMessageSelectListViewItem_o *)sub_21FFEBC(RecommendSupportMessageSelectListViewItem_TypeInfo);
  RecommendSupportMessageSelectListViewItem___ctor(v6, i, item, v7);
  return v6;
}


bool RecommendSupportMessageSelectListViewManager___c___GetItemList_b__18_1(
        RecommendSupportMessageSelectListViewManager___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_21FFECC(this, 0);
  return entity->fields.category == 1;
}


bool RecommendSupportMessageSelectListViewManager___c___GetItemList_b__18_2(
        RecommendSupportMessageSelectListViewManager___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_21FFECC(this, 0);
  return entity->fields.category == 2;
}


bool RecommendSupportMessageSelectListViewManager___c___GetItemList_b__18_3(
        RecommendSupportMessageSelectListViewManager___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_21FFECC(this, 0);
  return entity->fields.category == 3;
}


bool RecommendSupportMessageSelectListViewManager___c___GetItemList_b__18_4(
        RecommendSupportMessageSelectListViewManager___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_21FFECC(this, 0);
  return entity->fields.category == 4;
}


void RecommendSupportMessageSelectListViewManager___c___ModifyList_b__19_0(
        RecommendSupportMessageSelectListViewManager___c_o *this,
        RecommendSupportMessageSelectListViewItem_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
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
    sub_21FFECC(this, 0);
  RecommendSupportMessageSelectListViewObject__Init(x, this->fields.mode, method);
}