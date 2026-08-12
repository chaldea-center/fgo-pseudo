void CombineListViewManager___cctor(const MethodInfo *method)
{
  struct CombineListItemInfo_array *v1; // x19
  CombineListItemInfo_o *v2; // x20
  const MethodInfo *v3; // x5
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  CombineListItemInfo_o *v13; // x20
  const MethodInfo *v14; // x5
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  CombineListItemInfo_o *v21; // x20
  const MethodInfo *v22; // x5
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_Array_o *v35; // x19
  struct CombineListViewManager_StaticFields *static_fields; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  __int64 v43; // x0

  if ( (byte_59749D1 & 1) == 0 )
  {
    sub_2213A60(&CombineListItemInfo___TypeInfo);
    sub_2213A60(&CombineListItemInfo_TypeInfo);
    sub_2213A60(&CombineListViewManager_TypeInfo);
    sub_2213A60(&int___TypeInfo);
    sub_2213A60(&Field__PrivateImplementationDetails__4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D);
    sub_2213A60(&StringLiteral_9008/*"MENU_OPERATION_FRIEND"*/);
    sub_2213A60(&StringLiteral_21450/*"img_myroom_01"*/);
    sub_2213A60(&StringLiteral_9009/*"MENU_OPERATION_OFFER"*/);
    sub_2213A60(&StringLiteral_9010/*"MENU_OPERATION_OFFERED"*/);
    sub_2213A60(&StringLiteral_21452/*"img_myroom_03"*/);
    sub_2213A60(&StringLiteral_21451/*"img_myroom_02"*/);
    byte_59749D1 = 1;
  }
  v1 = (struct CombineListItemInfo_array *)sub_2213B20(CombineListItemInfo___TypeInfo, 3);
  v2 = (CombineListItemInfo_o *)sub_2213CCC(CombineListItemInfo_TypeInfo);
  CombineListItemInfo___ctor(
    v2,
    1,
    1,
    (System_String_o *)StringLiteral_21450/*"img_myroom_01"*/,
    (System_String_o *)StringLiteral_9008/*"MENU_OPERATION_FRIEND"*/,
    v3);
  if ( !v1 )
    sub_2213CDC(v4, v5);
  if ( v2 )
  {
    v4 = sub_2213BB4(v2, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_15;
  }
  if ( !LODWORD(v1->max_length) )
    goto LABEL_14;
  v1->m_Items[0] = v2;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v1->m_Items, (int32_t)v2, v6, v7, v8, v9, v10, v11);
  v13 = (CombineListItemInfo_o *)sub_2213CCC(CombineListItemInfo_TypeInfo);
  CombineListItemInfo___ctor(
    v13,
    2,
    1,
    (System_String_o *)StringLiteral_21451/*"img_myroom_02"*/,
    (System_String_o *)StringLiteral_9009/*"MENU_OPERATION_OFFER"*/,
    v14);
  if ( v13 )
  {
    v4 = sub_2213BB4(v13, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_15;
  }
  if ( (v1->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_14;
  v1->m_Items[1] = v13;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v1->m_Items[1], (int32_t)v13, v15, v16, v17, v18, v19, v20);
  v21 = (CombineListItemInfo_o *)sub_2213CCC(CombineListItemInfo_TypeInfo);
  CombineListItemInfo___ctor(
    v21,
    3,
    1,
    (System_String_o *)StringLiteral_21452/*"img_myroom_03"*/,
    (System_String_o *)StringLiteral_9010/*"MENU_OPERATION_OFFERED"*/,
    v22);
  if ( v21 )
  {
    v4 = sub_2213BB4(v21, v1->obj.klass->_1.element_class);
    if ( !v4 )
    {
LABEL_15:
      v43 = sub_2213D00(v4, v12);
      sub_2213BA0(v43, 0);
    }
  }
  if ( LODWORD(v1->max_length) <= 2 )
LABEL_14:
    sub_2213CE4(v4);
  v1->m_Items[2] = v21;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v1->m_Items[2], (int32_t)v21, v23, v24, v25, v26, v27, v28);
  CombineListViewManager_TypeInfo->static_fields->itemInfo = v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)CombineListViewManager_TypeInfo->static_fields,
    (int32_t)v1,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v35 = (System_Array_o *)sub_2213B20(int___TypeInfo, 3);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
    v35,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D,
    0);
  static_fields = CombineListViewManager_TypeInfo->static_fields;
  static_fields->normalKindList = (struct System_Int32_array *)v35;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->normalKindList,
    (int32_t)v35,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
}


