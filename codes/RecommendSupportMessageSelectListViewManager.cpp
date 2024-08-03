void __fastcall RecommendSupportMessageSelectListViewManager___ctor(
        RecommendSupportMessageSelectListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportMessageSelectListViewManager__CreateList(
        RecommendSupportMessageSelectListViewManager_o *this,
        int32_t category,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  const MethodInfo *v6; // x1
  System_Collections_Generic_IEnumerable_T__o *v7; // x0

  if ( (byte_49F8701 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ListViewItem__AddRange__, *(_QWORD *)&category);
    byte_49F8701 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  itemList = this->fields.itemList;
  v7 = (System_Collections_Generic_IEnumerable_T__o *)RecommendSupportMessageSelectListViewManager__GetItemList(
                                                        category,
                                                        v6);
  if ( !itemList )
    sub_1B64324(v7);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)itemList,
    v7,
    (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_ListViewItem__AddRange__);
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
  if ( (byte_49F86FD & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_OfType_RecommendSupportMessageSelectListViewItem___, method);
    byte_49F86FD = 1;
  }
  return (System_Collections_Generic_IEnumerable_RecommendSupportMessageSelectListViewItem__o *)System_Linq_Enumerable__OfType_object_(
                                                                                                  (System_Collections_IEnumerable_o *)this->fields.itemList,
                                                                                                  (const MethodInfo_2E62C20 *)Method_System_Linq_Enumerable_OfType_RecommendSupportMessageSelectListViewItem___);
}


System_Collections_Generic_IEnumerable_RecommendSupportMessageSelectListViewObject__o *__fastcall RecommendSupportMessageSelectListViewManager__EnumerateObjects(
        RecommendSupportMessageSelectListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_T__o *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  RecommendSupportMessageSelectListViewManager___c_c *v10; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x19
  System_Func_object__object__o *_9__11_0; // x20
  Il2CppObject *v13; // x21
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_49F86FE & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_ExcludeNull_GameObject___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_GameObject__RecommendSupportMessageSelectListViewObject___, v3);
    sub_1B640C8(&System_Func_GameObject__RecommendSupportMessageSelectListViewObject__TypeInfo, v4);
    sub_1B640C8(&Method_RecommendSupportMessageSelectListViewManager___c__EnumerateObjects_b__11_0__, v5);
    sub_1B640C8(&RecommendSupportMessageSelectListViewManager___c_TypeInfo, v6);
    byte_49F86FE = 1;
  }
  v7 = BasicHelper__ExcludeNull_object_(
         (System_Collections_Generic_IEnumerable_T__o *)this->fields.objectList,
         (const MethodInfo_2E251C4 *)Method_BasicHelper_ExcludeNull_GameObject___);
  v10 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)v7;
  if ( !RecommendSupportMessageSelectListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectListViewManager___c_TypeInfo);
    v10 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
  }
  _9__11_0 = (System_Func_object__object__o *)v10->static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__11_0 = (System_Func_object__object__o *)sub_1B64314(
                                                  System_Func_GameObject__RecommendSupportMessageSelectListViewObject__TypeInfo,
                                                  v8,
                                                  v9);
    System_Func_object__object____ctor(
      _9__11_0,
      v13,
      Method_RecommendSupportMessageSelectListViewManager___c__EnumerateObjects_b__11_0__,
      0LL);
    static_fields = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Func_GameObject__RecommendSupportMessageSelectListViewObject__o *)_9__11_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v15, v16);
  }
  return (System_Collections_Generic_IEnumerable_RecommendSupportMessageSelectListViewObject__o *)System_Linq_Enumerable__Select_object__object_(
                                                                                                    v11,
                                                                                                    (System_Func_TSource__TResult__o *)_9__11_0,
                                                                                                    (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_GameObject__RecommendSupportMessageSelectListViewObject___);
}


