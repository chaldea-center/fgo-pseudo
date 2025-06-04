void __fastcall CombineListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct CombineListItemInfo_array *v12; // x19
  CombineListItemInfo_o *v13; // x20
  const MethodInfo *v14; // x5
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  const MethodInfo *v18; // x3
  CombineListItemInfo_o *v19; // x20
  const MethodInfo *v20; // x5
  const MethodInfo *v21; // x3
  CombineListItemInfo_o *v22; // x20
  const MethodInfo *v23; // x5
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Array_o *v27; // x0
  System_Array_o *v28; // x19
  struct CombineListViewManager_StaticFields *static_fields; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  __int64 v32; // x0
  System_RuntimeFieldHandle_o v33; // 0:w1.4

  if ( (byte_4B05AAD & 1) == 0 )
  {
    sub_1BC3008(&CombineListItemInfo___TypeInfo, v1);
    sub_1BC3008(&CombineListItemInfo_TypeInfo, v2);
    sub_1BC3008(&CombineListViewManager_TypeInfo, v3);
    sub_1BC3008(&int___TypeInfo, v4);
    sub_1BC3008(
      &Field__PrivateImplementationDetails__4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D,
      v5);
    sub_1BC3008(&StringLiteral_8564/*"MENU_OPERATION_FRIEND"*/, v6);
    sub_1BC3008(&StringLiteral_20261/*"img_myroom_01"*/, v7);
    sub_1BC3008(&StringLiteral_8565/*"MENU_OPERATION_OFFER"*/, v8);
    sub_1BC3008(&StringLiteral_8566/*"MENU_OPERATION_OFFERED"*/, v9);
    sub_1BC3008(&StringLiteral_20263/*"img_myroom_03"*/, v10);
    sub_1BC3008(&StringLiteral_20262/*"img_myroom_02"*/, v11);
    byte_4B05AAD = 1;
  }
  v12 = (struct CombineListItemInfo_array *)sub_1BC30B0(CombineListItemInfo___TypeInfo, 3LL);
  v13 = (CombineListItemInfo_o *)sub_1BC3254(CombineListItemInfo_TypeInfo);
  CombineListItemInfo___ctor(
    v13,
    1,
    1,
    (System_String_o *)StringLiteral_20261/*"img_myroom_01"*/,
    (System_String_o *)StringLiteral_8564/*"MENU_OPERATION_FRIEND"*/,
    v14);
  if ( !v12 )
    sub_1BC3264(v15, v16);
  if ( v13 )
  {
    v15 = sub_1BC3144(v13, v12->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_15;
  }
  if ( !v12->max_length )
    goto LABEL_14;
  v12->m_Items[0] = v13;
  sub_1BC2FAC((CGThumbnailListItem_o *)v12->m_Items, (int32_t)v13, v17, v18);
  v19 = (CombineListItemInfo_o *)sub_1BC3254(CombineListItemInfo_TypeInfo);
  CombineListItemInfo___ctor(
    v19,
    2,
    1,
    (System_String_o *)StringLiteral_20262/*"img_myroom_02"*/,
    (System_String_o *)StringLiteral_8565/*"MENU_OPERATION_OFFER"*/,
    v20);
  if ( v19 )
  {
    v15 = sub_1BC3144(v19, v12->obj.klass->_1.element_class);
    if ( !v15 )
      goto LABEL_15;
  }
  if ( v12->max_length <= 1 )
    goto LABEL_14;
  v12->m_Items[1] = v19;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v12->m_Items[1], (int32_t)v19, v17, v21);
  v22 = (CombineListItemInfo_o *)sub_1BC3254(CombineListItemInfo_TypeInfo);
  CombineListItemInfo___ctor(
    v22,
    3,
    1,
    (System_String_o *)StringLiteral_20263/*"img_myroom_03"*/,
    (System_String_o *)StringLiteral_8566/*"MENU_OPERATION_OFFERED"*/,
    v23);
  if ( v22 )
  {
    v15 = sub_1BC3144(v22, v12->obj.klass->_1.element_class);
    if ( !v15 )
    {
LABEL_15:
      v32 = sub_1BC3288(v15);
      sub_1BC3130(v32, 0LL);
    }
  }
  if ( v12->max_length <= 2 )