void CombineListViewManager___ctor(CombineListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void CombineListViewManager__CreateList(CombineListViewManager_o *this, int32_t kind, const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  ListViewItemSeed_o *seed; // x0
  CombineListViewManager_c *v9; // x0
  struct System_Int32_array *normalKindList; // x25
  il2cpp_array_size_t max_length; // x21
  unsigned __int64 v12; // x26
  int32_t v13; // w20
  __int64 v14; // x28
  int32_t v15; // w21
  UnityEngine_GameObject_c *klass; // x8
  int namespaze; // w9
  int v18; // w11
  __int64 v19; // x22
  __int64 v20; // x21
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  intptr_t m_CachedPtr; // x8
  _QWORD *v34; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v36; // x8
  bool v37; // vf
  int32_t v38; // w20
  __int64 naturalAligment; // x10
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  __int64 v41; // x10

  if ( (byte_59749CA & 1) == 0 )
  {
    sub_2213A60(&CombineListViewItem_TypeInfo);
    sub_2213A60(&CombineListViewManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59749CA = 1;
  }
  if ( kind )
    goto LABEL_4;
  v9 = CombineListViewManager_TypeInfo;
  if ( !*(&CombineListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CombineListViewManager_TypeInfo, *(_QWORD *)&kind);
    v9 = CombineListViewManager_TypeInfo;
  }
  normalKindList = v9->static_fields->normalKindList;
  if ( !normalKindList )
  {
LABEL_4:
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  }
  else
  {
    max_length = normalKindList->max_length;
    ListViewManager__CreateList((ListViewManager_o *)this, max_length, 0);
    if ( (int)max_length >= 1 )
    {
      v12 = 0;
      v13 = 0;
      v14 = (unsigned int)max_length;
      do
      {
        if ( v12 >= LODWORD(normalKindList->max_length) )
LABEL_46:
          sub_2213CE4(seed);
        seed = (ListViewItemSeed_o *)CombineListViewManager_TypeInfo;
        v15 = normalKindList->m_Items[v12];
        if ( !*(&CombineListViewManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(CombineListViewManager_TypeInfo, v7);
          seed = (ListViewItemSeed_o *)CombineListViewManager_TypeInfo;
        }
        klass = seed[2].fields.prefab->klass;
        if ( !klass )
          goto LABEL_45;
        namespaze = (int)klass->_1.namespaze;
        if ( namespaze >= 1 )
        {
          v18 = 0;
          while ( 1 )
          {
            if ( namespaze == v18 )
              goto LABEL_46;
            v19 = *((_QWORD *)&klass->_1.byval_arg.data + v18);
            if ( !v19 )
              goto LABEL_45;
            if ( *(_DWORD *)(v19 + 16) == v15 )
              break;
            if ( (namespaze & ~(namespaze >> 31)) == ++v18 )
              goto LABEL_34;
          }
          v20 = sub_2213CCC(CombineListViewItem_TypeInfo);
          ListViewItem___ctor((ListViewItem_o *)v20, 0);
          *(_DWORD *)(v20 + 20) = v13;
          *(_QWORD *)(v20 + 120) = v19;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v20 + 120), v19, v21, v22, v23, v24, v25, v26);
          seed = this->fields.seed;
          if ( !seed )
            goto LABEL_45;
          *(UnityEngine_Vector3_o *)(v20 + 100) = ListViewItemSeed__GetLocalPosition(seed, v13, 0);
          seed = (ListViewItemSeed_o *)this->fields.itemList;
          if ( !seed )
            goto LABEL_45;
          m_CachedPtr = seed->fields.m_CachedPtr;
          v34 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++HIDWORD(seed->fields.m_CancellationTokenSource);
          if ( !m_CachedPtr )
            goto LABEL_45;
          m_CancellationTokenSource_low = SLODWORD(seed->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)seed,
              (Il2CppObject *)v20,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
          }
          else
          {
            v36 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
            LODWORD(seed->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(v36 + 32) = v20;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v36 + 32), v20, v27, v28, v29, v30, v31, v32);
          }
          ++v13;
        }
LABEL_34:
        ++v12;
      }
      while ( v12 != v14 );
      v37 = __OFSUB__(v13, 1);
      v38 = v13 - 1;
      if ( v38 < 0 == v37 )
      {
        seed = (ListViewItemSeed_o *)this->fields.itemList;
        if ( !seed )
          goto LABEL_45;
        seed = (ListViewItemSeed_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)seed,
                                       0,
                                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !seed )
          goto LABEL_45;
        naturalAligment = CombineListViewItem_TypeInfo->_2.naturalAligment;
        if ( seed->klass->_2.naturalAligment < (unsigned int)naturalAligment )
          goto LABEL_45;
        if ( (CombineListViewItem_c *)seed->klass->_2.typeHierarchy[naturalAligment - 1] != CombineListViewItem_TypeInfo )
          goto LABEL_45;
        itemList = this->fields.itemList;
        LOBYTE(seed[1].fields.m_CancellationTokenSource) = 1;
        if ( !itemList )
          goto LABEL_45;
        seed = (ListViewItemSeed_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)itemList,
                                       v38,
                                       (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !seed )
          goto LABEL_45;
        v41 = CombineListViewItem_TypeInfo->_2.naturalAligment;
        if ( seed->klass->_2.naturalAligment < (unsigned int)v41
          || (CombineListViewItem_c *)seed->klass->_2.typeHierarchy[v41 - 1] != CombineListViewItem_TypeInfo )
        {
          goto LABEL_45;
        }
        LOBYTE(seed[1].fields.m_CancellationTokenSource) = 1;
      }
    }
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    seed = (ListViewItemSeed_o *)this->fields.scrollView;
    if ( seed )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)seed, 0);
      return;
    }
