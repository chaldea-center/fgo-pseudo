void __fastcall RecommendSupportMessageSelectListViewManager___ctor(
        RecommendSupportMessageSelectListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall RecommendSupportMessageSelectListViewManager__CreateList(
        RecommendSupportMessageSelectListViewManager_o *this,
        int32_t category,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  const MethodInfo *v6; // x1
  System_Collections_Generic_IEnumerable_T__o *v7; // x0
  __int64 v8; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4A573D1 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__AddRange__);
    byte_4A573D1 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  itemList = this->fields.itemList;
  v7 = (System_Collections_Generic_IEnumerable_T__o *)RecommendSupportMessageSelectListViewManager__GetItemList(
                                                        category,
                                                        v6);
  if ( !itemList
    || (System_Collections_Generic_List_object___AddRange(
          (System_Collections_Generic_List_object__o *)itemList,
          v7,
          (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_ListViewItem__AddRange__),
        (sort = this->fields.sort) == 0LL) )
  {
    sub_1B8880C(v7, v8);
  }
  sort->fields.isAscendingOrder = 0;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__CheckScroll((ListViewManager_o *)this, 0, 0LL);
}


void __fastcall RecommendSupportMessageSelectListViewManager__DestroyList(
        RecommendSupportMessageSelectListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


System_Collections_Generic_IEnumerable_RecommendSupportMessageSelectListViewItem__o *__fastcall RecommendSupportMessageSelectListViewManager__EnumerateItems(
        RecommendSupportMessageSelectListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A573CD & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_OfType_RecommendSupportMessageSelectListViewItem___);
    byte_4A573CD = 1;
  }
  return (System_Collections_Generic_IEnumerable_RecommendSupportMessageSelectListViewItem__o *)System_Linq_Enumerable__OfType_object_(
                                                                                                  (System_Collections_IEnumerable_o *)this->fields.itemList,
                                                                                                  (const MethodInfo_2EA998C *)Method_System_Linq_Enumerable_OfType_RecommendSupportMessageSelectListViewItem___);
}


System_Collections_Generic_IEnumerable_RecommendSupportMessageSelectListViewObject__o *__fastcall RecommendSupportMessageSelectListViewManager__EnumerateObjects(
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

  if ( (byte_4A573CE & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_ExcludeNull_GameObject___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_GameObject__RecommendSupportMessageSelectListViewObject___);
    sub_1B885B0(&System_Func_GameObject__RecommendSupportMessageSelectListViewObject__TypeInfo);
    sub_1B885B0(&Method_RecommendSupportMessageSelectListViewManager___c__EnumerateObjects_b__11_0__);
    sub_1B885B0(&RecommendSupportMessageSelectListViewManager___c_TypeInfo);
    byte_4A573CE = 1;
  }
  v3 = BasicHelper__ExcludeNull_object_(
         (System_Collections_Generic_IEnumerable_T__o *)this->fields.objectList,
         (const MethodInfo_2E6B624 *)Method_BasicHelper_ExcludeNull_GameObject___);
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
    _9__11_0 = (System_Func_object__object__o *)sub_1B887FC(System_Func_GameObject__RecommendSupportMessageSelectListViewObject__TypeInfo);
    System_Func_object__object____ctor(
      _9__11_0,
      v7,
      Method_RecommendSupportMessageSelectListViewManager___c__EnumerateObjects_b__11_0__,
      0LL);
    static_fields = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Func_GameObject__RecommendSupportMessageSelectListViewObject__o *)_9__11_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v9, v10);
  }
  return (System_Collections_Generic_IEnumerable_RecommendSupportMessageSelectListViewObject__o *)System_Linq_Enumerable__Select_object__object_(
                                                                                                    v5,
                                                                                                    (System_Func_TSource__TResult__o *)_9__11_0,
                                                                                                    (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_GameObject__RecommendSupportMessageSelectListViewObject___);
}


