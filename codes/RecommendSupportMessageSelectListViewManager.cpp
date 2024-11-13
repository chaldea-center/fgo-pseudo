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
  struct ListViewSort_o *sort; // x8

  if ( (byte_4B123AF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__AddRange__, *(_QWORD *)&category, method);
    byte_4B123AF = 1;
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
          (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_ListViewItem__AddRange__),
        (sort = this->fields.sort) == 0LL) )
  {
    sub_1BCAA3C(v7, v8);
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
  __int64 v2; // x2

  if ( (byte_4B123AB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OfType_RecommendSupportMessageSelectListViewItem___, method, v2);
    byte_4B123AB = 1;
  }
  return (System_Collections_Generic_IEnumerable_RecommendSupportMessageSelectListViewItem__o *)System_Linq_Enumerable__OfType_object_(
                                                                                                  (System_Collections_IEnumerable_o *)this->fields.itemList,
                                                                                                  (const MethodInfo_2F3AEF4 *)Method_System_Linq_Enumerable_OfType_RecommendSupportMessageSelectListViewItem___);
}


System_Collections_Generic_IEnumerable_RecommendSupportMessageSelectListViewObject__o *__fastcall RecommendSupportMessageSelectListViewManager__EnumerateObjects(
        RecommendSupportMessageSelectListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_IEnumerable_T__o *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  RecommendSupportMessageSelectListViewManager___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x19
  System_Func_object__object__o *_9__11_0; // x20
  Il2CppObject *v19; // x21
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *static_fields; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4B123AC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_ExcludeNull_GameObject___, method, v2);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Select_GameObject__RecommendSupportMessageSelectListViewObject___,
      v4,
      v5);
    sub_1BCA7E0(&System_Func_GameObject__RecommendSupportMessageSelectListViewObject__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_RecommendSupportMessageSelectListViewManager___c__EnumerateObjects_b__11_0__, v8, v9);
    sub_1BCA7E0(&RecommendSupportMessageSelectListViewManager___c_TypeInfo, v10, v11);
    byte_4B123AC = 1;
  }
  v12 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.objectList,
          (const MethodInfo_2EFE5E8 *)Method_BasicHelper_ExcludeNull_GameObject___);
  v16 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)v12;
  if ( !RecommendSupportMessageSelectListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectListViewManager___c_TypeInfo, v13);
    v16 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
  }
  _9__11_0 = (System_Func_object__object__o *)v16->static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16, v13);
      v16 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__11_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                  System_Func_GameObject__RecommendSupportMessageSelectListViewObject__TypeInfo,
                                                  v13,
                                                  v14,
                                                  v15);
    System_Func_object__object____ctor(
      _9__11_0,
      v19,
      Method_RecommendSupportMessageSelectListViewManager___c__EnumerateObjects_b__11_0__,
      0LL);
    static_fields = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Func_GameObject__RecommendSupportMessageSelectListViewObject__o *)_9__11_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__11_0,
      (int64_t)_9__11_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  return (System_Collections_Generic_IEnumerable_RecommendSupportMessageSelectListViewObject__o *)System_Linq_Enumerable__Select_object__object_(
                                                                                                    v17,
                                                                                                    (System_Func_TSource__TResult__o *)_9__11_0,
                                                                                                    (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_GameObject__RecommendSupportMessageSelectListViewObject___);
}