LABEL_45:
    sub_2213CDC(seed, v7);
  }
}


void CombineListViewManager__DestroyList(CombineListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
}


CombineListViewItem_o *CombineListViewManager__GetItem(
        CombineListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  CombineListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_59749CB & 1) == 0 )
  {
    sub_2213A60(&CombineListViewItem_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_59749CB = 1;
  }
  result = (CombineListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (CombineListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)result,
                                        index,
                                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = CombineListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (CombineListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != CombineListViewItem_TypeInfo )
          return 0;
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}


void CombineListViewManager__OnClickListView(
        CombineListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct CombineListViewManager_CallbackFunc_o *callbackFunc; // x21
  CombineListViewItem_o *Item; // x0
  const MethodInfo *v12; // x1
  __int64 naturalAligment; // x10
  struct CombineListItemInfo_o *info; // x8

  if ( (byte_59749D0 & 1) == 0 )
  {
    sub_2213A60(&CombineListViewObject_TypeInfo);
    byte_59749D0 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    0,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( callbackFunc )
  {
    if ( !obj
      || (naturalAligment = CombineListViewObject_TypeInfo->_2.naturalAligment,
          obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (CombineListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != CombineListViewObject_TypeInfo
      || (Item = CombineListViewObject__GetItem((CombineListViewObject_o *)obj, v12)) == 0
      || (info = Item->fields.info) == 0 )
    {
      sub_2213CDC(Item, v12);
    }
    ((void (__fastcall *)(intptr_t, struct System_String_o *, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      info->fields.eventData,
      callbackFunc->fields.method);
  }
}


void CombineListViewManager__OnMoveEnd(CombineListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct UIScrollView_o *v14; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_59749CF & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59749CF = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v14 = this->fields.scrollView;
        if ( !v14 )
          sub_2213CDC(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v14->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v14,
          1,
          v14->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2, 0, v8, v9, v10, v11, v12, v13);
      if ( callbackFunc2 )
        ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
          callbackFunc2->fields.method_code,
          callbackFunc2->fields.method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void CombineListViewManager__RequestListObject(
        CombineListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  const MethodInfo_448473C *v10; // x1
  Il2CppObject *current; // x21
  System_Action_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_59749CD & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CombineListViewManager_OnMoveEnd__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_CombineListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_CombineListViewObject__get_Count__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_59749CD = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)CombineListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_2213CDC(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    v10 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_CombineListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v10);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_CombineListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v13, v14);
      CombineListViewObject__Init_55694500((CombineListViewObject_o *)current, mode, v12, delay, v15);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void CombineListViewManager__RequestListObject_55693496(
        CombineListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  const MethodInfo_448473C *v8; // x1
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  __int64 v14; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v15; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_59749CE & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_CombineListViewManager_OnMoveEnd__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_CombineListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_CombineListViewObject__get_Count__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_59749CE = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)CombineListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_2213CDC(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    v8 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_CombineListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v8);
    v14 = 0;
    v15 = &v16;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_CombineListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v11, v12);
      CombineListViewObject__Init_55694600((CombineListViewObject_o *)current, mode, v10, v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__Dispose__);
  }
}


void CombineListViewManager__SetMode(
        CombineListViewManager_o *this,
        int32_t mode,
        CombineListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  CombineListViewManager__SetMode_55693352(this, mode, v10);
}


void CombineListViewManager__SetMode_55693352(CombineListViewManager_o *this, int32_t mode, const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 1, 0);
  if ( mode == 1 )
    CombineListViewManager__RequestListObject_55693496(this, 4, v5);
}


void CombineListViewManager__SetMode_55693444(
        CombineListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  CombineListViewManager__SetMode_55693352(this, mode, v10);
}


void CombineListViewManager__SetObjectItem(
        CombineListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  ListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_59749CC & 1) == 0 )
  {
    sub_2213A60(&CombineListViewObject_TypeInfo);
    byte_59749CC = 1;
  }
  if ( obj
    && (naturalAligment = CombineListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (CombineListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == CombineListViewObject_TypeInfo )
      v7 = obj;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( this->fields.initMode != 1 )
  {
    if ( v7 )
    {
      v8 = 2;
      goto LABEL_14;
    }
LABEL_15:
    sub_2213CDC(v7, obj);
  }
  if ( !v7 )
    goto LABEL_15;
  v8 = 4;
LABEL_14:
  CombineListViewObject__Init_55693224((CombineListViewObject_o *)v7, v8, (const MethodInfo *)item);
}


void CombineListViewManager__add_callbackFunc(
        CombineListViewManager_o *this,
        CombineListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x0
  bool v9; // zf
  CombineListViewManager_o *v10; // x0
  CombineListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_59749C4 & 1) == 0 )
  {
    sub_2213A60(&CombineListViewManager_CallbackFunc_TypeInfo);
    byte_59749C4 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (CombineListViewManager_CallbackFunc_c *)v6->klass != CombineListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v9 = v8 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_221405C(v6, CombineListViewManager_CallbackFunc_TypeInfo, v7);
  CombineListViewManager__remove_callbackFunc(v10, v11, v12);
}


void CombineListViewManager__add_callbackFunc2(
        CombineListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x0
  bool v9; // zf
  CombineListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_59749C6 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_59749C6 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v9 = v8 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_221405C(v6, System_Action_TypeInfo, v7);
  CombineListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_CombineListViewObject__o *CombineListViewManager__get_ClippingObjectList(
        CombineListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  Il2CppObject *current; // x21
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v11; // x1
  Il2CppObject *v12; // x21
  ListViewItem_o *Item; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  _BOOL8 v20; // x0
  __int64 v21; // x1
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_59749C9 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CombineListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_CombineListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_CombineListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_CombineListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59749C9 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_CombineListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_CombineListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v28 = v27;
  v27.fields._list = 0;
  *(_QWORD *)&v27.fields._index = &v28;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v28.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v8 )
    {
      if ( !current )
        sub_2213CDC(v8, v9);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CombineListViewObject___);
      v12 = Component_object;
      if ( !Component_object )
        sub_2213CDC(0, v11);
      Item = (ListViewItem_o *)CombineListViewObject__GetItem((CombineListViewObject_o *)Component_object, v11);
      if ( !Item )
        sub_2213CDC(0, 0);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_50835204((ListViewManager_o *)this, Item, 0);
        if ( v20 )
        {
          if ( !v3
            || (items = v3->fields._items,
                v23 = Method_System_Collections_Generic_List_CombineListViewObject__Add__,
                ++v3->fields._version,
                !items) )
          {
            sub_2213CDC(v20, v21);
          }
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v12,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3
          || (items = v3->fields._items,
              v23 = Method_System_Collections_Generic_List_CombineListViewObject__Add__,
              ++v3->fields._version,
              !items) )
        {
          sub_2213CDC(Item, Item);
        }
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v25 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v12;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v25 + 4), (int32_t)v12, v14, v15, v16, v17, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CombineListViewObject__o *)v3;
}