RecommendSupportMessageSelectListViewItem_o *__fastcall RecommendSupportMessageSelectListViewManager__GetItem(
        RecommendSupportMessageSelectListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  RecommendSupportMessageSelectListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A573D4 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_IndexValue_ListViewItem___);
    sub_1B885B0(&RecommendSupportMessageSelectListViewItem_TypeInfo);
    byte_4A573D4 = 1;
  }
  result = (RecommendSupportMessageSelectListViewItem_o *)BasicHelper__IndexValue_object__48686808(
                                                            (System_Collections_Generic_List_T__o *)this->fields.itemList,
                                                            index,
                                                            0LL,
                                                            (const MethodInfo_2E6E6D8 *)Method_BasicHelper_IndexValue_ListViewItem___);
  if ( result )
  {
    methodPtr_low = LOBYTE(RecommendSupportMessageSelectListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (RecommendSupportMessageSelectListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != RecommendSupportMessageSelectListViewItem_TypeInfo )
        return 0LL;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


System_Collections_Generic_IEnumerable_RecommendSupportMessageSelectListViewItem__o *__fastcall RecommendSupportMessageSelectListViewManager__GetItemList(
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
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *static_fields; // x0
  ServantStatusBattleListViewItem_o *p__9__18_1; // x0
  RecommendSupportMessageSelectListViewManager___c_c *v13; // x0
  Il2CppObject *v14; // x21
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *v15; // x0
  RecommendSupportMessageSelectListViewManager___c_c *v16; // x0
  Il2CppObject *v17; // x21
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *v18; // x0
  RecommendSupportMessageSelectListViewManager___c_c *v19; // x0
  Il2CppObject *v20; // x21
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *v21; // x0
  RecommendSupportMessageSelectListViewManager___c_c *v22; // x0
  System_Func_T1__T2__TResult__o *_9__18_0; // x20
  Il2CppObject *v24; // x21
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0

  if ( (byte_4A573D2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_RecommendAdviceMessageEntity__RecommendSupportMessageSelectListViewItem___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_RecommendSupportMessageSelectListViewItem___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_RecommendAdviceMessageEntity___);
    sub_1B885B0(&System_Func_RecommendAdviceMessageEntity__bool__TypeInfo);
    sub_1B885B0(&System_Func_RecommendAdviceMessageEntity__int__RecommendSupportMessageSelectListViewItem__TypeInfo);
    sub_1B885B0(&Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_0__);
    sub_1B885B0(&Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_1__);
    sub_1B885B0(&Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_2__);
    sub_1B885B0(&Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_3__);
    sub_1B885B0(&Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_4__);
    sub_1B885B0(&RecommendSupportMessageSelectListViewManager___c_TypeInfo);
    byte_4A573D2 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
  if ( !Master_object )
    sub_1B8880C(0LL, v4);
  Entities = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendAdviceMessageMaster__GetEntities(
                                                                    (RecommendAdviceMessageMaster_o *)Master_object,
                                                                    0LL);
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
      _9__18_1 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_RecommendAdviceMessageEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__18_1,
        v8,
        Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_1__,
        0LL);
      static_fields = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__18_1 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__18_1;
      p__9__18_1 = (ServantStatusBattleListViewItem_o *)&static_fields->__9__18_1;
      break;
    case 2:
      v13 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      if ( !RecommendSupportMessageSelectListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectListViewManager___c_TypeInfo);
        v13 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      }
      _9__18_1 = (System_Func_object__bool__o *)v13->static_fields->__9__18_2;
      if ( _9__18_1 )
        goto LABEL_32;
      if ( !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        v13 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      }
      v14 = (Il2CppObject *)v13->static_fields->__9;
      _9__18_1 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_RecommendAdviceMessageEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__18_1,
        v14,
        Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_2__,
        0LL);
      v15 = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
      v15->__9__18_2 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__18_1;
      p__9__18_1 = (ServantStatusBattleListViewItem_o *)&v15->__9__18_2;
      break;
    case 3:
      v19 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      if ( !RecommendSupportMessageSelectListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectListViewManager___c_TypeInfo);
        v19 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      }
      _9__18_1 = (System_Func_object__bool__o *)v19->static_fields->__9__18_3;
      if ( _9__18_1 )
        goto LABEL_32;
      if ( !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        v19 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      }
      v20 = (Il2CppObject *)v19->static_fields->__9;
      _9__18_1 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_RecommendAdviceMessageEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__18_1,
        v20,
        Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_3__,
        0LL);
      v21 = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
      v21->__9__18_3 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__18_1;
      p__9__18_1 = (ServantStatusBattleListViewItem_o *)&v21->__9__18_3;
      break;
    case 4:
      v16 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      if ( !RecommendSupportMessageSelectListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectListViewManager___c_TypeInfo);
        v16 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      }
      _9__18_1 = (System_Func_object__bool__o *)v16->static_fields->__9__18_4;
      if ( _9__18_1 )
        goto LABEL_32;
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      }
      v17 = (Il2CppObject *)v16->static_fields->__9;
      _9__18_1 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_RecommendAdviceMessageEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__18_1,
        v17,
        Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_4__,
        0LL);
      v18 = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
      v18->__9__18_4 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__18_1;
      p__9__18_1 = (ServantStatusBattleListViewItem_o *)&v18->__9__18_4;
      break;
    default:
      goto LABEL_33;
  }
  sub_1B88554(p__9__18_1, (int32_t)_9__18_1, v9, v10);