// local variable allocation has failed, the output may be wrong!
RecommendSupportMessageSelectListViewItem_o *__fastcall RecommendSupportMessageSelectListViewManager__GetItem(
        RecommendSupportMessageSelectListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  RecommendSupportMessageSelectListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B123B2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_ListViewItem___, *(_QWORD *)&index, method);
    sub_1BCA7E0(&RecommendSupportMessageSelectListViewItem_TypeInfo, v5, v6);
    byte_4B123B2 = 1;
  }
  result = (RecommendSupportMessageSelectListViewItem_o *)BasicHelper__IndexValue_object__49289180(
                                                            (System_Collections_Generic_List_T__o *)this->fields.itemList,
                                                            index,
                                                            0LL,
                                                            (const MethodInfo_2F017DC *)Method_BasicHelper_IndexValue_ListViewItem___);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  Il2CppObject *Master_object; // x0
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Collections_Generic_IEnumerable_TSource__o *Entities; // x19
  RecommendSupportMessageSelectListViewManager___c_c *v34; // x0
  System_Func_object__bool__o *_9__18_1; // x20
  Il2CppObject *v36; // x21
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *static_fields; // x0
  PartyOrganizationUtility_o *p__9__18_1; // x0
  RecommendSupportMessageSelectListViewManager___c_c *v45; // x0
  Il2CppObject *v46; // x21
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *v47; // x0
  RecommendSupportMessageSelectListViewManager___c_c *v48; // x0
  Il2CppObject *v49; // x21
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *v50; // x0
  RecommendSupportMessageSelectListViewManager___c_c *v51; // x0
  Il2CppObject *v52; // x21
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *v53; // x0
  RecommendSupportMessageSelectListViewManager___c_c *v54; // x0
  System_Func_T1__T2__TResult__o *_9__18_0; // x20
  Il2CppObject *v56; // x21
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *v57; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x0

  if ( (byte_4B123B0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_RecommendAdviceMessageMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Select_RecommendAdviceMessageEntity__RecommendSupportMessageSelectListViewItem___,
      v6,
      v7);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_RecommendSupportMessageSelectListViewItem___, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_RecommendAdviceMessageEntity___, v10, v11);
    sub_1BCA7E0(&System_Func_RecommendAdviceMessageEntity__bool__TypeInfo, v12, v13);
    sub_1BCA7E0(
      &System_Func_RecommendAdviceMessageEntity__int__RecommendSupportMessageSelectListViewItem__TypeInfo,
      v14,
      v15);
    sub_1BCA7E0(&Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_0__, v16, v17);
    sub_1BCA7E0(&Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_1__, v18, v19);
    sub_1BCA7E0(&Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_2__, v20, v21);
    sub_1BCA7E0(&Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_3__, v22, v23);
    sub_1BCA7E0(&Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_4__, v24, v25);
    sub_1BCA7E0(&RecommendSupportMessageSelectListViewManager___c_TypeInfo, v26, v27);
    byte_4B123B0 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_RecommendAdviceMessageMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v29);
  Entities = (System_Collections_Generic_IEnumerable_TSource__o *)RecommendAdviceMessageMaster__GetEntities(
                                                                    (RecommendAdviceMessageMaster_o *)Master_object,
                                                                    0LL);
  switch ( category )
  {
    case 1:
      v34 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      if ( !RecommendSupportMessageSelectListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectListViewManager___c_TypeInfo, v30);
        v34 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      }
      _9__18_1 = (System_Func_object__bool__o *)v34->static_fields->__9__18_1;
      if ( _9__18_1 )
        goto LABEL_32;
      if ( !v34->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v34, v30);
        v34 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      }
      v36 = (Il2CppObject *)v34->static_fields->__9;
      _9__18_1 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                  System_Func_RecommendAdviceMessageEntity__bool__TypeInfo,
                                                  v30,
                                                  v31,
                                                  v32);
      System_Func_object__bool____ctor(
        _9__18_1,
        v36,
        Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_1__,
        0LL);
      static_fields = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__18_1 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__18_1;
      p__9__18_1 = (PartyOrganizationUtility_o *)&static_fields->__9__18_1;
      break;
    case 2:
      v45 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      if ( !RecommendSupportMessageSelectListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectListViewManager___c_TypeInfo, v30);
        v45 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      }
      _9__18_1 = (System_Func_object__bool__o *)v45->static_fields->__9__18_2;
      if ( _9__18_1 )
        goto LABEL_32;
      if ( !v45->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v45, v30);
        v45 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      }
      v46 = (Il2CppObject *)v45->static_fields->__9;
      _9__18_1 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                  System_Func_RecommendAdviceMessageEntity__bool__TypeInfo,
                                                  v30,
                                                  v31,
                                                  v32);
      System_Func_object__bool____ctor(
        _9__18_1,
        v46,
        Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_2__,
        0LL);
      v47 = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
      v47->__9__18_2 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__18_1;
      p__9__18_1 = (PartyOrganizationUtility_o *)&v47->__9__18_2;
      break;
    case 3:
      v51 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      if ( !RecommendSupportMessageSelectListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectListViewManager___c_TypeInfo, v30);
        v51 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      }
      _9__18_1 = (System_Func_object__bool__o *)v51->static_fields->__9__18_3;
      if ( _9__18_1 )
        goto LABEL_32;
      if ( !v51->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v51, v30);
        v51 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      }
      v52 = (Il2CppObject *)v51->static_fields->__9;
      _9__18_1 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                  System_Func_RecommendAdviceMessageEntity__bool__TypeInfo,
                                                  v30,
                                                  v31,
                                                  v32);
      System_Func_object__bool____ctor(
        _9__18_1,
        v52,
        Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_3__,
        0LL);
      v53 = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
      v53->__9__18_3 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__18_1;
      p__9__18_1 = (PartyOrganizationUtility_o *)&v53->__9__18_3;
      break;
    case 4:
      v48 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      if ( !RecommendSupportMessageSelectListViewManager___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectListViewManager___c_TypeInfo, v30);
        v48 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      }
      _9__18_1 = (System_Func_object__bool__o *)v48->static_fields->__9__18_4;
      if ( _9__18_1 )
        goto LABEL_32;
      if ( !v48->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v48, v30);
        v48 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
      }
      v49 = (Il2CppObject *)v48->static_fields->__9;
      _9__18_1 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                  System_Func_RecommendAdviceMessageEntity__bool__TypeInfo,
                                                  v30,
                                                  v31,
                                                  v32);
      System_Func_object__bool____ctor(
        _9__18_1,
        v49,
        Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_4__,
        0LL);
      v50 = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
      v50->__9__18_4 = (struct System_Func_RecommendAdviceMessageEntity__bool__o *)_9__18_1;
      p__9__18_1 = (PartyOrganizationUtility_o *)&v50->__9__18_4;
      break;
    default:
      goto LABEL_33;
  }
  sub_1BCA784(p__9__18_1, (int64_t)_9__18_1, v37, v38, v39, v40, v41, v42);