System_Collections_Generic_List_CombineListViewObject__o *CombineListViewManager__get_ObjectList(
        CombineListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  Il2CppObject *current; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  Il2CppObject *v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_59749C8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CombineListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_CombineListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_CombineListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_CombineListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_59749C8 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_CombineListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_CombineListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  v23.fields._list = 0;
  *(_QWORD *)&v23.fields._index = &v24;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v8 )
    {
      if ( !current )
        sub_2213CDC(v8, v9);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CombineListViewObject___);
      v17 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v19 = Method_System_Collections_Generic_List_CombineListViewObject__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_2213CDC(Component_object, Component_object);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v17;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)v17, v11, v12, v13, v14, v15, v16);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CombineListViewObject__o *)v3;
}


void CombineListViewManager__remove_callbackFunc(
        CombineListViewManager_o *this,
        CombineListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x0
  bool v9; // zf
  CombineListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_59749C5 & 1) == 0 )
  {
    sub_2213A60(&CombineListViewManager_CallbackFunc_TypeInfo);
    byte_59749C5 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (CombineListViewManager_CallbackFunc_c *)v6->klass != CombineListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v9 = v8 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_221405C(v6, CombineListViewManager_CallbackFunc_TypeInfo, v7);
  CombineListViewManager__add_callbackFunc2(v10, v11, v12);
}


void CombineListViewManager__remove_callbackFunc2(
        CombineListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x0
  bool v9; // zf
  CombineListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_59749C7 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    byte_59749C7 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v9 = v8 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_221405C(v6, System_Action_TypeInfo, v7);
  CombineListViewManager__get_ObjectList(v10, v11);
}


void CombineListViewManager_CallbackFunc___ctor(
        CombineListViewManager_CallbackFunc_o *this,
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
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v15; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
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
  if ( (sub_2213B38(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_20148A4;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v12 )
    {
      v13 = sub_2014888;
      goto LABEL_8;
    }
    if ( !object )
    {
      v15 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v15, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)&loc_2014840;
}


System_IAsyncResult_o *CombineListViewManager_CallbackFunc__BeginInvoke(
        CombineListViewManager_CallbackFunc_o *this,
        System_String_o *result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  System_String_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = result;
  return sub_2213A14(this, &v6, callback, object);
}


void CombineListViewManager_CallbackFunc__EndInvoke(
        CombineListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void CombineListViewManager_CallbackFunc__Invoke(
        CombineListViewManager_CallbackFunc_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}