LABEL_32:
  Entities = System_Linq_Enumerable__Where_object_(
               Entities,
               (System_Func_TSource__bool__o *)_9__18_1,
               (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_RecommendAdviceMessageEntity___);
LABEL_33:
  v22 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
  if ( !RecommendSupportMessageSelectListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectListViewManager___c_TypeInfo);
    v22 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
  }
  _9__18_0 = (System_Func_T1__T2__TResult__o *)v22->static_fields->__9__18_0;
  if ( !_9__18_0 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v22->static_fields->__9;
    _9__18_0 = (System_Func_T1__T2__TResult__o *)sub_1B887FC(System_Func_RecommendAdviceMessageEntity__int__RecommendSupportMessageSelectListViewItem__TypeInfo);
    System_Func_object__int__object____ctor(
      _9__18_0,
      v24,
      Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_0__,
      0LL);
    v25 = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
    v25->__9__18_0 = (struct System_Func_RecommendAdviceMessageEntity__int__RecommendSupportMessageSelectListViewItem__o *)_9__18_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v25->__9__18_0, (int32_t)_9__18_0, v26, v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object__48957184(
                                                               Entities,
                                                               (System_Func_TSource__int__TResult__o *)_9__18_0,
                                                               (const MethodInfo_2EB0700 *)Method_System_Linq_Enumerable_Select_RecommendAdviceMessageEntity__RecommendSupportMessageSelectListViewItem___);
  return (System_Collections_Generic_IEnumerable_RecommendSupportMessageSelectListViewItem__o *)System_Linq_Enumerable__ToArray_object_(
                                                                                                  v28,
                                                                                                  (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_RecommendSupportMessageSelectListViewItem___);
}


void __fastcall RecommendSupportMessageSelectListViewManager__InvokeOnClick(
        RecommendSupportMessageSelectListViewManager_o *this,
        ListViewObject_o *obj,
        int32_t resultKind,
        const MethodInfo *method)
{
  struct RecommendSupportMessageSelectListViewManager_CallbackFunc_o *FuncOnClick; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  unsigned int Index; // w0

  FuncOnClick = this->fields.FuncOnClick;
  this->fields.FuncOnClick = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.FuncOnClick, 0, resultKind, (int32_t)method);
  if ( FuncOnClick )
  {
    if ( !obj )
      sub_1B8880C(v7, v8);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))FuncOnClick->fields.m_target)(
      FuncOnClick->fields.original_method_info,
      (unsigned int)resultKind,
      Index,
      *(_QWORD *)&FuncOnClick->fields.extra_arg);
  }
}


