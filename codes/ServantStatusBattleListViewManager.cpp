void ServantStatusBattleListViewManager___ctor(ServantStatusBattleListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusBattleListViewManager__ChangeSelectIndex(
        ServantStatusBattleListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w21
  const MethodInfo *v11; // x2
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C22800 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__get_Item__);
    byte_4C22800 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    itemList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    if ( !v12.fields._current )
      sub_1C2D6EC(0, v6);
    ListViewItem__set_IsSelect(
      (ListViewItem_o *)v12.fields._current,
      *(_DWORD *)((char *)&v12.fields._current->klass + (unsigned __int64)&dword_14) == index,
      0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  itemList = (System_Collections_Generic_List_object__o *)ServantStatusBattleListViewManager__get_ObjectList(this, v7);
  if ( !itemList )
    goto LABEL_15;
  size = itemList->fields._size;
  v9 = itemList;
  if ( size >= 1 )
  {
    v10 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                v9,
                                                                v10,
                                                                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__get_Item__);
      if ( !itemList )
        break;
      ServantStatusBattleListViewObject__Init_33459456((ServantStatusBattleListViewObject_o *)itemList, 4, v11);
      if ( ++v10 >= v9->fields._size )
        return;
    }
LABEL_15:
    sub_1C2D6EC(itemList, *(_QWORD *)&index);
  }
}


