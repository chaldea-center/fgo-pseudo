void CombineListViewManager___cctor(const MethodInfo *method)
{
  struct CombineListItemInfo_array *v1; // x19
  CombineListItemInfo_o *v2; // x20
  const MethodInfo *v3; // x5
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  const MethodInfo *v7; // x3
  CombineListItemInfo_o *v8; // x20
  const MethodInfo *v9; // x5
  const MethodInfo *v10; // x3
  CombineListItemInfo_o *v11; // x20
  const MethodInfo *v12; // x5
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Array_o *v16; // x0
  System_RuntimeFieldHandle_o v17; // x1
  System_Array_o *v18; // x19
  struct CombineListViewManager_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  __int64 v22; // x0

  if ( (byte_4C2B0BA & 1) == 0 )
  {
    sub_1C2D490(&CombineListItemInfo___TypeInfo);
    sub_1C2D490(&CombineListItemInfo_TypeInfo);
    sub_1C2D490(&CombineListViewManager_TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Field__PrivateImplementationDetails__4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D);
    sub_1C2D490(&StringLiteral_8638/*"MENU_OPERATION_FRIEND"*/);
    sub_1C2D490(&StringLiteral_20447/*"img_myroom_01"*/);
    sub_1C2D490(&StringLiteral_8639/*"MENU_OPERATION_OFFER"*/);
    sub_1C2D490(&StringLiteral_8640/*"MENU_OPERATION_OFFERED"*/);
    sub_1C2D490(&StringLiteral_20449/*"img_myroom_03"*/);
    sub_1C2D490(&StringLiteral_20448/*"img_myroom_02"*/);
    byte_4C2B0BA = 1;
  }
  v1 = (struct CombineListItemInfo_array *)sub_1C2D538(CombineListItemInfo___TypeInfo, 3);
  v2 = (CombineListItemInfo_o *)sub_1C2D6DC(CombineListItemInfo_TypeInfo);
  CombineListItemInfo___ctor(
    v2,
    1,
    1,
    (System_String_o *)StringLiteral_20447/*"img_myroom_01"*/,
    (System_String_o *)StringLiteral_8638/*"MENU_OPERATION_FRIEND"*/,
    v3);
  if ( !v1 )
    sub_1C2D6EC(v4, v5);
  if ( v2 )
  {
    v4 = sub_1C2D5CC(v2, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_15;
  }
  if ( !LODWORD(v1->max_length) )
    goto LABEL_14;
  v1->m_Items[0] = v2;
  sub_1C2D434((CGThumbnailListItem_o *)v1->m_Items, (int32_t)v2, v6, v7);
  v8 = (CombineListItemInfo_o *)sub_1C2D6DC(CombineListItemInfo_TypeInfo);
  CombineListItemInfo___ctor(
    v8,
    2,
    1,
    (System_String_o *)StringLiteral_20448/*"img_myroom_02"*/,
    (System_String_o *)StringLiteral_8639/*"MENU_OPERATION_OFFER"*/,
    v9);
  if ( v8 )
  {
    v4 = sub_1C2D5CC(v8, v1->obj.klass->_1.element_class);
    if ( !v4 )
      goto LABEL_15;
  }
  if ( LODWORD(v1->max_length) <= 1 )
    goto LABEL_14;
  v1->m_Items[1] = v8;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[1], (int32_t)v8, v6, v10);
  v11 = (CombineListItemInfo_o *)sub_1C2D6DC(CombineListItemInfo_TypeInfo);
  CombineListItemInfo___ctor(
    v11,
    3,
    1,
    (System_String_o *)StringLiteral_20449/*"img_myroom_03"*/,
    (System_String_o *)StringLiteral_8640/*"MENU_OPERATION_OFFERED"*/,
    v12);
  if ( v11 )
  {
    v4 = sub_1C2D5CC(v11, v1->obj.klass->_1.element_class);
    if ( !v4 )
    {
LABEL_15:
      v22 = sub_1C2D710(v4);
      sub_1C2D5B8(v22, 0);
    }
  }
  if ( LODWORD(v1->max_length) <= 2 )
LABEL_14:
    sub_1C2D6F4(v4, v5, v6);
  v1->m_Items[2] = v11;
  sub_1C2D434((CGThumbnailListItem_o *)&v1->m_Items[2], (int32_t)v11, v6, v13);
  CombineListViewManager_TypeInfo->static_fields->itemInfo = v1;
  sub_1C2D434((CGThumbnailListItem_o *)CombineListViewManager_TypeInfo->static_fields, (int32_t)v1, v14, v15);
  v16 = (System_Array_o *)sub_1C2D538(int___TypeInfo, 3);
  v17.fields.value = Field__PrivateImplementationDetails__4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D;
  v18 = v16;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64158640(v16, v17, 0);
  static_fields = CombineListViewManager_TypeInfo->static_fields;
  static_fields->normalKindList = (struct System_Int32_array *)v18;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->normalKindList, (int32_t)v18, v20, v21);
}