LABEL_14:
    sub_1BC326C(v15, v16, v17);
  v12->m_Items[2] = v22;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v12->m_Items[2], (int32_t)v22, v17, v24);
  CombineListViewManager_TypeInfo->static_fields->itemInfo = v12;
  sub_1BC2FAC((CGThumbnailListItem_o *)CombineListViewManager_TypeInfo->static_fields, (int32_t)v12, v25, v26);
  v27 = (System_Array_o *)sub_1BC30B0(int___TypeInfo, 3LL);
  v33.fields.value = Field__PrivateImplementationDetails__4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D;
  v28 = v27;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63047724(v27, v33, 0LL);
  static_fields = CombineListViewManager_TypeInfo->static_fields;
  static_fields->normalKindList = (struct System_Int32_array *)v28;
  sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->normalKindList, (int32_t)v28, v30, v31);
}


void __fastcall CombineListViewManager___ctor(CombineListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineListViewManager__CreateList(
        CombineListViewManager_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *scrollView; // x20
  __int64 v10; // x1
  ListViewItemSeed_o *seed; // x0
  CombineListViewManager_c *v12; // x0
  struct System_Int32_array *normalKindList; // x25
  __int64 v14; // x21
  __int64 v15; // x2
  unsigned __int64 v16; // x26
  int32_t v17; // w20
  __int64 v18; // x27
  int32_t v19; // w21
  UnityEngine_GameObject_c *klass; // x8
  int namespaze; // w9
  int v22; // w10
  __int64 v23; // x22
  __int64 v24; // x21
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  __int64 v29; // x8
  _QWORD *v30; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v32; // x8
  bool v33; // vf
  int32_t v34; // w20
  __int64 methodPtr_low; // x10
  __int64 v36; // x10

  if ( (byte_4B05AA6 & 1) == 0 )
  {
    sub_1BC3008(&CombineListViewItem_TypeInfo, *(_QWORD *)&kind);
    sub_1BC3008(&CombineListViewManager_TypeInfo, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v8);
    byte_4B05AA6 = 1;
  }
  if ( kind )
    goto LABEL_4;
  v12 = CombineListViewManager_TypeInfo;
  if ( !CombineListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineListViewManager_TypeInfo);
    v12 = CombineListViewManager_TypeInfo;
  }
  normalKindList = v12->static_fields->normalKindList;
  if ( !normalKindList )
  {
LABEL_4:
    ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  }
  else
  {
    v14 = *(_QWORD *)&normalKindList->max_length;
    ListViewManager__CreateList((ListViewManager_o *)this, v14, 0LL);
    if ( (int)v14 >= 1 )
    {
      v16 = 0LL;
      v17 = 0;
      v18 = (unsigned int)v14;
      do
      {
        if ( v16 >= normalKindList->max_length )
LABEL_45:
          sub_1BC326C(seed, v10, v15);
        seed = (ListViewItemSeed_o *)CombineListViewManager_TypeInfo;
        v19 = normalKindList->m_Items[v16 + 1];
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
          v22 = 0;
          while ( 1 )
          {
            if ( namespaze == v22 )
              goto LABEL_45;
            v23 = *((_QWORD *)&klass->_1.byval_arg.data + v22);
            if ( !v23 )
              goto LABEL_46;
            if ( *(_DWORD *)(v23 + 16) == v19 )
              break;
            if ( namespaze == ++v22 )
              goto LABEL_34;
          }
          v24 = sub_1BC3254(CombineListViewItem_TypeInfo);
          ListViewItem___ctor((ListViewItem_o *)v24, 0LL);
          *(_DWORD *)(v24 + 20) = v17;
          *(_QWORD *)(v24 + 112) = v23;
          sub_1BC2FAC((CGThumbnailListItem_o *)(v24 + 112), v23, v25, v26);
          seed = this->fields.seed;
          if ( !seed )
            goto LABEL_46;
          *(UnityEngine_Vector3_o *)(v24 + 92) = ListViewItemSeed__GetLocalPosition(seed, v17, 0LL);
          seed = (ListViewItemSeed_o *)this->fields.itemList;
          if ( !seed )
            goto LABEL_46;
          v29 = *(_QWORD *)&seed->fields.m_CachedPtr;
          v30 = Method_System_Collections_Generic_List_ListViewItem__Add__;
          ++HIDWORD(seed->fields.m_CancellationTokenSource);
          if ( !v29 )
            goto LABEL_46;
          m_CancellationTokenSource_low = SLODWORD(seed->fields.m_CancellationTokenSource);
          if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v29 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)seed,
              (Il2CppObject *)v24,
              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
          }
          else
          {
            v32 = v29 + 8 * m_CancellationTokenSource_low;
            LODWORD(seed->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
            *(_QWORD *)(v32 + 32) = v24;
            sub_1BC2FAC((CGThumbnailListItem_o *)(v32 + 32), v24, v27, v28);
          }
          ++v17;
        }
LABEL_34:
        ++v16;
      }
      while ( v16 != v18 );
      v33 = __OFSUB__(v17, 1);
      v34 = v17 - 1;
      if ( v34 < 0 == v33 )
      {
        seed = (ListViewItemSeed_o *)this->fields.itemList;
        if ( !seed )
          goto LABEL_46;
        seed = (ListViewItemSeed_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)seed,
                                       0,
                                       (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !seed )
          goto LABEL_46;
        methodPtr_low = LOBYTE(CombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(seed->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low )
          goto LABEL_46;
        if ( (CombineListViewItem_c *)seed->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineListViewItem_TypeInfo )
          goto LABEL_46;
        LOBYTE(seed[1].fields.m_CachedPtr) = 1;
        seed = (ListViewItemSeed_o *)this->fields.itemList;
        if ( !seed )
          goto LABEL_46;
        seed = (ListViewItemSeed_o *)System_Collections_Generic_List_object___get_Item(
                                       (System_Collections_Generic_List_object__o *)seed,
                                       v34,
                                       (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( !seed )
          goto LABEL_46;
        v36 = LOBYTE(CombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(seed->klass->vtable._0_Equals.methodPtr) < (unsigned int)v36
          || (CombineListViewItem_c *)seed->klass->_2.typeHierarchy[v36 - 1] != CombineListViewItem_TypeInfo )
        {
          goto LABEL_46;
        }
        LOBYTE(seed[1].fields.m_CachedPtr) = 1;
      }
    }
  }
  ListViewManager__ClippingItems((ListViewManager_o *)this, 1, 0, 0LL);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    seed = (ListViewItemSeed_o *)this->fields.scrollView;
    if ( seed )
    {
      UIScrollView__ResetPosition((UIScrollView_o *)seed, 0LL);
      return;
    }
LABEL_46:
    sub_1BC3264(seed, v10);
  }
}