void ServantStatusBattleListViewManager__CreateList(
        ServantStatusBattleListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        const MethodInfo *method)
{
  __int64 ConvertOverwriteDispImageLimitCount; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  struct System_Int32_array *dispSelectList; // x11
  il2cpp_array_size_t max_length; // x9
  unsigned int v10; // w8
  bool v11; // w10
  bool v12; // cc
  __int64 v13; // x9
  unsigned __int64 v14; // x10
  int32_t v15; // w22
  int32_t v16; // w25
  bool v17; // w24
  System_Collections_Generic_List_object__o *itemList; // x23
  int32_t size; // w27
  bool v20; // w28
  int32_t SvtId; // w19
  ServantStatusListViewItem_o *v22; // x21
  bool IsMine; // w20
  ServantStatusBattleListViewItem_o *v24; // x26
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  Il2CppClass **v30; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v31; // x8
  struct UIScrollView_o *scrollView; // x9
  int v33; // w8
  const MethodInfo *v34; // [xsp+0h] [xbp-A0h]
  int32_t *m_Items; // [xsp+8h] [xbp-98h]
  unsigned int v36; // [xsp+14h] [xbp-8Ch]
  struct System_Int32_array *v37; // [xsp+18h] [xbp-88h]
  __int64 v38; // [xsp+20h] [xbp-80h]
  ServantStatusBattleListViewManager_o *v39; // [xsp+28h] [xbp-78h]
  bool v40; // [xsp+34h] [xbp-6Ch]
  unsigned __int64 v41; // [xsp+38h] [xbp-68h]

  if ( (byte_4C227F8 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C2D490(&ServantStatusBattleListViewItem_TypeInfo);
    byte_4C227F8 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  if ( !mainInfo )
    goto LABEL_36;
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(mainInfo, 0);
  dispSelectList = mainInfo->fields.dispSelectList;
  if ( !dispSelectList )
    goto LABEL_36;
  max_length = dispSelectList->max_length;
  v10 = max_length;
  if ( mainInfo->fields.isConvertOverwriteImage )
  {
    v40 = 0;
  }
  else
  {
    if ( mainInfo->fields.userSvtEntity )
      v11 = 1;
    else
      v11 = mainInfo->fields.userSvtCollectionEntity != 0;
    v40 = v11;
  }
  v12 = (int)max_length <= 3;
  v13 = 3;
  if ( !v12 )
    v13 = (unsigned int)dispSelectList->max_length;
  v14 = 0;
  v15 = 0;
  m_Items = dispSelectList->m_Items;
  v38 = v13 - 1;
  v39 = this;
  v37 = mainInfo->fields.dispSelectList;
  v36 = ConvertOverwriteDispImageLimitCount;
  while ( 1 )
  {
    if ( (__int64)v14 >= (int)v10 )
      goto LABEL_18;
    if ( v14 >= v10 )
      sub_1C2D6F4(ConvertOverwriteDispImageLimitCount, v6, v7);
    v16 = m_Items[v14];
    if ( v16 < 0 )
    {
LABEL_18:
      v17 = 0;
      v16 = v14;
    }
    else
    {
      v17 = 1;
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( v16 == (_DWORD)ConvertOverwriteDispImageLimitCount )
      v15 = v14;
    v41 = v14;
    if ( !itemList )
      goto LABEL_36;
    size = itemList->fields._size;
    v20 = v16 == (_DWORD)ConvertOverwriteDispImageLimitCount;
    SvtId = ServantStatusListViewItem__get_SvtId(mainInfo, 0);
    v22 = mainInfo;
    IsMine = ServantStatusListViewItem__get_IsMine(mainInfo, 0);
    v24 = (ServantStatusBattleListViewItem_o *)sub_1C2D6DC(ServantStatusBattleListViewItem_TypeInfo);
    ServantStatusBattleListViewItem___ctor(v24, size, SvtId, v16, v17 && v40, v17, v20, IsMine, v34);
    items = itemList->fields._items;
    v28 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++itemList->fields._version;
    if ( !items )
      goto LABEL_36;
    v29 = itemList->fields._size;
    if ( (unsigned int)v29 >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        itemList,
        (Il2CppObject *)v24,
        *(const MethodInfo_3789B84 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    }
    else
    {
      v30 = &items->obj.klass + v29;
      itemList->fields._size = v29 + 1;
      v30[4] = (Il2CppClass *)v24;
      sub_1C2D434((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v24, v25, v26);
    }
    this = v39;
    if ( v38 == v41 )
      break;
    ConvertOverwriteDispImageLimitCount = v36;
    mainInfo = v22;
    v14 = v41 + 1;
    v10 = v37->max_length;
  }
  v31 = v39->fields.itemList;
  if ( !v31 || (scrollView = v39->fields.scrollView) == 0 )
LABEL_36:
    sub_1C2D6EC(ConvertOverwriteDispImageLimitCount, v6);
  if ( v31->fields._size > 5 )
    v33 = 1;
  else
    v33 = 4;
  scrollView->fields.contentPivot = v33;
  ListViewManager__SortItem((ListViewManager_o *)v39, -1, 1, -1, 0);
  if ( v15 >= 5 )
    ListViewManager__MoveBottomItem((ListViewManager_o *)v39, v15, 0, 0);
}


void ServantStatusBattleListViewManager__DestroyList(
        ServantStatusBattleListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
}


ServantStatusBattleListViewItem_o *ServantStatusBattleListViewManager__GetItem(
        ServantStatusBattleListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4C227F9 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1C2D490(&ServantStatusBattleListViewItem_TypeInfo);
    byte_4C227F9 = 1;
  }
  result = (ServantStatusBattleListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ServantStatusBattleListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)result,
                                                    index,
                                                    (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = ServantStatusBattleListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (ServantStatusBattleListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusBattleListViewItem_TypeInfo )
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


void ServantStatusBattleListViewManager__OnClickListView(
        ServantStatusBattleListViewManager_o *this,
        ListViewObject_o *selectObj,
        const MethodInfo *method)
{
  ;
}


void ServantStatusBattleListViewManager__OnClickListViewButton(
        ServantStatusBattleListViewManager_o *this,
        ListViewObject_o *selectObj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  ServantStatusBattleListViewManager_o *v5; // x20
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ServantStatusBattleListViewManager_CallbackFunc_o *callbackFunc; // x21
  unsigned int Index; // w0

  v5 = this;
  if ( (byte_4C227FF & 1) == 0 )
  {
    this = (ServantStatusBattleListViewManager_o *)sub_1C2D490(&ServantStatusBattleListViewItem_TypeInfo);
    byte_4C227FF = 1;
  }
  if ( !selectObj
    || (linkItem = selectObj->fields.linkItem) == 0
    || (naturalAligment = ServantStatusBattleListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ServantStatusBattleListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusBattleListViewItem_TypeInfo )
  {
    sub_1C2D6EC(this, selectObj);
  }
  if ( BYTE1(linkItem[1].fields.sortValue0) && LOBYTE(linkItem[1].fields.sortValue0) )
  {
    callbackFunc = v5->fields.callbackFunc;
    v5->fields.callbackFunc = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&v5->fields.callbackFunc, 0, (int32_t)method, v3);
    if ( callbackFunc )
    {
      Index = ListViewObject__get_Index(selectObj, 0);
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
        callbackFunc->fields.method_code,
        Index,
        callbackFunc->fields.method);
    }
  }
}


void ServantStatusBattleListViewManager__OnMoveEnd(
        ServantStatusBattleListViewManager_o *this,
        const MethodInfo *method)
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

  if ( (byte_4C227FE & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C227FE = 1;
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
void ServantStatusBattleListViewManager__RequestListObject(
        ServantStatusBattleListViewManager_o *this,
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

  if ( (byte_4C227FC & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__get_Count__);
    sub_1C2D490(&Method_ServantStatusBattleListViewManager_OnMoveEnd__);
    sub_1C2D490(&StringLiteral_9936/*"OnMoveEnd"*/);
    byte_4C227FC = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusBattleListViewManager__get_ObjectList(
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
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantStatusBattleListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C2D6EC(v12, v13);
      ServantStatusBattleListViewObject__Init_33460596(
        (ServantStatusBattleListViewObject_o *)current,
        mode,
        v11,
        delay,
        v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusBattleListViewManager__RequestListObject_33460092(
        ServantStatusBattleListViewManager_o *this,
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

  if ( (byte_4C227FD & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__get_Count__);
    sub_1C2D490(&Method_ServantStatusBattleListViewManager_OnMoveEnd__);
    sub_1C2D490(&StringLiteral_9936/*"OnMoveEnd"*/);
    byte_4C227FD = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusBattleListViewManager__get_ObjectList(
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
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_ServantStatusBattleListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1C2D6EC(v10, v11);
      ServantStatusBattleListViewObject__Init_33461204((ServantStatusBattleListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__Dispose__);
  }
}


void ServantStatusBattleListViewManager__SetMode(
        ServantStatusBattleListViewManager_o *this,
        int32_t mode,
        ServantStatusBattleListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  this->fields.callbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
  ServantStatusBattleListViewManager__SetMode_33459580(this, mode, v6, v7);
}


void ServantStatusBattleListViewManager__SetMode_33459580(
        ServantStatusBattleListViewManager_o *this,
        int32_t mode,
        int32_t select,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  System_Collections_Generic_List_ServantStatusBattleListViewObject__o *ClippingObjectList; // x0
  __int64 v9; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v11; // x20
  int32_t v12; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v14; // x23
  const MethodInfo *v15; // x3

  if ( (byte_4C227FB & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__get_Item__);
    sub_1C2D490(&Method_ServantStatusBattleListViewManager_OnMoveEnd__);
    sub_1C2D490(&StringLiteral_9936/*"OnMoveEnd"*/);
    byte_4C227FB = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 1, 0);
  if ( mode == 1 )
  {
    ServantStatusBattleListViewManager__RequestListObject_33460092(this, 3, v7);
    return;
  }
  if ( mode == 2 )
  {
    ClippingObjectList = ServantStatusBattleListViewManager__get_ClippingObjectList(this, v6);
    if ( !ClippingObjectList )
      goto LABEL_13;
    size = ClippingObjectList->fields._size;
    v11 = (System_Collections_Generic_List_object__o *)ClippingObjectList;
    if ( size >= 1 )
    {
      this->fields.callbackCount = size;
      v12 = 0;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v11,
                 v12,
                 (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__get_Item__);
        v14 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(v14, (Il2CppObject *)this, Method_ServantStatusBattleListViewManager_OnMoveEnd__, 0);
        if ( !Item )
          break;
        ServantStatusBattleListViewObject__Init_33460596((ServantStatusBattleListViewObject_o *)Item, 4, v14, 0.1, v15);
        if ( ++v12 >= v11->fields._size )
          return;
      }
LABEL_13:
      sub_1C2D6EC(ClippingObjectList, v9);
    }
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9936/*"OnMoveEnd"*/,
      0.2,
      0);
  }
}


void ServantStatusBattleListViewManager__SetMode_33460040(
        ServantStatusBattleListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  this->fields.callbackFunc2 = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc2, (int32_t)callback, (int32_t)callback, method);
  ServantStatusBattleListViewManager__SetMode_33459580(this, mode, v6, v7);
}


void ServantStatusBattleListViewManager__SetObjectItem(
        ServantStatusBattleListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusBattleListViewManager_o *v5; // x20
  __int64 naturalAligment; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4C227FA & 1) == 0 )
  {
    this = (ServantStatusBattleListViewManager_o *)sub_1C2D490(&ServantStatusBattleListViewObject_TypeInfo);
    byte_4C227FA = 1;
  }
  if ( !obj
    || (naturalAligment = ServantStatusBattleListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ServantStatusBattleListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusBattleListViewObject_TypeInfo )
  {
    sub_1C2D6EC(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  ServantStatusBattleListViewObject__Init_33459456(
    (ServantStatusBattleListViewObject_o *)obj,
    v7,
    (const MethodInfo *)item);
}


void ServantStatusBattleListViewManager__add_callbackFunc(
        ServantStatusBattleListViewManager_o *this,
        ServantStatusBattleListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct ServantStatusBattleListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ServantStatusBattleListViewManager_o *v10; // x0
  ServantStatusBattleListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4C227F2 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusBattleListViewManager_CallbackFunc_TypeInfo);
    byte_4C227F2 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (ServantStatusBattleListViewManager_CallbackFunc_c *)v7->klass != ServantStatusBattleListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C676E8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusBattleListViewManager_o *)sub_1C2D9AC(v7);
  ServantStatusBattleListViewManager__remove_callbackFunc(v10, v11, v12);
}


void ServantStatusBattleListViewManager__add_callbackFunc2(
        ServantStatusBattleListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ServantStatusBattleListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4C227F4 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C227F4 = 1;
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
  v10 = (ServantStatusBattleListViewManager_o *)sub_1C2D9AC(v7);
  ServantStatusBattleListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_ServantStatusBattleListViewObject__o *ServantStatusBattleListViewManager__get_ClippingObjectList(
        ServantStatusBattleListViewManager_o *this,
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

  if ( (byte_4C227F7 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ServantStatusBattleListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantStatusBattleListViewObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C227F7 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantStatusBattleListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantStatusBattleListViewObject___ctor__);
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
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusBattleListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1C2D6EC(0, v10);
      Item = (ListViewItem_o *)ServantStatusBattleListViewObject__GetItem(
                                 (ServantStatusBattleListViewObject_o *)Component_object,
                                 v10);
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
          v19 = Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__Add__;
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
        v19 = Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__Add__;
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
  return (System_Collections_Generic_List_ServantStatusBattleListViewObject__o *)v3;
}


System_Collections_Generic_List_ServantStatusBattleListViewObject__o *ServantStatusBattleListViewManager__get_ObjectList(
        ServantStatusBattleListViewManager_o *this,
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

  if ( (byte_4C227F6 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ServantStatusBattleListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantStatusBattleListViewObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C227F6 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantStatusBattleListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantStatusBattleListViewObject___ctor__);
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
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusBattleListViewObject___);
      v12 = Component_object;
      if ( !v3 )
        sub_1C2D6EC(Component_object, Component_object);
      items = v3->fields._items;
      v14 = Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__Add__;
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
  return (System_Collections_Generic_List_ServantStatusBattleListViewObject__o *)v3;
}


void ServantStatusBattleListViewManager__remove_callbackFunc(
        ServantStatusBattleListViewManager_o *this,
        ServantStatusBattleListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct ServantStatusBattleListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ServantStatusBattleListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4C227F3 & 1) == 0 )
  {
    sub_1C2D490(&ServantStatusBattleListViewManager_CallbackFunc_TypeInfo);
    byte_4C227F3 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (ServantStatusBattleListViewManager_CallbackFunc_c *)v7->klass != ServantStatusBattleListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C676E8(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusBattleListViewManager_o *)sub_1C2D9AC(v7);
  ServantStatusBattleListViewManager__add_callbackFunc2(v10, v11, v12);
}


void ServantStatusBattleListViewManager__remove_callbackFunc2(
        ServantStatusBattleListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  ServantStatusBattleListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4C227F5 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    byte_4C227F5 = 1;
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
  v10 = (ServantStatusBattleListViewManager_o *)sub_1C2D9AC(v7);
  ServantStatusBattleListViewManager__get_ObjectList(v10, v11);
}


void ServantStatusBattleListViewManager_CallbackFunc___ctor(
        ServantStatusBattleListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A6B45C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6B414;
}


System_IAsyncResult_o *ServantStatusBattleListViewManager_CallbackFunc__BeginInvoke(
        ServantStatusBattleListViewManager_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4C22801 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    byte_4C22801 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v9, callback, object);
}


void ServantStatusBattleListViewManager_CallbackFunc__EndInvoke(
        ServantStatusBattleListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
}


void ServantStatusBattleListViewManager_CallbackFunc__Invoke(
        ServantStatusBattleListViewManager_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}