bool __fastcall RecommendSupportMessageSelectListViewManager__IsClippingOrNoTermination(
        RecommendSupportMessageSelectListViewManager_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  return item && !item->fields.isTermination
      || ListViewManager__ClippingItem_40722428((ListViewManager_o *)this, item, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportMessageSelectListViewManager__ModifyList(
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

  if ( (byte_4A573D3 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_RecommendSupportMessageSelectListViewItem__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_RecommendSupportMessageSelectListViewItem___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_RecommendSupportMessageSelectListViewItem___);
    sub_1B885B0(&Method_RecommendSupportMessageSelectListViewManager___c__ModifyList_b__19_0__);
    sub_1B885B0(&RecommendSupportMessageSelectListViewManager___c_TypeInfo);
    byte_4A573D3 = 1;
  }
  v5 = RecommendSupportMessageSelectListViewManager__EnumerateItems(this, (const MethodInfo *)isNeedSort);
  v6 = System_Linq_Enumerable__ToArray_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v5,
         (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_RecommendSupportMessageSelectListViewItem___);
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
    _9__19_0 = (System_Action_object__o *)sub_1B887FC(System_Action_RecommendSupportMessageSelectListViewItem__TypeInfo);
    System_Action_object____ctor(
      _9__19_0,
      v10,
      Method_RecommendSupportMessageSelectListViewManager___c__ModifyList_b__19_0__,
      0LL);
    static_fields = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__19_0 = (struct System_Action_RecommendSupportMessageSelectListViewItem__o *)_9__19_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__19_0, (int32_t)_9__19_0, v12, v13);
  }
  BasicHelper__ForEach_object_(
    v8,
    (System_Action_T__o *)_9__19_0,
    (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_RecommendSupportMessageSelectListViewItem___);
  if ( isNeedSort )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall RecommendSupportMessageSelectListViewManager__OnClickListView(
        RecommendSupportMessageSelectListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall RecommendSupportMessageSelectListViewManager__OnClickSelectListView(
        RecommendSupportMessageSelectListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  RecommendSupportMessageSelectListViewManager__InvokeOnClick(this, obj, 0, v3);
}


void __fastcall RecommendSupportMessageSelectListViewManager__RequestListObject(
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
  System_Action_o *FuncOnMoveEnd; // x20

  if ( (byte_4A573D6 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_RecommendSupportMessageSelectListViewObject__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_RecommendSupportMessageSelectListViewObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_RecommendSupportMessageSelectListViewManager___c__DisplayClass26_0__RequestListObject_b__0__);
    sub_1B885B0(&RecommendSupportMessageSelectListViewManager___c__DisplayClass26_0_TypeInfo);
    byte_4A573D6 = 1;
  }
  v5 = sub_1B887FC(RecommendSupportMessageSelectListViewManager___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_13;
  *(_DWORD *)(v5 + 16) = mode;
  v8 = (System_Collections_Generic_IEnumerable_T__o *)RecommendSupportMessageSelectListViewManager__EnumerateObjects(
                                                        this,
                                                        v7);
  v9 = (System_Action_object__o *)sub_1B887FC(System_Action_RecommendSupportMessageSelectListViewObject__TypeInfo);
  System_Action_object____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_RecommendSupportMessageSelectListViewManager___c__DisplayClass26_0__RequestListObject_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    v8,
    (System_Action_T__o *)v9,
    (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_RecommendSupportMessageSelectListViewObject___);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    v6 = this->fields.scrollView;
    if ( !v6 )
      goto LABEL_13;
    ((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v6->klass->vtable._8_UpdateScrollbars.method)(
      v6,
      1LL,
      v6->klass->vtable._9_SetDragAmount.methodPtr);
    v6 = this->fields.scrollView;
    if ( !v6 )
      goto LABEL_13;
    if ( (((__int64 (__fastcall *)(UIScrollView_o *, Il2CppMethodPointer))v6->klass->vtable._6_get_shouldMoveVertically.method)(
            v6,
            v6->klass->vtable._7_get_shouldMove.methodPtr) & 1) != 0 )
    {
      v6 = this->fields.scrollView;
      if ( v6 )
      {
        UIScrollView__UpdatePosition(v6, 0LL);
        goto LABEL_12;
      }
LABEL_13:
      sub_1B8880C(v6, v7);
    }
  }
LABEL_12:
  FuncOnMoveEnd = this->fields.FuncOnMoveEnd;
  this->fields.FuncOnMoveEnd = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.FuncOnMoveEnd, 0, v11, v12);
  ActionExtensions__Call(FuncOnMoveEnd, 0LL);
}


void __fastcall RecommendSupportMessageSelectListViewManager__SetFuncOnClick(
        RecommendSupportMessageSelectListViewManager_o *this,
        RecommendSupportMessageSelectListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.FuncOnClick = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.FuncOnClick, (int32_t)callback, (int32_t)method, v3);
}


void __fastcall RecommendSupportMessageSelectListViewManager__SetMode(
        RecommendSupportMessageSelectListViewManager_o *this,
        int32_t mode,
        RecommendSupportMessageSelectListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.FuncOnClick = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.FuncOnClick,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  RecommendSupportMessageSelectListViewManager__SetMode_32461592(this, mode, v6);
}


void __fastcall RecommendSupportMessageSelectListViewManager__SetMode_32461592(
        RecommendSupportMessageSelectListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int v6; // w9
  int32_t v7; // w1

  this->fields.initMode = mode;
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
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


void __fastcall RecommendSupportMessageSelectListViewManager__SetMode_32470184(
        RecommendSupportMessageSelectListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.FuncOnMoveEnd = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.FuncOnMoveEnd,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  RecommendSupportMessageSelectListViewManager__SetMode_32461592(this, mode, v6);
}


void __fastcall RecommendSupportMessageSelectListViewManager__SetObjectItem(
        RecommendSupportMessageSelectListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x11
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  int32_t v10; // w1

  if ( (byte_4A573D5 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&RecommendSupportMessageSelectListViewObject_TypeInfo);
    byte_4A573D5 = 1;
  }
  if ( obj )
  {
    methodPtr_low = LOBYTE(RecommendSupportMessageSelectListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (RecommendSupportMessageSelectListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != RecommendSupportMessageSelectListViewObject_TypeInfo )
        obj = 0LL;
    }
    else
    {
      obj = 0LL;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)obj, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !obj )
      sub_1B8880C(v7, v8);
    if ( this->fields.initMode == 2 )
      v10 = 2;
    else
      v10 = 1;
    RecommendSupportMessageSelectListViewObject__Init((RecommendSupportMessageSelectListViewObject_o *)obj, v10, v9);
  }
}


void __fastcall RecommendSupportMessageSelectListViewManager__SetScrollViewEnabled(
        RecommendSupportMessageSelectListViewManager_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0

  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    sub_1B8880C(0LL, value);
  UnityEngine_Behaviour__set_enabled(scrollView, value, 0LL);
}


bool __fastcall RecommendSupportMessageSelectListViewManager___get_ClippingObjectList_b__15_0(
        RecommendSupportMessageSelectListViewManager_o *this,
        RecommendSupportMessageSelectListViewObject_o *x,
        const MethodInfo *method)
{
  ListViewItem_o *Item; // x0

  if ( !x )
    sub_1B8880C(this, 0LL);
  Item = (ListViewItem_o *)RecommendSupportMessageSelectListViewObject__GetItem(x, (const MethodInfo *)x);
  return Item && !Item->fields.isTermination
      || ListViewManager__ClippingItem_40722428((ListViewManager_o *)this, Item, 0LL);
}


void __fastcall RecommendSupportMessageSelectListViewManager__add_FuncOnClick(
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

  if ( (byte_4A573C9 & 1) == 0 )
  {
    sub_1B885B0(&RecommendSupportMessageSelectListViewManager_CallbackFunc_TypeInfo);
    byte_4A573C9 = 1;
  }
  FuncOnClick = (System_Delegate_o *)this->fields.FuncOnClick;
  p_FuncOnClick = &this->fields.FuncOnClick;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(FuncOnClick, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (RecommendSupportMessageSelectListViewManager_CallbackFunc_c *)v7->klass != RecommendSupportMessageSelectListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1BC3AA0(p_FuncOnClick, v7, FuncOnClick);
    v9 = FuncOnClick == (System_Delegate_o *)v8;
    FuncOnClick = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (RecommendSupportMessageSelectListViewManager_o *)sub_1B88ACC(v7);
  RecommendSupportMessageSelectListViewManager__remove_FuncOnClick(v10, v11, v12);
}


void __fastcall RecommendSupportMessageSelectListViewManager__add_FuncOnMoveEnd(
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

  if ( (byte_4A573CB & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A573CB = 1;
  }
  FuncOnMoveEnd = (System_Delegate_o *)this->fields.FuncOnMoveEnd;
  p_FuncOnMoveEnd = &this->fields.FuncOnMoveEnd;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(FuncOnMoveEnd, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1BC3AA0(p_FuncOnMoveEnd, v7, FuncOnMoveEnd);
    v9 = FuncOnMoveEnd == (System_Delegate_o *)v8;
    FuncOnMoveEnd = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (RecommendSupportMessageSelectListViewManager_o *)sub_1B88ACC(v7);
  RecommendSupportMessageSelectListViewManager__remove_FuncOnMoveEnd(v10, v11, v12);
}


System_Collections_Generic_List_RecommendSupportMessageSelectListViewObject__o *__fastcall RecommendSupportMessageSelectListViewManager__get_ClippingObjectList(
        RecommendSupportMessageSelectListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_RecommendSupportMessageSelectListViewObject__o *v3; // x20
  System_Func_object__bool__o *v4; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0

  if ( (byte_4A573D0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_RecommendSupportMessageSelectListViewObject___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_RecommendSupportMessageSelectListViewObject___);
    sub_1B885B0(&System_Func_RecommendSupportMessageSelectListViewObject__bool__TypeInfo);
    sub_1B885B0(&Method_RecommendSupportMessageSelectListViewManager__get_ClippingObjectList_b__15_0__);
    byte_4A573D0 = 1;
  }
  v3 = RecommendSupportMessageSelectListViewManager__EnumerateObjects(this, method);
  v4 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_RecommendSupportMessageSelectListViewObject__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v4,
    (Il2CppObject *)this,
    Method_RecommendSupportMessageSelectListViewManager__get_ClippingObjectList_b__15_0__,
    0LL);
  v5 = System_Linq_Enumerable__Where_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v3,
         (System_Func_TSource__bool__o *)v4,
         (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_RecommendSupportMessageSelectListViewObject___);
  return (System_Collections_Generic_List_RecommendSupportMessageSelectListViewObject__o *)System_Linq_Enumerable__ToList_object_(
                                                                                             v5,
                                                                                             (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_RecommendSupportMessageSelectListViewObject___);
}


System_Collections_Generic_List_RecommendSupportMessageSelectListViewObject__o *__fastcall RecommendSupportMessageSelectListViewManager__get_ObjectList(
        RecommendSupportMessageSelectListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_RecommendSupportMessageSelectListViewObject__o *v3; // x0

  if ( (byte_4A573CF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_RecommendSupportMessageSelectListViewObject___);
    byte_4A573CF = 1;
  }
  v3 = RecommendSupportMessageSelectListViewManager__EnumerateObjects(this, method);
  return (System_Collections_Generic_List_RecommendSupportMessageSelectListViewObject__o *)System_Linq_Enumerable__ToList_object_(
                                                                                             (System_Collections_Generic_IEnumerable_TSource__o *)v3,
                                                                                             (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_RecommendSupportMessageSelectListViewObject___);
}


void __fastcall RecommendSupportMessageSelectListViewManager__remove_FuncOnClick(
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

  if ( (byte_4A573CA & 1) == 0 )
  {
    sub_1B885B0(&RecommendSupportMessageSelectListViewManager_CallbackFunc_TypeInfo);
    byte_4A573CA = 1;
  }
  FuncOnClick = (System_Delegate_o *)this->fields.FuncOnClick;
  p_FuncOnClick = &this->fields.FuncOnClick;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(FuncOnClick, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (RecommendSupportMessageSelectListViewManager_CallbackFunc_c *)v7->klass != RecommendSupportMessageSelectListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1BC3AA0(p_FuncOnClick, v7, FuncOnClick);
    v9 = FuncOnClick == (System_Delegate_o *)v8;
    FuncOnClick = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (RecommendSupportMessageSelectListViewManager_o *)sub_1B88ACC(v7);
  RecommendSupportMessageSelectListViewManager__add_FuncOnMoveEnd(v10, v11, v12);
}


void __fastcall RecommendSupportMessageSelectListViewManager__remove_FuncOnMoveEnd(
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

  if ( (byte_4A573CC & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A573CC = 1;
  }
  FuncOnMoveEnd = (System_Delegate_o *)this->fields.FuncOnMoveEnd;
  p_FuncOnMoveEnd = &this->fields.FuncOnMoveEnd;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(FuncOnMoveEnd, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1BC3AA0(p_FuncOnMoveEnd, v7, FuncOnMoveEnd);
    v9 = FuncOnMoveEnd == (System_Delegate_o *)v8;
    FuncOnMoveEnd = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (RecommendSupportMessageSelectListViewManager_o *)sub_1B88ACC(v7);
  RecommendSupportMessageSelectListViewManager__EnumerateItems(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportMessageSelectListViewManager_CallbackFunc___ctor(
        RecommendSupportMessageSelectListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19C9BAC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C9B54;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall RecommendSupportMessageSelectListViewManager_CallbackFunc__BeginInvoke(
        RecommendSupportMessageSelectListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = result;
  v15 = kind;
  if ( (byte_4A573D7 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&RecommendSupportMessageSelectListViewManager_ResultKind_TypeInfo);
    byte_4A573D7 = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(
             RecommendSupportMessageSelectListViewManager_ResultKind_TypeInfo,
             &v15,
             *(_QWORD *)&result,
             callback,
             object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1B88564(this, v13, callback, object);
}


void __fastcall RecommendSupportMessageSelectListViewManager_CallbackFunc__EndInvoke(
        RecommendSupportMessageSelectListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall RecommendSupportMessageSelectListViewManager_CallbackFunc__Invoke(
        RecommendSupportMessageSelectListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    kind,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall RecommendSupportMessageSelectListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A573D8 & 1) == 0 )
  {
    sub_1B885B0(&RecommendSupportMessageSelectListViewManager___c_TypeInfo);
    byte_4A573D8 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(RecommendSupportMessageSelectListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields->__9 = (struct RecommendSupportMessageSelectListViewManager___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall RecommendSupportMessageSelectListViewManager___c___ctor(
        RecommendSupportMessageSelectListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


RecommendSupportMessageSelectListViewObject_o *__fastcall RecommendSupportMessageSelectListViewManager___c___EnumerateObjects_b__11_0(
        RecommendSupportMessageSelectListViewManager___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  if ( (byte_4A573D9 & 1) == 0 )
  {
    this = (RecommendSupportMessageSelectListViewManager___c_o *)sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_RecommendSupportMessageSelectListViewObject___);
    byte_4A573D9 = 1;
  }
  if ( !x )
    sub_1B8880C(this, x);
  return (RecommendSupportMessageSelectListViewObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                            x,
                                                            (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportMessageSelectListViewObject___);
}


RecommendSupportMessageSelectListViewItem_o *__fastcall RecommendSupportMessageSelectListViewManager___c___GetItemList_b__18_0(
        RecommendSupportMessageSelectListViewManager___c_o *this,
        RecommendAdviceMessageEntity_o *item,
        int32_t i,
        const MethodInfo *method)
{
  RecommendSupportMessageSelectListViewItem_o *v6; // x21
  const MethodInfo *v7; // x3

  if ( (byte_4A573DA & 1) == 0 )
  {
    sub_1B885B0(&RecommendSupportMessageSelectListViewItem_TypeInfo);
    byte_4A573DA = 1;
  }
  v6 = (RecommendSupportMessageSelectListViewItem_o *)sub_1B887FC(RecommendSupportMessageSelectListViewItem_TypeInfo);
  RecommendSupportMessageSelectListViewItem___ctor(v6, i, item, v7);
  return v6;
}


bool __fastcall RecommendSupportMessageSelectListViewManager___c___GetItemList_b__18_1(
        RecommendSupportMessageSelectListViewManager___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B8880C(this, 0LL);
  return entity->fields.category == 1;
}


bool __fastcall RecommendSupportMessageSelectListViewManager___c___GetItemList_b__18_2(
        RecommendSupportMessageSelectListViewManager___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B8880C(this, 0LL);
  return entity->fields.category == 2;
}


bool __fastcall RecommendSupportMessageSelectListViewManager___c___GetItemList_b__18_3(
        RecommendSupportMessageSelectListViewManager___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B8880C(this, 0LL);
  return entity->fields.category == 3;
}


bool __fastcall RecommendSupportMessageSelectListViewManager___c___GetItemList_b__18_4(
        RecommendSupportMessageSelectListViewManager___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B8880C(this, 0LL);
  return entity->fields.category == 4;
}


void __fastcall RecommendSupportMessageSelectListViewManager___c___ModifyList_b__19_0(
        RecommendSupportMessageSelectListViewManager___c_o *this,
        RecommendSupportMessageSelectListViewItem_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  RecommendSupportMessageSelectListViewItem__UpdateProperties(x, (const MethodInfo *)x);
}


void __fastcall RecommendSupportMessageSelectListViewManager___c__DisplayClass26_0___ctor(
        RecommendSupportMessageSelectListViewManager___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall RecommendSupportMessageSelectListViewManager___c__DisplayClass26_0___RequestListObject_b__0(
        RecommendSupportMessageSelectListViewManager___c__DisplayClass26_0_o *this,
        RecommendSupportMessageSelectListViewObject_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  RecommendSupportMessageSelectListViewObject__Init(x, this->fields.mode, method);
}