// local variable allocation has failed, the output may be wrong!
RecommendSupportMessageSelectListViewItem_o *__fastcall RecommendSupportMessageSelectListViewManager__GetItem(
        RecommendSupportMessageSelectListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  RecommendSupportMessageSelectListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_49F8704 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_IndexValue_ListViewItem___, *(_QWORD *)&index);
    sub_1B640C8(&RecommendSupportMessageSelectListViewItem_TypeInfo, v5);
    byte_49F8704 = 1;
  }
  result = (RecommendSupportMessageSelectListViewItem_o *)BasicHelper__IndexValue_object__48398780(
                                                            (System_Collections_Generic_List_T__o *)this->fields.itemList,
                                                            index,
                                                            0LL,
                                                            (const MethodInfo_2E281BC *)Method_BasicHelper_IndexValue_ListViewItem___);
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
  __int64 v15; // x1
  Il2CppObject *Master_object; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_IEnumerable_TSource__o *Entities; // x19
  RecommendSupportMessageSelectListViewManager___c_c *v20; // x0
  System_Func_object__bool__o *_9__18_1; // x20
  Il2CppObject *v22; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *static_fields; // x0
  ServantStatusBattleListViewItem_o *p__9__18_1; // x0
  RecommendSupportMessageSelectListViewManager___c_c *v27; // x0
  Il2CppObject *v28; // x21
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *v29; // x0
  RecommendSupportMessageSelectListViewManager___c_c *v30; // x0
  Il2CppObject *v31; // x21
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *v32; // x0
  RecommendSupportMessageSelectListViewManager___c_c *v33; // x0
  Il2CppObject *v34; // x21
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *v35; // x0
  RecommendSupportMessageSelectListViewManager___c_c *v36; // x0
  Il2CppObject *v37; // x21
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *v38; // x0
  RecommendSupportMessageSelectListViewManager___c_c *v39; // x0
  System_Func_T1__T2__TResult__o *_9__18_0; // x20
  Il2CppObject *v41; // x21
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0

  if ( (byte_49F8702 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_RecommendAdviceMessageMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    sub_1B640C8(
      &Method_System_Linq_Enumerable_Select_RecommendAdviceMessageEntity__RecommendSupportMessageSelectListViewItem___,
      v4);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_RecommendSupportMessageSelectListViewItem___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_RecommendAdviceMessageEntity___, v6);
    sub_1B640C8(&System_Func_RecommendAdviceMessageEntity__bool__TypeInfo, v7);
    sub_1B640C8(&System_Func_RecommendAdviceMessageEntity__int__RecommendSupportMessageSelectListViewItem__TypeInfo, v8);
    sub_1B640C8(&Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_0__, v9);
    sub_1B640C8(&Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_1__, v10);
    sub_1B640C8(&Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_2__, v11);
    sub_1B640C8(&Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_3__, v12);
    sub_1B640C8(&Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_4__, v13);
    sub_1B640C8(&Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_5__, v14);
    sub_1B640C8(&RecommendSupportMessageSelectListViewManager___c_TypeInfo, v15);
    byte_49F8702 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
  if ( !Master_object )
    sub_1B64324(0LL);
  Entities = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendAdviceMessageMaster__GetEntities(
                                                                    (RecommendAdviceMessageMaster_o *)Master_object,
                                                                    0LL);
  switch ( category )
  {
    case 1:
      v20 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      if ( !RecommendSupportMessageSelectListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectListViewManager___c_TypeInfo);
        v20 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      }
      _9__18_1 = (System_Func_object__bool__o *)v20->static_fields->__9__18_1;
      if ( _9__18_1 )
        goto LABEL_38;
      if ( !v20->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v20);
        v20 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      }
      v22 = (Il2CppObject *)v20->static_fields->__9;
      _9__18_1 = (System_Func_object__bool__o *)sub_1B64314(
                                                  System_Func_RecommendAdviceMessageEntity__bool__TypeInfo,
                                                  v17,
                                                  v18);
      System_Func_object__bool____ctor(
        _9__18_1,
        v22,
        Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_1__,
        0LL);
      static_fields = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__18_1 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__18_1;
      p__9__18_1 = (ServantStatusBattleListViewItem_o *)&static_fields->__9__18_1;
      break;
    case 2:
      v27 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      if ( !RecommendSupportMessageSelectListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectListViewManager___c_TypeInfo);
        v27 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      }
      _9__18_1 = (System_Func_object__bool__o *)v27->static_fields->__9__18_2;
      if ( _9__18_1 )
        goto LABEL_38;
      if ( !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27);
        v27 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      }
      v28 = (Il2CppObject *)v27->static_fields->__9;
      _9__18_1 = (System_Func_object__bool__o *)sub_1B64314(
                                                  System_Func_RecommendAdviceMessageEntity__bool__TypeInfo,
                                                  v17,
                                                  v18);
      System_Func_object__bool____ctor(
        _9__18_1,
        v28,
        Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_2__,
        0LL);
      v29 = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
      v29->__9__18_2 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__18_1;
      p__9__18_1 = (ServantStatusBattleListViewItem_o *)&v29->__9__18_2;
      break;
    case 3:
      v30 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      if ( !RecommendSupportMessageSelectListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectListViewManager___c_TypeInfo);
        v30 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      }
      _9__18_1 = (System_Func_object__bool__o *)v30->static_fields->__9__18_3;
      if ( _9__18_1 )
        goto LABEL_38;
      if ( !v30->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v30);
        v30 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      }
      v31 = (Il2CppObject *)v30->static_fields->__9;
      _9__18_1 = (System_Func_object__bool__o *)sub_1B64314(
                                                  System_Func_RecommendAdviceMessageEntity__bool__TypeInfo,
                                                  v17,
                                                  v18);
      System_Func_object__bool____ctor(
        _9__18_1,
        v31,
        Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_3__,
        0LL);
      v32 = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
      v32->__9__18_3 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__18_1;
      p__9__18_1 = (ServantStatusBattleListViewItem_o *)&v32->__9__18_3;
      break;
    case 4:
      v33 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      if ( !RecommendSupportMessageSelectListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectListViewManager___c_TypeInfo);
        v33 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      }
      _9__18_1 = (System_Func_object__bool__o *)v33->static_fields->__9__18_4;
      if ( _9__18_1 )
        goto LABEL_38;
      if ( !v33->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v33);
        v33 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      }
      v34 = (Il2CppObject *)v33->static_fields->__9;
      _9__18_1 = (System_Func_object__bool__o *)sub_1B64314(
                                                  System_Func_RecommendAdviceMessageEntity__bool__TypeInfo,
                                                  v17,
                                                  v18);
      System_Func_object__bool____ctor(
        _9__18_1,
        v34,
        Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_4__,
        0LL);
      v35 = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
      v35->__9__18_4 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__18_1;
      p__9__18_1 = (ServantStatusBattleListViewItem_o *)&v35->__9__18_4;
      break;
    case 5:
      v36 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      if ( !RecommendSupportMessageSelectListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectListViewManager___c_TypeInfo);
        v36 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      }
      _9__18_1 = (System_Func_object__bool__o *)v36->static_fields->__9__18_5;
      if ( _9__18_1 )
        goto LABEL_38;
      if ( !v36->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v36);
        v36 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      }
      v37 = (Il2CppObject *)v36->static_fields->__9;
      _9__18_1 = (System_Func_object__bool__o *)sub_1B64314(
                                                  System_Func_RecommendAdviceMessageEntity__bool__TypeInfo,
                                                  v17,
                                                  v18);
      System_Func_object__bool____ctor(
        _9__18_1,
        v37,
        Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_5__,
        0LL);
      v38 = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
      v38->__9__18_5 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__18_1;
      p__9__18_1 = (ServantStatusBattleListViewItem_o *)&v38->__9__18_5;
      break;
    default:
      goto LABEL_39;
  }
  sub_1B6406C(p__9__18_1, (int32_t)_9__18_1, v23, v24);