LABEL_32:
  Entities = System_Linq_Enumerable__Where_object_(
               Entities,
               (System_Func_TSource__bool__o *)_9__18_1,
               (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_RecommendAdviceMessageEntity___);
LABEL_33:
  v54 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
  if ( !RecommendSupportMessageSelectListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectListViewManager___c_TypeInfo, v30);
    v54 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
  }
  _9__18_0 = (System_Func_T1__T2__TResult__o *)v54->static_fields->__9__18_0;
  if ( !_9__18_0 )
  {
    if ( !v54->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v54, v30);
      v54 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
    }
    v56 = (Il2CppObject *)v54->static_fields->__9;
    _9__18_0 = (System_Func_T1__T2__TResult__o *)sub_1BCAA2C(
                                                   System_Func_RecommendAdviceMessageEntity__int__RecommendSupportMessageSelectListViewItem__TypeInfo,
                                                   v30,
                                                   v31,
                                                   v32);
    System_Func_object__int__object____ctor(
      _9__18_0,
      v56,
      Method_RecommendSupportMessageSelectListViewManager___c__GetItemList_b__18_0__,
      0LL);
    v57 = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
    v57->__9__18_0 = (struct System_Func_RecommendAdviceMessageEntity__int__RecommendSupportMessageSelectListViewItem__o *)_9__18_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&v57->__9__18_0, (int64_t)_9__18_0, v58, v59, v60, v61, v62, v63);
  }
  v64 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object__49560932(
                                                               Entities,
                                                               (System_Func_TSource__int__TResult__o *)_9__18_0,
                                                               (const MethodInfo_2F43D64 *)Method_System_Linq_Enumerable_Select_RecommendAdviceMessageEntity__RecommendSupportMessageSelectListViewItem___);
  return (System_Collections_Generic_IEnumerable_RecommendSupportMessageSelectListViewItem__o *)System_Linq_Enumerable__ToArray_object_(
                                                                                                  v64,
                                                                                                  (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_RecommendSupportMessageSelectListViewItem___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportMessageSelectListViewManager__InvokeOnClick(
        RecommendSupportMessageSelectListViewManager_o *this,
        ListViewObject_o *obj,
        int32_t resultKind,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct RecommendSupportMessageSelectListViewManager_CallbackFunc_o *FuncOnClick; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  unsigned int Index; // w0

  FuncOnClick = this->fields.FuncOnClick;
  this->fields.FuncOnClick = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.FuncOnClick,
    0LL,
    *(int64_t *)&resultKind,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  if ( FuncOnClick )
  {
    if ( !obj )
      sub_1BCAA3C(v11, v12);
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
      || ListViewManager__ClippingItem_41463120((ListViewManager_o *)this, item, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportMessageSelectListViewManager__ModifyList(
        RecommendSupportMessageSelectListViewManager_o *this,
        bool isNeedSort,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_IEnumerable_RecommendSupportMessageSelectListViewItem__o *v13; // x0
  System_Object_array *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  RecommendSupportMessageSelectListViewManager___c_c *v18; // x8
  System_Collections_Generic_IEnumerable_T__o *v19; // x21
  System_Action_object__o *_9__19_0; // x22
  Il2CppObject *v21; // x23
  struct RecommendSupportMessageSelectListViewManager___c_StaticFields *static_fields; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  if ( (byte_4B123B1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_RecommendSupportMessageSelectListViewItem__TypeInfo, isNeedSort, method);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_RecommendSupportMessageSelectListViewItem___, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_RecommendSupportMessageSelectListViewItem___, v7, v8);
    sub_1BCA7E0(&Method_RecommendSupportMessageSelectListViewManager___c__ModifyList_b__19_0__, v9, v10);
    sub_1BCA7E0(&RecommendSupportMessageSelectListViewManager___c_TypeInfo, v11, v12);
    byte_4B123B1 = 1;
  }
  v13 = RecommendSupportMessageSelectListViewManager__EnumerateItems(this, (const MethodInfo *)isNeedSort);
  v14 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v13,
          (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_RecommendSupportMessageSelectListViewItem___);
  v18 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
  v19 = (System_Collections_Generic_IEnumerable_T__o *)v14;
  if ( !RecommendSupportMessageSelectListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(RecommendSupportMessageSelectListViewManager___c_TypeInfo, v15);
    v18 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
  }
  _9__19_0 = (System_Action_object__o *)v18->static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18, v15);
      v18 = RecommendSupportMessageSelectListViewManager___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v18->static_fields->__9;
    _9__19_0 = (System_Action_object__o *)sub_1BCAA2C(
                                            System_Action_RecommendSupportMessageSelectListViewItem__TypeInfo,
                                            v15,
                                            v16,
                                            v17);
    System_Action_object____ctor(
      _9__19_0,
      v21,
      Method_RecommendSupportMessageSelectListViewManager___c__ModifyList_b__19_0__,
      0LL);
    static_fields = RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__19_0 = (struct System_Action_RecommendSupportMessageSelectListViewItem__o *)_9__19_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__19_0,
      (int64_t)_9__19_0,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  BasicHelper__ForEach_object_(
    v19,
    (System_Action_T__o *)_9__19_0,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_RecommendSupportMessageSelectListViewItem___);
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
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x21
  UIScrollView_o *v15; // x0
  const MethodInfo *v16; // x1
  System_Collections_Generic_IEnumerable_T__o *v17; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Action_object__o *v21; // x22
  __int64 v22; // x1
  UnityEngine_Object_o *scrollView; // x20
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Action_o *FuncOnMoveEnd; // x20

  if ( (byte_4B123B4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_RecommendSupportMessageSelectListViewObject__TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_RecommendSupportMessageSelectListViewObject___, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(
      &Method_RecommendSupportMessageSelectListViewManager___c__DisplayClass26_0__RequestListObject_b__0__,
      v10,
      v11);
    sub_1BCA7E0(&RecommendSupportMessageSelectListViewManager___c__DisplayClass26_0_TypeInfo, v12, v13);
    byte_4B123B4 = 1;
  }
  v14 = sub_1BCAA2C(
          RecommendSupportMessageSelectListViewManager___c__DisplayClass26_0_TypeInfo,
          *(_QWORD *)&mode,
          method,
          v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_13;
  *(_DWORD *)(v14 + 16) = mode;
  v17 = (System_Collections_Generic_IEnumerable_T__o *)RecommendSupportMessageSelectListViewManager__EnumerateObjects(
                                                         this,
                                                         v16);
  v21 = (System_Action_object__o *)sub_1BCAA2C(
                                     System_Action_RecommendSupportMessageSelectListViewObject__TypeInfo,
                                     v18,
                                     v19,
                                     v20);
  System_Action_object____ctor(
    v21,
    (Il2CppObject *)v14,
    Method_RecommendSupportMessageSelectListViewManager___c__DisplayClass26_0__RequestListObject_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    v17,
    (System_Action_T__o *)v21,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_RecommendSupportMessageSelectListViewObject___);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    v15 = this->fields.scrollView;
    if ( !v15 )
      goto LABEL_13;
    ((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v15->klass->vtable._8_UpdateScrollbars.method)(
      v15,
      1LL,
      v15->klass->vtable._9_SetDragAmount.methodPtr);
    v15 = this->fields.scrollView;
    if ( !v15 )
      goto LABEL_13;
    if ( (((__int64 (__fastcall *)(UIScrollView_o *, Il2CppMethodPointer))v15->klass->vtable._6_get_shouldMoveVertically.method)(
            v15,
            v15->klass->vtable._7_get_shouldMove.methodPtr) & 1) != 0 )
    {
      v15 = this->fields.scrollView;
      if ( v15 )
      {
        UIScrollView__UpdatePosition(v15, 0LL);
        goto LABEL_12;
      }
LABEL_13:
      sub_1BCAA3C(v15, v16);
    }
  }
LABEL_12:
  FuncOnMoveEnd = this->fields.FuncOnMoveEnd;
  this->fields.FuncOnMoveEnd = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.FuncOnMoveEnd, 0LL, v24, v25, v26, v27, v28, v29);
  ActionExtensions__Call(FuncOnMoveEnd, 0LL);
}


void __fastcall RecommendSupportMessageSelectListViewManager__SetFuncOnClick(
        RecommendSupportMessageSelectListViewManager_o *this,
        RecommendSupportMessageSelectListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.FuncOnClick = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.FuncOnClick,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall RecommendSupportMessageSelectListViewManager__SetMode(
        RecommendSupportMessageSelectListViewManager_o *this,
        int32_t mode,
        RecommendSupportMessageSelectListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.FuncOnClick = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.FuncOnClick,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  RecommendSupportMessageSelectListViewManager__SetMode_33119752(this, mode, v10);
}


void __fastcall RecommendSupportMessageSelectListViewManager__SetMode_33119752(
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


void __fastcall RecommendSupportMessageSelectListViewManager__SetMode_33128136(
        RecommendSupportMessageSelectListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.FuncOnMoveEnd = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.FuncOnMoveEnd,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  RecommendSupportMessageSelectListViewManager__SetMode_33119752(this, mode, v10);
}


void __fastcall RecommendSupportMessageSelectListViewManager__SetObjectItem(
        RecommendSupportMessageSelectListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v4; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 methodPtr_low; // x11
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  int32_t v12; // w1

  v4 = (UnityEngine_Object_o *)obj;
  if ( (byte_4B123B3 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, obj, item);
    sub_1BCA7E0(&RecommendSupportMessageSelectListViewObject_TypeInfo, v6, v7);
    byte_4B123B3 = 1;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj);
  v9 = UnityEngine_Object__op_Equality(v4, 0LL, 0LL);
  if ( !v9 )
  {
    if ( !v4 )
      sub_1BCAA3C(v9, v10);
    if ( this->fields.initMode == 2 )
      v12 = 2;
    else
      v12 = 1;
    RecommendSupportMessageSelectListViewObject__Init((RecommendSupportMessageSelectListViewObject_o *)v4, v12, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportMessageSelectListViewManager__SetScrollViewEnabled(
        RecommendSupportMessageSelectListViewManager_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0

  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    sub_1BCAA3C(0LL, value);
  UnityEngine_Behaviour__set_enabled(scrollView, value, 0LL);
}


bool __fastcall RecommendSupportMessageSelectListViewManager___get_ClippingObjectList_b__15_0(
        RecommendSupportMessageSelectListViewManager_o *this,
        RecommendSupportMessageSelectListViewObject_o *x,
        const MethodInfo *method)
{
  ListViewItem_o *Item; // x0

  if ( !x )
    sub_1BCAA3C(this, 0LL);
  Item = (ListViewItem_o *)RecommendSupportMessageSelectListViewObject__GetItem(x, (const MethodInfo *)x);
  return Item && !Item->fields.isTermination
      || ListViewManager__ClippingItem_41463120((ListViewManager_o *)this, Item, 0LL);
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

  if ( (byte_4B123A7 & 1) == 0 )
  {
    sub_1BCA7E0(&RecommendSupportMessageSelectListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B123A7 = 1;
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
    v8 = sub_1C05CD0(p_FuncOnClick, v7, FuncOnClick);
    v9 = FuncOnClick == (System_Delegate_o *)v8;
    FuncOnClick = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (RecommendSupportMessageSelectListViewManager_o *)sub_1BCACFC(v7);
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

  if ( (byte_4B123A9 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B123A9 = 1;
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
    v8 = sub_1C05CD0(p_FuncOnMoveEnd, v7, FuncOnMoveEnd);
    v9 = FuncOnMoveEnd == (System_Delegate_o *)v8;
    FuncOnMoveEnd = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (RecommendSupportMessageSelectListViewManager_o *)sub_1BCACFC(v7);
  RecommendSupportMessageSelectListViewManager__remove_FuncOnMoveEnd(v10, v11, v12);
}


System_Collections_Generic_List_RecommendSupportMessageSelectListViewObject__o *__fastcall RecommendSupportMessageSelectListViewManager__get_ClippingObjectList(
        RecommendSupportMessageSelectListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_IEnumerable_RecommendSupportMessageSelectListViewObject__o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Func_object__bool__o *v14; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_4B123AE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_RecommendSupportMessageSelectListViewObject___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_RecommendSupportMessageSelectListViewObject___, v4, v5);
    sub_1BCA7E0(&System_Func_RecommendSupportMessageSelectListViewObject__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_RecommendSupportMessageSelectListViewManager__get_ClippingObjectList_b__15_0__, v8, v9);
    byte_4B123AE = 1;
  }
  v10 = RecommendSupportMessageSelectListViewManager__EnumerateObjects(this, method);
  v14 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                         System_Func_RecommendSupportMessageSelectListViewObject__bool__TypeInfo,
                                         v11,
                                         v12,
                                         v13);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)this,
    Method_RecommendSupportMessageSelectListViewManager__get_ClippingObjectList_b__15_0__,
    0LL);
  v15 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v10,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_RecommendSupportMessageSelectListViewObject___);
  return (System_Collections_Generic_List_RecommendSupportMessageSelectListViewObject__o *)System_Linq_Enumerable__ToList_object_(
                                                                                             v15,
                                                                                             (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_RecommendSupportMessageSelectListViewObject___);
}


System_Collections_Generic_List_RecommendSupportMessageSelectListViewObject__o *__fastcall RecommendSupportMessageSelectListViewManager__get_ObjectList(
        RecommendSupportMessageSelectListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_Collections_Generic_IEnumerable_RecommendSupportMessageSelectListViewObject__o *v4; // x0

  if ( (byte_4B123AD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_RecommendSupportMessageSelectListViewObject___, method, v2);
    byte_4B123AD = 1;
  }
  v4 = RecommendSupportMessageSelectListViewManager__EnumerateObjects(this, method);
  return (System_Collections_Generic_List_RecommendSupportMessageSelectListViewObject__o *)System_Linq_Enumerable__ToList_object_(
                                                                                             (System_Collections_Generic_IEnumerable_TSource__o *)v4,
                                                                                             (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_RecommendSupportMessageSelectListViewObject___);
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

  if ( (byte_4B123A8 & 1) == 0 )
  {
    sub_1BCA7E0(&RecommendSupportMessageSelectListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B123A8 = 1;
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
    v8 = sub_1C05CD0(p_FuncOnClick, v7, FuncOnClick);
    v9 = FuncOnClick == (System_Delegate_o *)v8;
    FuncOnClick = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (RecommendSupportMessageSelectListViewManager_o *)sub_1BCACFC(v7);
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

  if ( (byte_4B123AA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B123AA = 1;
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
    v8 = sub_1C05CD0(p_FuncOnMoveEnd, v7, FuncOnMoveEnd);
    v9 = FuncOnMoveEnd == (System_Delegate_o *)v8;
    FuncOnMoveEnd = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (RecommendSupportMessageSelectListViewManager_o *)sub_1BCACFC(v7);
  RecommendSupportMessageSelectListViewManager__EnumerateItems(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall RecommendSupportMessageSelectListViewManager_CallbackFunc___ctor(
        RecommendSupportMessageSelectListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A08114;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A080BC;
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
  __int64 v12[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v13; // [xsp+28h] [xbp-38h] BYREF
  int32_t v14; // [xsp+2Ch] [xbp-34h] BYREF

  v13 = result;
  v14 = kind;
  if ( (byte_4B123B5 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&result);
    sub_1BCA7E0(&RecommendSupportMessageSelectListViewManager_ResultKind_TypeInfo, v9, v10);
    byte_4B123B5 = 1;
  }
  v12[2] = 0LL;
  v12[0] = j_il2cpp_value_box_0(RecommendSupportMessageSelectListViewManager_ResultKind_TypeInfo, &v14);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v12, callback, object);
}


void __fastcall RecommendSupportMessageSelectListViewManager_CallbackFunc__EndInvoke(
        RecommendSupportMessageSelectListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B123B6 & 1) == 0 )
  {
    sub_1BCA7E0(&RecommendSupportMessageSelectListViewManager___c_TypeInfo, v1, v2);
    byte_4B123B6 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(RecommendSupportMessageSelectListViewManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields->__9 = (struct RecommendSupportMessageSelectListViewManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)RecommendSupportMessageSelectListViewManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  if ( (byte_4B123B7 & 1) == 0 )
  {
    this = (RecommendSupportMessageSelectListViewManager___c_o *)sub_1BCA7E0(
                                                                   &Method_UnityEngine_GameObject_GetComponent_RecommendSupportMessageSelectListViewObject___,
                                                                   x,
                                                                   method);
    byte_4B123B7 = 1;
  }
  if ( !x )
    sub_1BCAA3C(this, x);
  return (RecommendSupportMessageSelectListViewObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                            x,
                                                            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_RecommendSupportMessageSelectListViewObject___);
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

  if ( (byte_4B123B8 & 1) == 0 )
  {
    sub_1BCA7E0(&RecommendSupportMessageSelectListViewItem_TypeInfo, item, *(_QWORD *)&i);
    byte_4B123B8 = 1;
  }
  v6 = (RecommendSupportMessageSelectListViewItem_o *)sub_1BCAA2C(
                                                        RecommendSupportMessageSelectListViewItem_TypeInfo,
                                                        item,
                                                        *(_QWORD *)&i,
                                                        method);
  RecommendSupportMessageSelectListViewItem___ctor(v6, i, item, v7);
  return v6;
}


bool __fastcall RecommendSupportMessageSelectListViewManager___c___GetItemList_b__18_1(
        RecommendSupportMessageSelectListViewManager___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BCAA3C(this, 0LL);
  return entity->fields.category == 1;
}


bool __fastcall RecommendSupportMessageSelectListViewManager___c___GetItemList_b__18_2(
        RecommendSupportMessageSelectListViewManager___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BCAA3C(this, 0LL);
  return entity->fields.category == 2;
}


bool __fastcall RecommendSupportMessageSelectListViewManager___c___GetItemList_b__18_3(
        RecommendSupportMessageSelectListViewManager___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BCAA3C(this, 0LL);
  return entity->fields.category == 3;
}


bool __fastcall RecommendSupportMessageSelectListViewManager___c___GetItemList_b__18_4(
        RecommendSupportMessageSelectListViewManager___c_o *this,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BCAA3C(this, 0LL);
  return entity->fields.category == 4;
}


void __fastcall RecommendSupportMessageSelectListViewManager___c___ModifyList_b__19_0(
        RecommendSupportMessageSelectListViewManager___c_o *this,
        RecommendSupportMessageSelectListViewItem_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
  RecommendSupportMessageSelectListViewObject__Init(x, this->fields.mode, method);
}