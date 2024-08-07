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
  __int64 v8; // x1

  if ( (byte_49FAE11 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_ListViewItem__AddRange__, *(_QWORD *)&category);
    byte_49FAE11 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  itemList = this->fields.itemList;
  v7 = (System_Collections_Generic_IEnumerable_T__o *)RecommendSupportMessageSelectListViewManager__GetItemList(
                                                        category,
                                                        v6);
  if ( !itemList )
    sub_1B64C5C(v7, v8);
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)itemList,
    v7,
    (const MethodInfo_34B01D4 *)Method_System_Collections_Generic_List_ListViewItem__AddRange__);
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
  if ( (byte_49FAE0D & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Linq_Enumerable_OfType_RecommendSupportMessageSelectListViewItem___, method);
    byte_49FAE0D = 1;
  }
  return (System_Collections_Generic_IEnumerable_RecommendSupportMessageSelectListViewItem__o *)System_Linq_Enumerable__OfType_object_(
                                                                                                  (System_Collections_IEnumerable_o *)this->fields.itemList,
                                                                                                  (const MethodInfo_2E65514 *)Method_System_Linq_Enumerable_OfType_RecommendSupportMessageSelectListViewItem___);
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
  RecommendSupportMessageSelectListViewManager___c_c *v8; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x19
  System_Func_object__object__o *_9__11_0; // x20
  Il2CppObject *v11; // x21
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49FAE0E & 1) == 0 )
  {
    sub_1B64A00(&Method_BasicHelper_ExcludeNull_GameObject___, method);
    sub_1B64A00(&Method_System_Linq_Enumerable_Select_GameObject__RecommendSupportMessageSelectListViewObject___, v3);
    sub_1B64A00(&System_Func_GameObject__RecommendSupportMessageSelectListViewObject__TypeInfo, v4);
    sub_1B64A00(&Method_RecommendSupportMessageSelectListViewManager___c__EnumerateObjects_b__11_0__, v5);
    sub_1B64A00(&RecommendSupportMessageSelectListViewManager___c_TypeInfo, v6);
    byte_49FAE0E = 1;
  }
  v7 = BasicHelper__ExcludeNull_object_(
         (System_Collections_Generic_IEnumerable_T__o *)this->fields.objectList,
         (const MethodInfo_2E27AB8 *)Method_BasicHelper_ExcludeNull_GameObject___);
  v8 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)v7;
  if ( !RecommendSupportMessageSelectListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectListViewManager___c_TypeInfo);
    v8 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
  }
  _9__11_0 = (System_Func_object__object__o *)v8->static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__11_0 = (System_Func_object__object__o *)sub_1B64C4C(System_Func_GameObject__RecommendSupportMessageSelectListViewObject__TypeInfo);
    System_Func_object__object____ctor(
      _9__11_0,
      v11,
      Method_RecommendSupportMessageSelectListViewManager___c__EnumerateObjects_b__11_0__,
      0LL);
    static_fields = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Func_GameObject__RecommendSupportMessageSelectListViewObject__o *)_9__11_0;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v13, v14);
  }
  return (System_Collections_Generic_IEnumerable_RecommendSupportMessageSelectListViewObject__o *)System_Linq_Enumerable__Select_object__object_(
                                                                                                    v9,
                                                                                                    (System_Func_TSource__TResult__o *)_9__11_0,
                                                                                                    (const MethodInfo_2E6BCA0 *)Method_System_Linq_Enumerable_Select_GameObject__RecommendSupportMessageSelectListViewObject___);
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

  if ( (byte_49FAE14 & 1) == 0 )
  {
    sub_1B64A00(&Method_BasicHelper_IndexValue_ListViewItem___, *(_QWORD *)&index);
    sub_1B64A00(&RecommendSupportMessageSelectListViewItem_TypeInfo, v5);
    byte_49FAE14 = 1;
  }
  result = (RecommendSupportMessageSelectListViewItem_o *)BasicHelper__IndexValue_object__48409264(
                                                            (System_Collections_Generic_List_T__o *)this->fields.itemList,
                                                            index,
                                                            0LL,
                                                            (const MethodInfo_2E2AAB0 *)Method_BasicHelper_IndexValue_ListViewItem___);
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
  System_Collections_Generic_IEnumerable_TSource__o *Entities; // x19
  RecommendSupportMessageSelectListViewManager___c_c *v19; // x0
  System_Func_object__bool__o *_9__18_1; // x20
  Il2CppObject *v21; // x21
  int32_t v22; // w2
  int32_t v23; // w3
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *static_fields; // x0
  ServantStatusBattleListViewItem_o *p__9__18_1; // x0
  RecommendSupportMessageSelectListViewManager___c_c *v26; // x0
  Il2CppObject *v27; // x21
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *v28; // x0
  RecommendSupportMessageSelectListViewManager___c_c *v29; // x0
  Il2CppObject *v30; // x21
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *v31; // x0
  RecommendSupportMessageSelectListViewManager___c_c *v32; // x0
  Il2CppObject *v33; // x21
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *v34; // x0
  RecommendSupportMessageSelectListViewManager___c_c *v35; // x0
  Il2CppObject *v36; // x21
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *v37; // x0
  RecommendSupportMessageSelectListViewManager___c_c *v38; // x0
  System_Func_T1__T2__TResult__o *_9__18_0; // x20
  Il2CppObject *v40; // x21
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0

  if ( (byte_49FAE12 & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_GetMaster_RecommendAdviceMessageMaster___, method);
    sub_1B64A00(&DataManager_TypeInfo, v3);
    sub_1B64A00(
      &Method_System_Linq_Enumerable_Select_RecommendAdviceMessageEntity__RecommendSupportMessageSelectListViewItem___,
      v4);
    sub_1B64A00(&Method_System_Linq_Enumerable_ToArray_RecommendSupportMessageSelectListViewItem___, v5);
    sub_1B64A00(&Method_System_Linq_Enumerable_Where_RecommendAdviceMessageEntity___, v6);
    sub_1B64A00(&System_Func_RecommendAdviceMessageEntity__bool__TypeInfo, v7);
    sub_1B64A00(&System_Func_RecommendAdviceMessageEntity__int__RecommendSupportMessageSelectListViewItem__TypeInfo, v8);
    sub_1B64A00(&Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_0__, v9);
    sub_1B64A00(&Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_1__, v10);
    sub_1B64A00(&Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_2__, v11);
    sub_1B64A00(&Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_3__, v12);
    sub_1B64A00(&Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_4__, v13);
    sub_1B64A00(&Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_5__, v14);
    sub_1B64A00(&RecommendSupportMessageSelectListViewManager___c_TypeInfo, v15);
    byte_49FAE12 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
  if ( !Master_object )
    sub_1B64C5C(0LL, v17);
  Entities = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendAdviceMessageMaster__GetEntities(
                                                                    (RecommendAdviceMessageMaster_o *)Master_object,
                                                                    0LL);
  switch ( category )
  {
    case 1:
      v19 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      if ( !RecommendSupportMessageSelectListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectListViewManager___c_TypeInfo);
        v19 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      }
      _9__18_1 = (System_Func_object__bool__o *)v19->static_fields->__9__18_1;
      if ( _9__18_1 )
        goto LABEL_38;
      if ( !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        v19 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      }
      v21 = (Il2CppObject *)v19->static_fields->__9;
      _9__18_1 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_RecommendAdviceMessageEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__18_1,
        v21,
        Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_1__,
        0LL);
      static_fields = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__18_1 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__18_1;
      p__9__18_1 = (ServantStatusBattleListViewItem_o *)&static_fields->__9__18_1;
      break;
    case 2:
      v26 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      if ( !RecommendSupportMessageSelectListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectListViewManager___c_TypeInfo);
        v26 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      }
      _9__18_1 = (System_Func_object__bool__o *)v26->static_fields->__9__18_2;
      if ( _9__18_1 )
        goto LABEL_38;
      if ( !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        v26 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      }
      v27 = (Il2CppObject *)v26->static_fields->__9;
      _9__18_1 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_RecommendAdviceMessageEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__18_1,
        v27,
        Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_2__,
        0LL);
      v28 = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
      v28->__9__18_2 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__18_1;
      p__9__18_1 = (ServantStatusBattleListViewItem_o *)&v28->__9__18_2;
      break;
    case 3:
      v29 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      if ( !RecommendSupportMessageSelectListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectListViewManager___c_TypeInfo);
        v29 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      }
      _9__18_1 = (System_Func_object__bool__o *)v29->static_fields->__9__18_3;
      if ( _9__18_1 )
        goto LABEL_38;
      if ( !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29);
        v29 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      }
      v30 = (Il2CppObject *)v29->static_fields->__9;
      _9__18_1 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_RecommendAdviceMessageEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__18_1,
        v30,
        Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_3__,
        0LL);
      v31 = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
      v31->__9__18_3 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__18_1;
      p__9__18_1 = (ServantStatusBattleListViewItem_o *)&v31->__9__18_3;
      break;
    case 4:
      v32 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      if ( !RecommendSupportMessageSelectListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectListViewManager___c_TypeInfo);
        v32 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      }
      _9__18_1 = (System_Func_object__bool__o *)v32->static_fields->__9__18_4;
      if ( _9__18_1 )
        goto LABEL_38;
      if ( !v32->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v32);
        v32 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      }
      v33 = (Il2CppObject *)v32->static_fields->__9;
      _9__18_1 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_RecommendAdviceMessageEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__18_1,
        v33,
        Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_4__,
        0LL);
      v34 = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
      v34->__9__18_4 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__18_1;
      p__9__18_1 = (ServantStatusBattleListViewItem_o *)&v34->__9__18_4;
      break;
    case 5:
      v35 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      if ( !RecommendSupportMessageSelectListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectListViewManager___c_TypeInfo);
        v35 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      }
      _9__18_1 = (System_Func_object__bool__o *)v35->static_fields->__9__18_5;
      if ( _9__18_1 )
        goto LABEL_38;
      if ( !v35->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v35);
        v35 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      }
      v36 = (Il2CppObject *)v35->static_fields->__9;
      _9__18_1 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_RecommendAdviceMessageEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__18_1,
        v36,
        Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_5__,
        0LL);
      v37 = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
      v37->__9__18_5 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__18_1;
      p__9__18_1 = (ServantStatusBattleListViewItem_o *)&v37->__9__18_5;
      break;
    default:
      goto LABEL_39;
  }
  sub_1B649A4(p__9__18_1, (int32_t)_9__18_1, v22, v23);