LABEL_38:
  Entities = System_Linq_Enumerable__Where_object_(
               Entities,
               (System_Func_TSource__bool__o *)_9__18_1,
               (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_RecommendAdviceMessageEntity___);
LABEL_39:
  v39 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
  if ( !RecommendSupportMessageSelectListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectListViewManager___c_TypeInfo);
    v39 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
  }
  _9__18_0 = (System_Func_T1__T2__TResult__o *)v39->static_fields->__9__18_0;
  if ( !_9__18_0 )
  {
    if ( !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39);
      v39 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
    }
    v41 = (Il2CppObject *)v39->static_fields->__9;
    _9__18_0 = (System_Func_T1__T2__TResult__o *)sub_1B64314(
                                                   System_Func_RecommendAdviceMessageEntity__int__RecommendSupportMessageSelectListViewItem__TypeInfo,
                                                   v17,
                                                   v18);
    System_Func_object__int__object____ctor(
      _9__18_0,
      v41,
      Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_0__,
      0LL);
    v42 = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
    v42->__9__18_0 = (struct System_Func_RecommendAdviceMessageEntity__int__RecommendSupportMessageSelectListViewItem__o *)_9__18_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v42->__9__18_0, (int32_t)_9__18_0, v43, v44);
  }
  v45 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object__48666272(
                                                               Entities,
                                                               (System_Func_TSource__int__TResult__o *)_9__18_0,
                                                               (const MethodInfo_2E696A0 *)Method_System_Linq_Enumerable_Select_RecommendAdviceMessageEntity__RecommendSupportMessageSelectListViewItem___);
  return (System_Collections_Generic_IEnumerable_RecommendSupportMessageSelectListViewItem__o *)System_Linq_Enumerable__ToArray_object_(
                                                                                                  v45,
                                                                                                  (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_RecommendSupportMessageSelectListViewItem___);
}