void CombineListViewManager___ctor(CombineListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void CombineListViewManager__CreateList(CombineListViewManager_o *this, int32_t kind, const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x20
  __int64 v6; // x1
  ListViewItemSeed_o *seed; // x0
  CombineListViewManager_c *v8; // x0
  struct System_Int32_array *normalKindList; // x25
  il2cpp_array_size_t max_length; // x21
  __int64 v11; // x2
  unsigned __int64 v12; // x26
  int32_t v13; // w20
  __int64 v14; // x27
  int32_t v15; // w21
  UnityEngine_GameObject_c *klass; // x8
  int namespaze; // w9
  int v18; // w10
  __int64 v19; // x22
  __int64 v20; // x21
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v26; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v28; // x8
  bool v29; // vf
  int32_t v30; // w20
  __int64 naturalAligment; // x10
  __int64 v32; // x10

  if ( (byte_4C2B0B3 & 1) == 0 )
  {
    sub_1C2D490(&CombineListViewItem_TypeInfo);
    sub_1C2D490(&CombineListViewManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2B0B3 = 1;
  }
  if ( kind )
    goto LABEL_4;
  v8 = CombineListViewManager_TypeInfo;
  if ( !CombineListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineListViewManager_TypeInfo);
    v8 = CombineListViewManager_TypeInfo;
  }
  normalKindList = v8->static_fields->normalKindList;
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
LABEL_45:
          sub_1C2D6F4(seed, v6, v11);
        seed = (ListViewItemSeed_o *)CombineListViewManager_TypeInfo;
        v15 = normalKindList->m_Items[v12];
        if ( !CombineListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CombineListViewManager_TypeInfo);
          seed = (ListViewItemSeed_o *)CombineListViewManager_TypeInfo;
        }
        klass = seed[2].fields.prefab->klass;
        if ( !klass )
          goto LABEL_46;
        namespaze = (int)klass->_1.namespaze;
        if ( namespaze >= 1 )
        {
          v18 = 0;
          while ( 1 )
          {
            if ( namespaze == v18 )
              goto LABEL_45;
            v19 = *((_QWORD *)&klass->_1.byval_arg.data + v18);
            if ( !v19 )
              goto LABEL_46;
            if ( *(_DWORD *)(v19 + 16) == v15 )
              break;
            if ( namespaze == ++v18 )
              goto LABEL_34;
          }
          v20 = sub_1C2D6DC(CombineListViewItem_TypeInfo);
          ListViewItem___ctor((ListViewItem_o *)v20, 0);
          *(_DWORD *)(v20 + 20) = v13;
          *(_QWORD *)(v20 + 120) = v19;
          sub_1C2D434((CGThumbnailListItem_o *)(v20 + 120), v19, v21, v22);
          seed = this->fields.seed;
          if ( !seed )
            goto LABEL_46;
          *(UnityEngine_Vector3_o *)(v20 + 100) = ListViewItemSeed__GetLocalPosition(seed, v13, 0);
          seed = (ListViewItemSeed_o *)this->fields.itemList;
          if ( !seed )
            goto LABEL_46;
          m_CachedPtr = seed->fields.m_CachedPtr;
          v26 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++HIDWORD(seed->fields.m_CancellationTokenSource);
          if ( !m_CachedPtr )
            goto LABEL_46;
          m_CancellationTokenSource_low = SLODWORD(seed->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)seed,
              (Il2CppObject *)v20,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
          }
          else
          {
            v28 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
            LODWORD(seed->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(v28 + 32) = v20;
            sub_1C2D434((CGThumbnailListItem_o *)(v28 + 32), v20, v23, v24);
          }
          ++v13;
        }
LABEL_34:
        ++v12;
      }
      while ( v12 != v14 );
      v29 = __OFSUB__(v13, 1);
      v30 = v13 - 1;
      if ( v30 < 0 == v29 )
      {
        seed = (ListViewItemSeed_o *)this->fields.itemList;
        if ( !seed )
          goto LABEL_46;
        seed = (ListViewItemSeed_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)seed,
                                       0,
                                       (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !seed )
          goto LABEL_46;
        naturalAligment = CombineListViewItem_TypeInfo->_2.naturalAligment;
        if ( seed->klass->_2.naturalAligment < (unsigned int)naturalAligment )
          goto LABEL_46;
        if ( (CombineListViewItem_c *)seed->klass->_2.typeHierarchy[naturalAligment - 1] != CombineListViewItem_TypeInfo )
          goto LABEL_46;
        LOBYTE(seed[1].fields.m_CancellationTokenSource) = 1;
        seed = (ListViewItemSeed_o *)this->fields.itemList;
        if ( !seed )
          goto LABEL_46;
        seed = (ListViewItemSeed_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)seed,
                                       v30,
                                       (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !seed )
          goto LABEL_46;
        v32 = CombineListViewItem_TypeInfo->_2.naturalAligment;
        if ( seed->klass->_2.naturalAligment < (unsigned int)v32
          || (CombineListViewItem_c *)seed->klass->_2.typeHierarchy[v32 - 1] != CombineListViewItem_TypeInfo )
        {
          goto LABEL_46;
        }
        LOBYTE(seed[1].fields.m_CancellationTokenSource) = 1;
      }
    }
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    seed = (ListViewItemSeed_o *)this->fields.scrollView;
    if ( seed )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)seed, 0);
      return;
    }