LABEL_38:
  Entities = System_Linq_Enumerable__Where_object_(
               Entities,
               (System_Func_TSource__bool__o *)_9__18_1,
               (const MethodInfo_2E79990 *)Method_System_Linq_Enumerable_Where_RecommendAdviceMessageEntity___);
LABEL_39:
  v38 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
  if ( !RecommendSupportMessageSelectListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectListViewManager___c_TypeInfo);
    v38 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
  }
  _9__18_0 = (System_Func_T1__T2__TResult__o *)v38->static_fields->__9__18_0;
  if ( !_9__18_0 )
  {
    if ( !v38->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v38);
      v38 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
    }
    v40 = (Il2CppObject *)v38->static_fields->__9;
    _9__18_0 = (System_Func_T1__T2__TResult__o *)sub_1B64C4C(System_Func_RecommendAdviceMessageEntity__int__RecommendSupportMessageSelectListViewItem__TypeInfo);
    System_Func_object__int__object____ctor(
      _9__18_0,
      v40,
      Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_0__,
      0LL);
    v41 = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
    v41->__9__18_0 = (struct System_Func_RecommendAdviceMessageEntity__int__RecommendSupportMessageSelectListViewItem__o *)_9__18_0;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v41->__9__18_0, (int32_t)_9__18_0, v42, v43);
  }
  v44 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object__48676756(
                                                               Entities,
                                                               (System_Func_TSource__int__TResult__o *)_9__18_0,
                                                               (const MethodInfo_2E6BF94 *)Method_System_Linq_Enumerable_Select_RecommendAdviceMessageEntity__RecommendSupportMessageSelectListViewItem___);
  return (System_Collections_Generic_IEnumerable_RecommendSupportMessageSelectListViewItem__o *)System_Linq_Enumerable__ToArray_object_(
                                                                                                  v44,
                                                                                                  (const MethodInfo_2E73CB8 *)Method_System_Linq_Enumerable_ToArray_RecommendSupportMessageSelectListViewItem___);
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
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.FuncOnClick, 0, resultKind, (int32_t)method);
  if ( FuncOnClick )
  {
    if ( !obj )
      sub_1B64C5C(v7, v8);
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
      || ListViewManager__ClippingItem_40394624((ListViewManager_o *)this, item, 0LL);
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
  RecommendSupportMessageSelectListViewManager___c_c *v11; // x8
  System_Collections_Generic_IEnumerable_T__o *v12; // x21
  System_Action_object__o *_9__19_0; // x22
  Il2CppObject *v14; // x23
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_49FAE13 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_RecommendSupportMessageSelectListViewItem__TypeInfo, isNeedSort);
    sub_1B64A00(&Method_BasicHelper_ForEach_RecommendSupportMessageSelectListViewItem___, v5);
    sub_1B64A00(&Method_System_Linq_Enumerable_ToArray_RecommendSupportMessageSelectListViewItem___, v6);
    sub_1B64A00(&Method_RecommendSupportMessageSelectListViewManager___c__ModifyList_b__19_0__, v7);
    sub_1B64A00(&RecommendSupportMessageSelectListViewManager___c_TypeInfo, v8);
    byte_49FAE13 = 1;
  }
  v9 = RecommendSupportMessageSelectListViewManager__EnumerateItems(this, (const MethodInfo *)isNeedSort);
  v10 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v9,
          (const MethodInfo_2E73CB8 *)Method_System_Linq_Enumerable_ToArray_RecommendSupportMessageSelectListViewItem___);
  v11 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
  v12 = (System_Collections_Generic_IEnumerable_T__o *)v10;
  if ( !RecommendSupportMessageSelectListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectListViewManager___c_TypeInfo);
    v11 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
  }
  _9__19_0 = (System_Action_object__o *)v11->static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__19_0 = (System_Action_object__o *)sub_1B64C4C(System_Action_RecommendSupportMessageSelectListViewItem__TypeInfo);
    System_Action_object____ctor(
      _9__19_0,
      v14,
      Method_RecommendSupportMessageSelectListViewManager___c__ModifyList_b__19_0__,
      0LL);
    static_fields = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__19_0 = (struct System_Action_RecommendSupportMessageSelectListViewItem__o *)_9__19_0;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__19_0, (int32_t)_9__19_0, v16, v17);
  }
  BasicHelper__ForEach_object_(
    v12,
    (System_Action_T__o *)_9__19_0,
    (const MethodInfo_2E29154 *)Method_BasicHelper_ForEach_RecommendSupportMessageSelectListViewItem___);
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
  System_Action_object__o *v13; // x22
  UnityEngine_Object_o *scrollView; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  System_Action_o *FuncOnMoveEnd; // x20

  if ( (byte_49FAE16 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_RecommendSupportMessageSelectListViewObject__TypeInfo, *(_QWORD *)&mode);
    sub_1B64A00(&Method_BasicHelper_ForEach_RecommendSupportMessageSelectListViewObject___, v5);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v6);
    sub_1B64A00(
      &Method_RecommendSupportMessageSelectListViewManager___c__DisplayClass26_0__RequestListObject_b__0__,
      v7);
    sub_1B64A00(&RecommendSupportMessageSelectListViewManager___c__DisplayClass26_0_TypeInfo, v8);
    byte_49FAE16 = 1;
  }
  v9 = sub_1B64C4C(RecommendSupportMessageSelectListViewManager___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_13;
  *(_DWORD *)(v9 + 16) = mode;
  v12 = (System_Collections_Generic_IEnumerable_T__o *)RecommendSupportMessageSelectListViewManager__EnumerateObjects(
                                                         this,
                                                         v11);
  v13 = (System_Action_object__o *)sub_1B64C4C(System_Action_RecommendSupportMessageSelectListViewObject__TypeInfo);
  System_Action_object____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_RecommendSupportMessageSelectListViewManager___c__DisplayClass26_0__RequestListObject_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    v12,
    (System_Action_T__o *)v13,
    (const MethodInfo_2E29154 *)Method_BasicHelper_ForEach_RecommendSupportMessageSelectListViewObject___);
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
      sub_1B64C5C(v10, v11);
    }
  }