void __fastcall RecommendSupportMessageSelectListViewManager__InvokeOnClick(
        RecommendSupportMessageSelectListViewManager_o *this,
        ListViewObject_o *obj,
        int32_t resultKind,
        const MethodInfo *method)
{
  struct RecommendSupportMessageSelectListViewManager_CallbackFunc_o *FuncOnClick; // x21
  __int64 v7; // x0
  unsigned int Index; // w0

  FuncOnClick = this->fields.FuncOnClick;
  this->fields.FuncOnClick = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.FuncOnClick, 0, resultKind, (int32_t)method);
  if ( FuncOnClick )
  {
    if ( !obj )
      sub_1B64324(v7);
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
      || ListViewManager__ClippingItem_40389508((ListViewManager_o *)this, item, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportMessageSelectListViewManager__ModifyList(
        RecommendSupportMessageSelectListViewManager_o *this,
        bool isNeedSort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_IEnumerable_RecommendSupportMessageSelectListViewItem__o *v9; // x0
  System_Object_array *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  RecommendSupportMessageSelectListViewManager___c_c *v13; // x8
  System_Collections_Generic_IEnumerable_T__o *v14; // x21
  System_Action_object__o *_9__19_0; // x22
  Il2CppObject *v16; // x23
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_49F8703 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_RecommendSupportMessageSelectListViewItem__TypeInfo, isNeedSort);
    sub_1B640C8(&Method_BasicHelper_ForEach_RecommendSupportMessageSelectListViewItem___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_RecommendSupportMessageSelectListViewItem___, v6);
    sub_1B640C8(&Method_RecommendSupportMessageSelectListViewManager___c__ModifyList_b__19_0__, v7);
    sub_1B640C8(&RecommendSupportMessageSelectListViewManager___c_TypeInfo, v8);
    byte_49F8703 = 1;
  }
  v9 = RecommendSupportMessageSelectListViewManager__EnumerateItems(this, (const MethodInfo *)isNeedSort);
  v10 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v9,
          (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_RecommendSupportMessageSelectListViewItem___);
  v13 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
  v14 = (System_Collections_Generic_IEnumerable_T__o *)v10;
  if ( !RecommendSupportMessageSelectListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectListViewManager___c_TypeInfo);
    v13 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
  }
  _9__19_0 = (System_Action_object__o *)v13->static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__19_0 = (System_Action_object__o *)sub_1B64314(
                                            System_Action_RecommendSupportMessageSelectListViewItem__TypeInfo,
                                            v11,
                                            v12);
    System_Action_object____ctor(
      _9__19_0,
      v16,
      Method_RecommendSupportMessageSelectListViewManager___c__ModifyList_b__19_0__,
      0LL);
    static_fields = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__19_0 = (struct System_Action_RecommendSupportMessageSelectListViewItem__o *)_9__19_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__19_0, (int32_t)_9__19_0, v18, v19);
  }
  BasicHelper__ForEach_object_(
    v14,
    (System_Action_T__o *)_9__19_0,
    (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_RecommendSupportMessageSelectListViewItem___);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportMessageSelectListViewManager__RequestListObject(
        RecommendSupportMessageSelectListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  UIScrollView_o *v10; // x0
  const MethodInfo *v11; // x1
  System_Collections_Generic_IEnumerable_T__o *v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_object__o *v15; // x22
  UnityEngine_Object_o *scrollView; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  System_Action_o *FuncOnMoveEnd; // x20

  if ( (byte_49F8706 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_RecommendSupportMessageSelectListViewObject__TypeInfo, *(_QWORD *)&mode);
    sub_1B640C8(&Method_BasicHelper_ForEach_RecommendSupportMessageSelectListViewObject___, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(
      &Method_RecommendSupportMessageSelectListViewManager___c__DisplayClass26_0__RequestListObject_b__0__,
      v7);
    sub_1B640C8(&RecommendSupportMessageSelectListViewManager___c__DisplayClass26_0_TypeInfo, v8);
    byte_49F8706 = 1;
  }
  v9 = sub_1B64314(
         RecommendSupportMessageSelectListViewManager___c__DisplayClass26_0_TypeInfo,
         *(_QWORD *)&mode,
         method);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_13;
  *(_DWORD *)(v9 + 16) = mode;
  v12 = (System_Collections_Generic_IEnumerable_T__o *)RecommendSupportMessageSelectListViewManager__EnumerateObjects(
                                                         this,
                                                         v11);
  v15 = (System_Action_object__o *)sub_1B64314(
                                     System_Action_RecommendSupportMessageSelectListViewObject__TypeInfo,
                                     v13,
                                     v14);
  System_Action_object____ctor(
    v15,
    (Il2CppObject *)v9,
    Method_RecommendSupportMessageSelectListViewManager___c__DisplayClass26_0__RequestListObject_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    v12,
    (System_Action_T__o *)v15,
    (const MethodInfo_2E26860 *)Method_BasicHelper_ForEach_RecommendSupportMessageSelectListViewObject___);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    v10 = this->fields.scrollView;
    if ( !v10 )
      goto LABEL_13;
    ((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
      v10,
      1LL,
      v10->klass->vtable._9_SetDragAmount.methodPtr);
    v10 = this->fields.scrollView;
    if ( !v10 )
      goto LABEL_13;
    if ( (((__int64 (__fastcall *)(UIScrollView_o *, Il2CppMethodPointer))v10->klass->vtable._6_get_shouldMoveVertically.method)(
            v10,
            v10->klass->vtable._7_get_shouldMove.methodPtr) & 1) != 0 )
    {
      v10 = this->fields.scrollView;
      if ( v10 )
      {
        UIScrollView__UpdatePosition(v10, 0LL);
        goto LABEL_12;
      }
LABEL_13:
      sub_1B64324(v10);
    }
  }
LABEL_12:
  FuncOnMoveEnd = this->fields.FuncOnMoveEnd;
  this->fields.FuncOnMoveEnd = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.FuncOnMoveEnd, 0, v17, v18);
  ActionExtensions__Call(FuncOnMoveEnd, 0LL);
}


void __fastcall RecommendSupportMessageSelectListViewManager__SetFuncOnClick(
        RecommendSupportMessageSelectListViewManager_o *this,
        RecommendSupportMessageSelectListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.FuncOnClick = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.FuncOnClick, (int32_t)callback, (int32_t)method, v3);
}