LABEL_46:
    sub_1C2D6EC(seed, v6);
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

  if ( (byte_4C2B0B4 & 1) == 0 )
  {
    sub_1C2D490(&CombineListViewItem_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4C2B0B4 = 1;
  }
  result = (CombineListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (CombineListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)result,
                                        index,
                                        (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  const MethodInfo *v3; // x3
  struct CombineListViewManager_CallbackFunc_o *callbackFunc; // x21
  CombineListViewItem_o *Item; // x0
  const MethodInfo *v8; // x1
  __int64 naturalAligment; // x10
  struct CombineListItemInfo_o *info; // x8

  if ( (byte_4C2B0B9 & 1) == 0 )
  {
    sub_1C2D490(&CombineListViewObject_TypeInfo);
    byte_4C2B0B9 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj
      || (naturalAligment = CombineListViewObject_TypeInfo->_2.naturalAligment,
          obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
      || (CombineListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != CombineListViewObject_TypeInfo
      || (Item = CombineListViewObject__GetItem((CombineListViewObject_o *)obj, v8)) == 0
      || (info = Item->fields.info) == 0 )
    {
      sub_1C2D6EC(Item, v8);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct UIScrollView_o *v10; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4C2B0B8 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2B0B8 = 1;
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
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_1C2D6EC(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v10->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v10,
          1,
          v10->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
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
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C2B0B6 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_CombineListViewManager_OnMoveEnd__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineListViewObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineListViewObject__get_Count__);
    sub_1C2D490(&StringLiteral_9936/*"OnMoveEnd"*/);
    byte_4C2B0B6 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)CombineListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C2D6EC(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9936/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_CombineListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_CombineListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C2D6EC(v12, v13);
      CombineListViewObject__Init_48107452((CombineListViewObject_o *)current, mode, v11, delay, v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void CombineListViewManager__RequestListObject_48106424(
        CombineListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C2B0B7 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_CombineListViewManager_OnMoveEnd__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineListViewObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineListViewObject__get_Count__);
    sub_1C2D490(&StringLiteral_9936/*"OnMoveEnd"*/);
    byte_4C2B0B7 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)CombineListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1C2D6EC(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9936/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_CombineListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_CombineListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C2D6EC(v10, v11);
      CombineListViewObject__Init_48107552((CombineListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__Dispose__);
  }
}


void CombineListViewManager__SetMode(
        CombineListViewManager_o *this,
        int32_t mode,
        CombineListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  CombineListViewManager__SetMode_48106280(this, mode, v6);
}


void CombineListViewManager__SetMode_48106280(CombineListViewManager_o *this, int32_t mode, const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 1, 0);
  if ( mode == 1 )
    CombineListViewManager__RequestListObject_48106424(this, 4, v5);
}


void CombineListViewManager__SetMode_48106372(
        CombineListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  CombineListViewManager__SetMode_48106280(this, mode, v6);
}


void CombineListViewManager__SetObjectItem(
        CombineListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  CombineListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4C2B0B5 & 1) == 0 )
  {
    this = (CombineListViewManager_o *)sub_1C2D490(&CombineListViewObject_TypeInfo);
    byte_4C2B0B5 = 1;
  }
  if ( !obj
    || (naturalAligment = CombineListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (CombineListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != CombineListViewObject_TypeInfo )
  {
    sub_1C2D6EC(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 4;
  else
    v7 = 2;
  CombineListViewObject__Init_48106152((CombineListViewObject_o *)obj, v7, (const MethodInfo *)item);
}


void CombineListViewManager__add_callbackFunc(
        CombineListViewManager_o *this,
        CombineListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct CombineListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CombineListViewManager_o *v10; // x0
  CombineListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4C2B0AD & 1) == 0 )
  {
    sub_1C2D490(&CombineListViewManager_CallbackFunc_TypeInfo);
    byte_4C2B0AD = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (CombineListViewManager_CallbackFunc_c *)v7->klass != CombineListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C676E8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C2D9AC(v7);
  CombineListViewManager__remove_callbackFunc(v10, v11, v12);
}


void CombineListViewManager__add_callbackFunc2(
        CombineListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CombineListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4C2B0AF & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C2B0AF = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C676E8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C2D9AC(v7);
  CombineListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_CombineListViewObject__o *CombineListViewManager__get_ClippingObjectList(
        CombineListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C2B0B2 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_CombineListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineListViewObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_CombineListViewObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2B0B2 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_CombineListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_CombineListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C2D6EC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C2D6EC(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_CombineListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C2D6EC(0, v10);
      Item = (ListViewItem_o *)CombineListViewObject__GetItem((CombineListViewObject_o *)Component_object, v10);
      if ( !Item )
        sub_1C2D6EC(0, v13);
      if ( Item->fields.isTermination )
      {
        v16 = ListViewManager__ClippingItem_43582756((ListViewManager_o *)this, Item, 0);
        if ( v16 )
        {
          if ( !v3 )
            sub_1C2D6EC(v16, v17);
          items = v3->fields._items;
          v19 = Method_System_Collections_Generic_List_CombineListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1C2D6EC(v16, v17);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1C2D6EC(Item, v13);
        items = v3->fields._items;
        v19 = Method_System_Collections_Generic_List_CombineListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C2D6EC(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v21 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v11;
        sub_1C2D434((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v11, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CombineListViewObject__o *)v3;
}


System_Collections_Generic_List_CombineListViewObject__o *CombineListViewManager__get_ObjectList(
        CombineListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *Component_object; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *v12; // x1
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  Il2CppClass **v16; // x0
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C2B0B1 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_CombineListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_CombineListViewObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_CombineListViewObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2B0B1 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_CombineListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_CombineListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1C2D6EC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1C2D6EC(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_CombineListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1C2D6EC(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_CombineListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1C2D6EC(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
      }
      else
      {
        v16 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v16[4] = (Il2CppClass *)v12;
        sub_1C2D434((CGThumbnailListItem_o *)(v16 + 4), (int32_t)v12, v10, v11);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CombineListViewObject__o *)v3;
}


void CombineListViewManager__remove_callbackFunc(
        CombineListViewManager_o *this,
        CombineListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct CombineListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CombineListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4C2B0AE & 1) == 0 )
  {
    sub_1C2D490(&CombineListViewManager_CallbackFunc_TypeInfo);
    byte_4C2B0AE = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (CombineListViewManager_CallbackFunc_c *)v7->klass != CombineListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C676E8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C2D9AC(v7);
  CombineListViewManager__add_callbackFunc2(v10, v11, v12);
}


void CombineListViewManager__remove_callbackFunc2(
        CombineListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CombineListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4C2B0B0 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C2B0B0 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C676E8(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C2D9AC(v7);
  CombineListViewManager__get_ObjectList(v10, v11);
}


void CombineListViewManager_CallbackFunc___ctor(
        CombineListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  __int64 (__fastcall *v9)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v11; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A76374;
LABEL_8:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = sub_1A76354;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v11, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1A7630C;
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
  return (System_IAsyncResult_o *)sub_1C2D444(this, &v6, callback, object);
}


void CombineListViewManager_CallbackFunc__EndInvoke(
        CombineListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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