LABEL_12:
  FuncOnMoveEnd = this->fields.FuncOnMoveEnd;
  this->fields.FuncOnMoveEnd = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.FuncOnMoveEnd, 0, v15, v16);
  ActionExtensions__Call(FuncOnMoveEnd, 0LL);
}


void __fastcall RecommendSupportMessageSelectListViewManager__SetFuncOnClick(
        RecommendSupportMessageSelectListViewManager_o *this,
        RecommendSupportMessageSelectListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.FuncOnClick = callback;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.FuncOnClick, (int32_t)callback, (int32_t)method, v3);
}


void __fastcall RecommendSupportMessageSelectListViewManager__SetMode(
        RecommendSupportMessageSelectListViewManager_o *this,
        int32_t mode,
        RecommendSupportMessageSelectListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.FuncOnClick = callback;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&this->fields.FuncOnClick,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  RecommendSupportMessageSelectListViewManager__SetMode_32199820(this, mode, v6);
}


void __fastcall RecommendSupportMessageSelectListViewManager__SetMode_32199820(
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


void __fastcall RecommendSupportMessageSelectListViewManager__SetMode_32208488(
        RecommendSupportMessageSelectListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.FuncOnMoveEnd = callback;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)&this->fields.FuncOnMoveEnd,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  RecommendSupportMessageSelectListViewManager__SetMode_32199820(this, mode, v6);
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
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  int32_t v11; // w1

  v4 = (UnityEngine_Object_o *)obj;
  if ( (byte_49FAE15 & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Object_TypeInfo, obj);
    sub_1B64A00(&RecommendSupportMessageSelectListViewObject_TypeInfo, v6);
    byte_49FAE15 = 1;
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
      sub_1B64C5C(v8, v9);
    if ( this->fields.initMode == 2 )
      v11 = 2;
    else
      v11 = 1;
    RecommendSupportMessageSelectListViewObject__Init((RecommendSupportMessageSelectListViewObject_o *)v4, v11, v10);
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
    sub_1B64C5C(0LL, value);
  UnityEngine_Behaviour__set_enabled(scrollView, value, 0LL);
}


bool __fastcall RecommendSupportMessageSelectListViewManager___get_ClippingObjectList_b__15_0(
        RecommendSupportMessageSelectListViewManager_o *this,
        RecommendSupportMessageSelectListViewObject_o *x,
        const MethodInfo *method)
{
  ListViewItem_o *Item; // x0

  if ( !x )
    sub_1B64C5C(this, 0LL);
  Item = (ListViewItem_o *)RecommendSupportMessageSelectListViewObject__GetItem(x, (const MethodInfo *)x);
  return Item && !Item->fields.isTermination
      || ListViewManager__ClippingItem_40394624((ListViewManager_o *)this, Item, 0LL);
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

  if ( (byte_49FAE09 & 1) == 0 )
  {
    sub_1B64A00(&RecommendSupportMessageSelectListViewManager_CallbackFunc_TypeInfo, value);
    byte_49FAE09 = 1;
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
    v8 = sub_1B9FEF0(p_FuncOnClick, v7, FuncOnClick);
    v9 = FuncOnClick == (System_Delegate_o *)v8;
    FuncOnClick = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (RecommendSupportMessageSelectListViewManager_o *)sub_1B64F1C(v7);
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

  if ( (byte_49FAE0B & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, value);
    byte_49FAE0B = 1;
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
    v8 = sub_1B9FEF0(p_FuncOnMoveEnd, v7, FuncOnMoveEnd);
    v9 = FuncOnMoveEnd == (System_Delegate_o *)v8;
    FuncOnMoveEnd = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (RecommendSupportMessageSelectListViewManager_o *)sub_1B64F1C(v7);
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
  System_Func_object__bool__o *v7; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x0

  if ( (byte_49FAE10 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Linq_Enumerable_ToList_RecommendSupportMessageSelectListViewObject___, method);
    sub_1B64A00(&Method_System_Linq_Enumerable_Where_RecommendSupportMessageSelectListViewObject___, v3);
    sub_1B64A00(&System_Func_RecommendSupportMessageSelectListViewObject__bool__TypeInfo, v4);
    sub_1B64A00(&Method_RecommendSupportMessageSelectListViewManager__get_ClippingObjectList_b__15_0__, v5);
    byte_49FAE10 = 1;
  }
  v6 = RecommendSupportMessageSelectListViewManager__EnumerateObjects(this, method);
  v7 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_RecommendSupportMessageSelectListViewObject__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v7,
    (Il2CppObject *)this,
    Method_RecommendSupportMessageSelectListViewManager__get_ClippingObjectList_b__15_0__,
    0LL);
  v8 = System_Linq_Enumerable__Where_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v6,
         (System_Func_TSource__bool__o *)v7,
         (const MethodInfo_2E79990 *)Method_System_Linq_Enumerable_Where_RecommendSupportMessageSelectListViewObject___);
  return (System_Collections_Generic_List_RecommendSupportMessageSelectListViewObject__o *)System_Linq_Enumerable__ToList_object_(
                                                                                             v8,
                                                                                             (const MethodInfo_2E77910 *)Method_System_Linq_Enumerable_ToList_RecommendSupportMessageSelectListViewObject___);
}


System_Collections_Generic_List_RecommendSupportMessageSelectListViewObject__o *__fastcall RecommendSupportMessageSelectListViewManager__get_ObjectList(
        RecommendSupportMessageSelectListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_RecommendSupportMessageSelectListViewObject__o *v3; // x0

  if ( (byte_49FAE0F & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Linq_Enumerable_ToList_RecommendSupportMessageSelectListViewObject___, method);
    byte_49FAE0F = 1;
  }
  v3 = RecommendSupportMessageSelectListViewManager__EnumerateObjects(this, method);
  return (System_Collections_Generic_List_RecommendSupportMessageSelectListViewObject__o *)System_Linq_Enumerable__ToList_object_(
                                                                                             (System_Collections_Generic_IEnumerable_TSource__o *)v3,
                                                                                             (const MethodInfo_2E77910 *)Method_System_Linq_Enumerable_ToList_RecommendSupportMessageSelectListViewObject___);
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

  if ( (byte_49FAE0A & 1) == 0 )
  {
    sub_1B64A00(&RecommendSupportMessageSelectListViewManager_CallbackFunc_TypeInfo, value);
    byte_49FAE0A = 1;
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
    v8 = sub_1B9FEF0(p_FuncOnClick, v7, FuncOnClick);
    v9 = FuncOnClick == (System_Delegate_o *)v8;
    FuncOnClick = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (RecommendSupportMessageSelectListViewManager_o *)sub_1B64F1C(v7);
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

  if ( (byte_49FAE0C & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, value);
    byte_49FAE0C = 1;
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
    v8 = sub_1B9FEF0(p_FuncOnMoveEnd, v7, FuncOnMoveEnd);
    v9 = FuncOnMoveEnd == (System_Delegate_o *)v8;
    FuncOnMoveEnd = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (RecommendSupportMessageSelectListViewManager_o *)sub_1B64F1C(v7);
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
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64AC0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64C78(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B64B28(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19A7CF0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A7C98;
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
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v14[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v15; // [xsp+28h] [xbp-38h] BYREF
  int32_t v16; // [xsp+2Ch] [xbp-34h] BYREF

  v15 = result;
  v16 = kind;
  if ( (byte_49FAE17 & 1) == 0 )
  {
    sub_1B64A00(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1B64A00(&RecommendSupportMessageSelectListViewManager_ResultKind_TypeInfo, v9);
    byte_49FAE17 = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             RecommendSupportMessageSelectListViewManager_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&result,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1B649B4(this, v14, callback, object);
}


void __fastcall RecommendSupportMessageSelectListViewManager_CallbackFunc__EndInvoke(
        RecommendSupportMessageSelectListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B649B8(result, 0LL, method);
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
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_49FAE18 & 1) == 0 )
  {
    sub_1B64A00(&RecommendSupportMessageSelectListViewManager___c_TypeInfo, v1);
    byte_49FAE18 = 1;
  }
  v2 = (Il2CppObject *)sub_1B64C4C(RecommendSupportMessageSelectListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields->__9 = (struct RecommendSupportMessageSelectListViewManager___c_o *)v2;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
  if ( (byte_49FAE19 & 1) == 0 )
  {
    this = (RecommendSupportMessageSelectListViewManager___c_o *)sub_1B64A00(
                                                                   &Method_UnityEngine_GameObject_GetComponent_RecommendSupportMessageSelectListViewObject___,
                                                                   x);
    byte_49FAE19 = 1;
  }
  if ( !x )
    sub_1B64C5C(this, x);
  return (RecommendSupportMessageSelectListViewObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                            x,
                                                            (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportMessageSelectListViewObject___);
}


RecommendSupportMessageSelectListViewItem_o *__fastcall RecommendSupportMessageSelectListViewManager___c___GetItemList_b__18_0(
        RecommendSupportMessageSelectListViewManager___c_o *this,
        RecommendAdviceMessageEntity_o *item,
        int32_t i,
        const MethodInfo *method)
{
  RecommendSupportMessageSelectListViewItem_o *v6; // x21
  const MethodInfo *v7; // x3

  if ( (byte_49FAE1A & 1) == 0 )
  {
    sub_1B64A00(&RecommendSupportMessageSelectListViewItem_TypeInfo, item);
    byte_49FAE1A = 1;
  }
  v6 = (RecommendSupportMessageSelectListViewItem_o *)sub_1B64C4C(RecommendSupportMessageSelectListViewItem_TypeInfo);
  RecommendSupportMessageSelectListViewItem___ctor(v6, i, item, v7);
  return v6;
}


bool __fastcall RecommendSupportMessageSelectListViewManager___c___GetItemList_b__18_1(
        RecommendSupportMessageSelectListViewManager___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B64C5C(this, 0LL);
  return entity->fields.category == 1;
}


bool __fastcall RecommendSupportMessageSelectListViewManager___c___GetItemList_b__18_2(
        RecommendSupportMessageSelectListViewManager___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B64C5C(this, 0LL);
  return entity->fields.category == 2;
}


bool __fastcall RecommendSupportMessageSelectListViewManager___c___GetItemList_b__18_3(
        RecommendSupportMessageSelectListViewManager___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B64C5C(this, 0LL);
  return entity->fields.category == 3;
}


bool __fastcall RecommendSupportMessageSelectListViewManager___c___GetItemList_b__18_4(
        RecommendSupportMessageSelectListViewManager___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B64C5C(this, 0LL);
  return entity->fields.category == 4;
}


bool __fastcall RecommendSupportMessageSelectListViewManager___c___GetItemList_b__18_5(
        RecommendSupportMessageSelectListViewManager___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B64C5C(this, 0LL);
  return entity->fields.category == 5;
}


void __fastcall RecommendSupportMessageSelectListViewManager___c___ModifyList_b__19_0(
        RecommendSupportMessageSelectListViewManager___c_o *this,
        RecommendSupportMessageSelectListViewItem_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64C5C(this, 0LL);
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
    sub_1B64C5C(this, 0LL);
  RecommendSupportMessageSelectListViewObject__Init(x, this->fields.mode, method);
}