void __fastcall CombineListViewManager__DestroyList(CombineListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
CombineListViewItem_o *__fastcall CombineListViewManager__GetItem(
        CombineListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  CombineListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B05AA7 & 1) == 0 )
  {
    sub_1BC3008(&CombineListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_1BC3008(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_4B05AA7 = 1;
  }
  result = (CombineListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (CombineListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)result,
                                        index,
                                        (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(CombineListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (CombineListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineListViewItem_TypeInfo )
          return 0LL;
      }
      else
      {
        return 0LL;
      }
    }
  }
  return result;
}


void __fastcall CombineListViewManager__OnClickListView(
        CombineListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct CombineListViewManager_CallbackFunc_o *callbackFunc; // x21
  CombineListViewItem_o *Item; // x0
  __int64 v8; // x1
  __int64 methodPtr_low; // x10
  struct CombineListItemInfo_o *info; // x8

  if ( (byte_4B05AAC & 1) == 0 )
  {
    sub_1BC3008(&CombineListViewObject_TypeInfo, obj);
    byte_4B05AAC = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0LL;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc, 0, (int32_t)method, v3);
  if ( callbackFunc )
  {
    if ( !obj
      || (methodPtr_low = LOBYTE(CombineListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
      || (CombineListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineListViewObject_TypeInfo
      || (Item = CombineListViewObject__GetItem((CombineListViewObject_o *)obj, 0LL)) == 0LL
      || (info = Item->fields.info) == 0LL )
    {
      sub_1BC3264(Item, v8);
    }
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct System_String_o *, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      info->fields.eventData,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall CombineListViewManager__OnMoveEnd(CombineListViewManager_o *this, const MethodInfo *method)
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

  if ( (byte_4B05AAB & 1) == 0 )
  {
    sub_1BC3008(&UnityEngine_Object_TypeInfo, method);
    byte_4B05AAB = 1;
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
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v10 = this->fields.scrollView;
        if ( !v10 )
          sub_1BC3264(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
      if ( callbackFunc2 )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
          callbackFunc2->fields.original_method_info,
          *(_QWORD *)&callbackFunc2->fields.extra_arg);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineListViewManager__RequestListObject(
        CombineListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B05AA9 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BC3008(&Method_CombineListViewManager_OnMoveEnd__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__Dispose__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__MoveNext__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__get_Current__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_CombineListViewObject__GetEnumerator__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_CombineListViewObject__get_Count__, v12);
    sub_1BC3008(&StringLiteral_9854/*"OnMoveEnd"*/, v13);
    byte_4B05AA9 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  ObjectList = (System_Collections_Generic_List_object__o *)CombineListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BC3264(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9854/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v21,
      ObjectList,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_CombineListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v21,
              (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__MoveNext__) )
    {
      current = v21.fields._current;
      v18 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_CombineListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BC3264(v19, v20);
      CombineListViewObject__Init_47157180((CombineListViewObject_o *)current, mode, v18, delay, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v21,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineListViewManager__RequestListObject_46954596(
        CombineListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B05AAA & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1BC3008(&Method_CombineListViewManager_OnMoveEnd__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__Dispose__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__MoveNext__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__get_Current__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_CombineListViewObject__GetEnumerator__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_CombineListViewObject__get_Count__, v10);
    sub_1BC3008(&StringLiteral_9854/*"OnMoveEnd"*/, v11);
    byte_4B05AAA = 1;
  }
  memset(&v19, 0, sizeof(v19));
  ObjectList = (System_Collections_Generic_List_object__o *)CombineListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1BC3264(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9854/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      ObjectList,
      (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_CombineListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v19,
              (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__MoveNext__) )
    {
      current = v19.fields._current;
      v16 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_CombineListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1BC3264(v17, v18);
      CombineListViewObject__Init_47157280((CombineListViewObject_o *)current, mode, v16, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_CombineListViewObject__Dispose__);
  }
}


void __fastcall CombineListViewManager__SetMode(
        CombineListViewManager_o *this,
        int32_t mode,
        CombineListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  CombineListViewManager__SetMode_46954452(this, mode, v6);
}


void __fastcall CombineListViewManager__SetMode_46954452(
        CombineListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2

  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 1, 0LL);
  if ( mode == 1 )
    CombineListViewManager__RequestListObject_46954596(this, 4, v5);
}


void __fastcall CombineListViewManager__SetMode_46954544(
        CombineListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.callbackFunc2 = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  CombineListViewManager__SetMode_46954452(this, mode, v6);
}


void __fastcall CombineListViewManager__SetObjectItem(
        CombineListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  CombineListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4B05AA8 & 1) == 0 )
  {
    this = (CombineListViewManager_o *)sub_1BC3008(&CombineListViewObject_TypeInfo, obj);
    byte_4B05AA8 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(CombineListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (CombineListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != CombineListViewObject_TypeInfo )
  {
    sub_1BC3264(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 4;
  else
    v7 = 2;
  CombineListViewObject__Init_47155036((CombineListViewObject_o *)obj, v7, 0LL);
}


void __fastcall CombineListViewManager__add_callbackFunc(
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

  if ( (byte_4B05AA0 & 1) == 0 )
  {
    sub_1BC3008(&CombineListViewManager_CallbackFunc_TypeInfo, value);
    byte_4B05AA0 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (CombineListViewManager_CallbackFunc_c *)v7->klass != CombineListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1BFD098(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BC3524(v7);
  CombineListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall CombineListViewManager__add_callbackFunc2(
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

  if ( (byte_4B05AA2 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, value);
    byte_4B05AA2 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1BFD098(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BC3524(v7);
  CombineListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_CombineListViewObject__o *__fastcall CombineListViewManager__get_ClippingObjectList(
        CombineListViewManager_o *this,
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
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  __int64 v18; // x1
  Il2CppObject *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  _BOOL8 v24; // x0
  __int64 v25; // x1
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B05AA5 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_CombineListViewObject___, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_CombineListViewObject__Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_CombineListViewObject___ctor__, v8);
    sub_1BC3008(&System_Collections_Generic_List_CombineListViewObject__TypeInfo, v9);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v10);
    byte_4B05AA5 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_CombineListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_CombineListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BC3264(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v32 = v31;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v32.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BC3264(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_CombineListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1BC3264(0LL, v18);
      Item = (ListViewItem_o *)CombineListViewObject__GetItem((CombineListViewObject_o *)Component_object, 0LL);
      if ( !Item )
        sub_1BC3264(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v24 = ListViewManager__ClippingItem_42785324((ListViewManager_o *)this, Item, 0LL);
        if ( v24 )
        {
          if ( !v11 )
            sub_1BC3264(v24, v25);
          items = v11->fields._items;
          v27 = Method_System_Collections_Generic_List_CombineListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1BC3264(v24, v25);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1BC3264(Item, v21);
        items = v11->fields._items;
        v27 = Method_System_Collections_Generic_List_CombineListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1BC3264(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v29 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v19;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v19, v22, v23);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CombineListViewObject__o *)v11;
}


System_Collections_Generic_List_CombineListViewObject__o *__fastcall CombineListViewManager__get_ObjectList(
        CombineListViewManager_o *this,
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
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject *v20; // x1
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass **v24; // x0
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B05AA4 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_CombineListViewObject___, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_CombineListViewObject__Add__, v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_CombineListViewObject___ctor__, v8);
    sub_1BC3008(&System_Collections_Generic_List_CombineListViewObject__TypeInfo, v9);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v10);
    byte_4B05AA4 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v11 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_CombineListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_CombineListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1BC3264(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1BC3264(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_CombineListViewObject___);
      v20 = Component_object;
      if ( !v11 )
        sub_1BC3264(Component_object, Component_object);
      items = v11->fields._items;
      v22 = Method_System_Collections_Generic_List_CombineListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1BC3264(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v24[4] = (Il2CppClass *)v20;
        sub_1BC2FAC((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v20, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CombineListViewObject__o *)v11;
}


void __fastcall CombineListViewManager__remove_callbackFunc(
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

  if ( (byte_4B05AA1 & 1) == 0 )
  {
    sub_1BC3008(&CombineListViewManager_CallbackFunc_TypeInfo, value);
    byte_4B05AA1 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (CombineListViewManager_CallbackFunc_c *)v7->klass != CombineListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1BFD098(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BC3524(v7);
  CombineListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall CombineListViewManager__remove_callbackFunc2(
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

  if ( (byte_4B05AA3 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, value);
    byte_4B05AA3 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1BFD098(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BC3524(v7);
  CombineListViewManager__get_ObjectList(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineListViewManager_CallbackFunc___ctor(
        CombineListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  Il2CppObject *v9; // x8
  struct System_Reflection_MethodInfo_o *v10; // x9
  __int64 v11; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BC30C8(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_1A11B80;
LABEL_8:
      this->fields.m_target = v9;
      goto LABEL_9;
    }
  }
  else
  {
    if ( !v8 )
    {
      v9 = (Il2CppObject *)sub_1A11B60;
      goto LABEL_8;
    }
    if ( !object )
    {
      v11 = sub_1BC3280(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BC3130(v11, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_9:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A11B18;
}


System_IAsyncResult_o *__fastcall CombineListViewManager_CallbackFunc__BeginInvoke(
        CombineListViewManager_CallbackFunc_o *this,
        System_String_o *result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  System_String_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = result;
  return (System_IAsyncResult_o *)sub_1BC2FBC(this, &v6, callback, object);
}


void __fastcall CombineListViewManager_CallbackFunc__EndInvoke(
        CombineListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BC2FC0(result, 0LL, method);
}


void __fastcall CombineListViewManager_CallbackFunc__Invoke(
        CombineListViewManager_CallbackFunc_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}