void __fastcall RecommendSupportMessageSelectListViewManager__SetMode(
        RecommendSupportMessageSelectListViewManager_o *this,
        int32_t mode,
        RecommendSupportMessageSelectListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.FuncOnClick = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.FuncOnClick,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  RecommendSupportMessageSelectListViewManager__SetMode_32197528(this, mode, v6);
}


void __fastcall RecommendSupportMessageSelectListViewManager__SetMode_32197528(
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


void __fastcall RecommendSupportMessageSelectListViewManager__SetMode_32206196(
        RecommendSupportMessageSelectListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.FuncOnMoveEnd = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.FuncOnMoveEnd,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  RecommendSupportMessageSelectListViewManager__SetMode_32197528(this, mode, v6);
}


void __fastcall RecommendSupportMessageSelectListViewManager__SetObjectItem(
        RecommendSupportMessageSelectListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v4; // x20
  __int64 v6; // x1
  __int64 methodPtr_low; // x11
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x2
  int32_t v10; // w1

  v4 = (UnityEngine_Object_o *)obj;
  if ( (byte_49F8705 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, obj);
    sub_1B640C8(&RecommendSupportMessageSelectListViewObject_TypeInfo, v6);
    byte_49F8705 = 1;
  }
  if ( v4 )
  {
    methodPtr_low = LOBYTE(RecommendSupportMessageSelectListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v4->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (RecommendSupportMessageSelectListViewObject_c *)v4->klass->_2.typeHierarchy[methodPtr_low - 1] != RecommendSupportMessageSelectListViewObject_TypeInfo )
        v4 = 0LL;
    }
    else
    {
      v4 = 0LL;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality(v4, 0LL, 0LL);
  if ( !v8 )
  {
    if ( !v4 )
      sub_1B64324(v8);
    if ( this->fields.initMode == 2 )
      v10 = 2;
    else
      v10 = 1;
    RecommendSupportMessageSelectListViewObject__Init((RecommendSupportMessageSelectListViewObject_o *)v4, v10, v9);
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
    sub_1B64324(0LL);
  UnityEngine_Behaviour__set_enabled(scrollView, value, 0LL);
}


bool __fastcall RecommendSupportMessageSelectListViewManager___get_ClippingObjectList_b__15_0(
        RecommendSupportMessageSelectListViewManager_o *this,
        RecommendSupportMessageSelectListViewObject_o *x,
        const MethodInfo *method)
{
  ListViewItem_o *Item; // x0

  if ( !x )
    sub_1B64324(this);
  Item = (ListViewItem_o *)RecommendSupportMessageSelectListViewObject__GetItem(x, (const MethodInfo *)x);
  return Item && !Item->fields.isTermination
      || ListViewManager__ClippingItem_40389508((ListViewManager_o *)this, Item, 0LL);
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

  if ( (byte_49F86F9 & 1) == 0 )
  {
    sub_1B640C8(&RecommendSupportMessageSelectListViewManager_CallbackFunc_TypeInfo, value);
    byte_49F86F9 = 1;
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
    v8 = sub_1B9F5B8(p_FuncOnClick, v7, FuncOnClick);
    v9 = FuncOnClick == (System_Delegate_o *)v8;
    FuncOnClick = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (RecommendSupportMessageSelectListViewManager_o *)sub_1B645E4(v7);
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

  if ( (byte_49F86FB & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49F86FB = 1;
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
    v8 = sub_1B9F5B8(p_FuncOnMoveEnd, v7, FuncOnMoveEnd);
    v9 = FuncOnMoveEnd == (System_Delegate_o *)v8;
    FuncOnMoveEnd = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (RecommendSupportMessageSelectListViewManager_o *)sub_1B645E4(v7);
  RecommendSupportMessageSelectListViewManager__remove_FuncOnMoveEnd(v10, v11, v12);
}


System_Collections_Generic_List_RecommendSupportMessageSelectListViewObject__o *__fastcall RecommendSupportMessageSelectListViewManager__get_ClippingObjectList(
        RecommendSupportMessageSelectListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_RecommendSupportMessageSelectListViewObject__o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  System_Func_object__bool__o *v9; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_49F8700 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_RecommendSupportMessageSelectListViewObject___, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_RecommendSupportMessageSelectListViewObject___, v3);
    sub_1B640C8(&System_Func_RecommendSupportMessageSelectListViewObject__bool__TypeInfo, v4);
    sub_1B640C8(&Method_RecommendSupportMessageSelectListViewManager__get_ClippingObjectList_b__15_0__, v5);
    byte_49F8700 = 1;
  }
  v6 = RecommendSupportMessageSelectListViewManager__EnumerateObjects(this, method);
  v9 = (System_Func_object__bool__o *)sub_1B64314(
                                        System_Func_RecommendSupportMessageSelectListViewObject__bool__TypeInfo,
                                        v7,
                                        v8);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)this,
    Method_RecommendSupportMessageSelectListViewManager__get_ClippingObjectList_b__15_0__,
    0LL);
  v10 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v6,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_RecommendSupportMessageSelectListViewObject___);
  return (System_Collections_Generic_List_RecommendSupportMessageSelectListViewObject__o *)System_Linq_Enumerable__ToList_object_(
                                                                                             v10,
                                                                                             (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_RecommendSupportMessageSelectListViewObject___);
}


System_Collections_Generic_List_RecommendSupportMessageSelectListViewObject__o *__fastcall RecommendSupportMessageSelectListViewManager__get_ObjectList(
        RecommendSupportMessageSelectListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_RecommendSupportMessageSelectListViewObject__o *v3; // x0

  if ( (byte_49F86FF & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_RecommendSupportMessageSelectListViewObject___, method);
    byte_49F86FF = 1;
  }
  v3 = RecommendSupportMessageSelectListViewManager__EnumerateObjects(this, method);
  return (System_Collections_Generic_List_RecommendSupportMessageSelectListViewObject__o *)System_Linq_Enumerable__ToList_object_(
                                                                                             (System_Collections_Generic_IEnumerable_TSource__o *)v3,
                                                                                             (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_RecommendSupportMessageSelectListViewObject___);
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

  if ( (byte_49F86FA & 1) == 0 )
  {
    sub_1B640C8(&RecommendSupportMessageSelectListViewManager_CallbackFunc_TypeInfo, value);
    byte_49F86FA = 1;
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
    v8 = sub_1B9F5B8(p_FuncOnClick, v7, FuncOnClick);
    v9 = FuncOnClick == (System_Delegate_o *)v8;
    FuncOnClick = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (RecommendSupportMessageSelectListViewManager_o *)sub_1B645E4(v7);
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

  if ( (byte_49F86FC & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, value);
    byte_49F86FC = 1;
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
    v8 = sub_1B9F5B8(p_FuncOnMoveEnd, v7, FuncOnMoveEnd);
    v9 = FuncOnMoveEnd == (System_Delegate_o *)v8;
    FuncOnMoveEnd = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (RecommendSupportMessageSelectListViewManager_o *)sub_1B645E4(v7);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19A73B8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A7360;
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
  __int64 v9; // x1
  __int64 v11[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v12; // [xsp+28h] [xbp-38h] BYREF
  int32_t v13; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = result;
  v13 = kind;
  if ( (byte_49F8707 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1B640C8(&RecommendSupportMessageSelectListViewManager_ResultKind_TypeInfo, v9);
    byte_49F8707 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(RecommendSupportMessageSelectListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v11, callback, object);
}


void __fastcall RecommendSupportMessageSelectListViewManager_CallbackFunc__EndInvoke(
        RecommendSupportMessageSelectListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F8708 & 1) == 0 )
  {
    sub_1B640C8(&RecommendSupportMessageSelectListViewManager___c_TypeInfo, v1);
    byte_49F8708 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(RecommendSupportMessageSelectListViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields->__9 = (struct RecommendSupportMessageSelectListViewManager___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
  if ( (byte_49F8709 & 1) == 0 )
  {
    this = (RecommendSupportMessageSelectListViewManager___c_o *)sub_1B640C8(
                                                                   &Method_UnityEngine_GameObject_GetComponent_RecommendSupportMessageSelectListViewObject___,
                                                                   x);
    byte_49F8709 = 1;
  }
  if ( !x )
    sub_1B64324(this);
  return (RecommendSupportMessageSelectListViewObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                            x,
                                                            (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportMessageSelectListViewObject___);
}


// local variable allocation has failed, the output may be wrong!
RecommendSupportMessageSelectListViewItem_o *__fastcall RecommendSupportMessageSelectListViewManager___c___GetItemList_b__18_0(
        RecommendSupportMessageSelectListViewManager___c_o *this,
        RecommendAdviceMessageEntity_o *item,
        int32_t i,
        const MethodInfo *method)
{
  RecommendSupportMessageSelectListViewItem_o *v6; // x21
  const MethodInfo *v7; // x3

  if ( (byte_49F870A & 1) == 0 )
  {
    sub_1B640C8(&RecommendSupportMessageSelectListViewItem_TypeInfo, item);
    byte_49F870A = 1;
  }
  v6 = (RecommendSupportMessageSelectListViewItem_o *)sub_1B64314(
                                                        RecommendSupportMessageSelectListViewItem_TypeInfo,
                                                        item,
                                                        *(_QWORD *)&i);
  RecommendSupportMessageSelectListViewItem___ctor(v6, i, item, v7);
  return v6;
}


bool __fastcall RecommendSupportMessageSelectListViewManager___c___GetItemList_b__18_1(
        RecommendSupportMessageSelectListViewManager___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B64324(this);
  return entity->fields.category == 1;
}


bool __fastcall RecommendSupportMessageSelectListViewManager___c___GetItemList_b__18_2(
        RecommendSupportMessageSelectListViewManager___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B64324(this);
  return entity->fields.category == 2;
}


bool __fastcall RecommendSupportMessageSelectListViewManager___c___GetItemList_b__18_3(
        RecommendSupportMessageSelectListViewManager___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B64324(this);
  return entity->fields.category == 3;
}


bool __fastcall RecommendSupportMessageSelectListViewManager___c___GetItemList_b__18_4(
        RecommendSupportMessageSelectListViewManager___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B64324(this);
  return entity->fields.category == 4;
}


bool __fastcall RecommendSupportMessageSelectListViewManager___c___GetItemList_b__18_5(
        RecommendSupportMessageSelectListViewManager___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B64324(this);
  return entity->fields.category == 5;
}


void __fastcall RecommendSupportMessageSelectListViewManager___c___ModifyList_b__19_0(
        RecommendSupportMessageSelectListViewManager___c_o *this,
        RecommendSupportMessageSelectListViewItem_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
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
    sub_1B64324(this);
  RecommendSupportMessageSelectListViewObject__Init(x, this->fields.mode, method);
}