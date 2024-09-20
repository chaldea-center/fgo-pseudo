void __fastcall ServantStatusBattleListViewManager___ctor(
        ServantStatusBattleListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusBattleListViewManager__ChangeSelectIndex(
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

  if ( (byte_4A56CBA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__get_Item__);
    byte_4A56CBA = 1;
  }
  memset(&v12, 0, sizeof(v12));
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    itemList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    if ( !v12.fields._current )
      sub_1B8880C(0LL, v6);
    ListViewItem__set_IsSelect(
      (ListViewItem_o *)v12.fields._current,
      HIDWORD(v12.fields._current[1].klass) == index,
      0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
                                                                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__get_Item__);
      if ( !itemList )
        break;
      ServantStatusBattleListViewObject__Init_31643056((ServantStatusBattleListViewObject_o *)itemList, 4, v11);
      if ( ++v10 >= v9->fields._size )
        return;
    }
LABEL_15:
    sub_1B8880C(itemList, *(_QWORD *)&index);
  }
}


void __fastcall ServantStatusBattleListViewManager__CreateList(
        ServantStatusBattleListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        const MethodInfo *method)
{
  __int64 ConvertOverwriteDispImageLimitCount; // x0
  __int64 v6; // x1
  struct System_Int32_array *dispSelectList; // x11
  __int64 v8; // x9
  il2cpp_array_size_t max_length; // w8
  bool v10; // w10
  bool v11; // cc
  __int64 v12; // x9
  unsigned __int64 v13; // x10
  int32_t v14; // w22
  int32_t v15; // w25
  bool v16; // w24
  System_Collections_Generic_List_object__o *itemList; // x23
  int32_t size; // w27
  bool v19; // w28
  int32_t SvtId; // w19
  ServantStatusListViewItem_o *v21; // x21
  bool IsMine; // w20
  ServantStatusBattleListViewItem_o *v23; // x26
  int32_t v24; // w2
  int32_t v25; // w3
  bool v26; // w4
  bool v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  Il2CppClass **v33; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v34; // x8
  struct UIScrollView_o *scrollView; // x9
  int v36; // w8
  const MethodInfo *v37; // [xsp+0h] [xbp-A0h]
  int32_t *v38; // [xsp+8h] [xbp-98h]
  unsigned int v39; // [xsp+14h] [xbp-8Ch]
  struct System_Int32_array *v40; // [xsp+18h] [xbp-88h]
  __int64 v41; // [xsp+20h] [xbp-80h]
  ServantStatusBattleListViewManager_o *v42; // [xsp+28h] [xbp-78h]
  bool v43; // [xsp+34h] [xbp-6Ch]
  unsigned __int64 v44; // [xsp+38h] [xbp-68h]

  if ( (byte_4A56CB2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&ServantStatusBattleListViewItem_TypeInfo);
    byte_4A56CB2 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !mainInfo )
    goto LABEL_36;
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(
                                          mainInfo,
                                          0LL);
  dispSelectList = mainInfo->fields.dispSelectList;
  if ( !dispSelectList )
    goto LABEL_36;
  v8 = *(_QWORD *)&dispSelectList->max_length;
  max_length = v8;
  if ( mainInfo->fields.isConvertOverwriteImage )
  {
    v43 = 0;
  }
  else
  {
    if ( mainInfo->fields.userSvtEntity )
      v10 = 1;
    else
      v10 = mainInfo->fields.userSvtCollectionEntity != 0LL;
    v43 = v10;
  }
  v11 = (int)v8 <= 3;
  v12 = 3LL;
  if ( !v11 )
    v12 = (unsigned int)*(_QWORD *)&dispSelectList->max_length;
  v13 = 0LL;
  v14 = 0;
  v38 = &dispSelectList->m_Items[1];
  v41 = v12 - 1;
  v42 = this;
  v40 = mainInfo->fields.dispSelectList;
  v39 = ConvertOverwriteDispImageLimitCount;
  while ( 1 )
  {
    if ( (__int64)v13 >= (int)max_length )
      goto LABEL_18;
    if ( v13 >= max_length )
      sub_1B88814(ConvertOverwriteDispImageLimitCount, v6);
    v15 = v38[v13];
    if ( (v15 & 0x80000000) != 0 )
    {
LABEL_18:
      v16 = 0;
      v15 = v13;
    }
    else
    {
      v16 = 1;
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( v15 == (_DWORD)ConvertOverwriteDispImageLimitCount )
      v14 = v13;
    v44 = v13;
    if ( !itemList )
      goto LABEL_36;
    size = itemList->fields._size;
    v19 = v15 == (_DWORD)ConvertOverwriteDispImageLimitCount;
    SvtId = ServantStatusListViewItem__get_SvtId(mainInfo, 0LL);
    v21 = mainInfo;
    IsMine = ServantStatusListViewItem__get_IsMine(mainInfo, 0LL);
    v23 = (ServantStatusBattleListViewItem_o *)sub_1B887FC(ServantStatusBattleListViewItem_TypeInfo);
    ServantStatusBattleListViewItem___ctor(v23, size, SvtId, v15, v16 && v43, v16, v19, IsMine, v37);
    items = itemList->fields._items;
    v31 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++itemList->fields._version;
    if ( !items )
      goto LABEL_36;
    v32 = itemList->fields._size;
    if ( (unsigned int)v32 >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        itemList,
        (Il2CppObject *)v23,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
    }
    else
    {
      v33 = &items->obj.klass + v32;
      itemList->fields._size = v32 + 1;
      v33[4] = (Il2CppClass *)v23;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v33 + 4), (int32_t)v23, v24, v25, v26, v27, v28, v29, v37);
    }
    this = v42;
    if ( v41 == v44 )
      break;
    ConvertOverwriteDispImageLimitCount = v39;
    mainInfo = v21;
    v13 = v44 + 1;
    max_length = v40->max_length;
  }
  v34 = v42->fields.itemList;
  if ( !v34 || (scrollView = v42->fields.scrollView) == 0LL )
LABEL_36:
    sub_1B8880C(ConvertOverwriteDispImageLimitCount, v6);
  if ( v34->fields._size > 5 )
    v36 = 1;
  else
    v36 = 4;
  scrollView->fields.contentPivot = v36;
  ListViewManager__SortItem((ListViewManager_o *)v42, -1, 1, -1, 0LL);
  if ( v14 >= 5 )
    ListViewManager__MoveBottomItem((ListViewManager_o *)v42, v14, 0, 0LL);
}


void __fastcall ServantStatusBattleListViewManager__DestroyList(
        ServantStatusBattleListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


ServantStatusBattleListViewItem_o *__fastcall ServantStatusBattleListViewManager__GetItem(
        ServantStatusBattleListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A56CB3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_1B885B0(&ServantStatusBattleListViewItem_TypeInfo);
    byte_4A56CB3 = 1;
  }
  result = (ServantStatusBattleListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ServantStatusBattleListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)result,
                                                    index,
                                                    (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      methodPtr_low = LOBYTE(ServantStatusBattleListViewItem_TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
      {
        if ( (ServantStatusBattleListViewItem_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusBattleListViewItem_TypeInfo )
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


void __fastcall ServantStatusBattleListViewManager__OnClickListView(
        ServantStatusBattleListViewManager_o *this,
        ListViewObject_o *selectObj,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantStatusBattleListViewManager__OnClickListViewButton(
        ServantStatusBattleListViewManager_o *this,
        ListViewObject_o *selectObj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  ServantStatusBattleListViewManager_o *v5; // x20
  struct ListViewItem_o *linkItem; // x8
  __int64 methodPtr_low; // x11
  struct ServantStatusBattleListViewManager_CallbackFunc_o *callbackFunc; // x21
  unsigned int Index; // w0

  v5 = this;
  if ( (byte_4A56CB9 & 1) == 0 )
  {
    this = (ServantStatusBattleListViewManager_o *)sub_1B885B0(&ServantStatusBattleListViewItem_TypeInfo);
    byte_4A56CB9 = 1;
  }
  if ( !selectObj
    || (linkItem = selectObj->fields.linkItem) == 0LL
    || (methodPtr_low = LOBYTE(ServantStatusBattleListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantStatusBattleListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusBattleListViewItem_TypeInfo )
  {
    sub_1B8880C(this, selectObj);
  }
  if ( BYTE1(linkItem[1].fields.sortValue0) && LOBYTE(linkItem[1].fields.sortValue0) )
  {
    callbackFunc = v5->fields.callbackFunc;
    v5->fields.callbackFunc = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.callbackFunc, 0, (int32_t)method, v3);
    if ( callbackFunc )
    {
      Index = ListViewObject__get_Index(selectObj, 0LL);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callbackFunc->fields.m_target)(
        callbackFunc->fields.original_method_info,
        Index,
        *(_QWORD *)&callbackFunc->fields.extra_arg);
    }
  }
}


void __fastcall ServantStatusBattleListViewManager__OnMoveEnd(
        ServantStatusBattleListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  struct UIScrollView_o *v10; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4A56CB8 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56CB8 = 1;
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
          sub_1B8880C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
      if ( callbackFunc2 )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callbackFunc2->fields.m_target)(
          callbackFunc2->fields.original_method_info,
          *(_QWORD *)&callbackFunc2->fields.extra_arg);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusBattleListViewManager__RequestListObject(
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

  if ( (byte_4A56CB6 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__get_Count__);
    sub_1B885B0(&Method_ServantStatusBattleListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A56CB6 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusBattleListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B8880C(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v11 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_ServantStatusBattleListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v12, v13);
      ServantStatusBattleListViewObject__Init_31644196(
        (ServantStatusBattleListViewObject_o *)current,
        mode,
        v11,
        delay,
        v14);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusBattleListViewManager__RequestListObject_31643692(
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

  if ( (byte_4A56CB7 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__get_Count__);
    sub_1B885B0(&Method_ServantStatusBattleListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A56CB7 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusBattleListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B8880C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_ServantStatusBattleListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B8880C(v10, v11);
      ServantStatusBattleListViewObject__Init_31644804((ServantStatusBattleListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__Dispose__);
  }
}


void __fastcall ServantStatusBattleListViewManager__SetMode(
        ServantStatusBattleListViewManager_o *this,
        int32_t mode,
        ServantStatusBattleListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  this->fields.callbackFunc = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  ServantStatusBattleListViewManager__SetMode_31643180(this, mode, v6, v7);
}


void __fastcall ServantStatusBattleListViewManager__SetMode_31643180(
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

  if ( (byte_4A56CB5 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__get_Item__);
    sub_1B885B0(&Method_ServantStatusBattleListViewManager_OnMoveEnd__);
    sub_1B885B0(&StringLiteral_9935/*"OnMoveEnd"*/);
    byte_4A56CB5 = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 1, 0LL);
  if ( mode == 1 )
  {
    ServantStatusBattleListViewManager__RequestListObject_31643692(this, 3, v7);
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
                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__get_Item__);
        v14 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(v14, (Il2CppObject *)this, Method_ServantStatusBattleListViewManager_OnMoveEnd__, 0LL);
        if ( !Item )
          break;
        ServantStatusBattleListViewObject__Init_31644196((ServantStatusBattleListViewObject_o *)Item, 4, v14, 0.1, v15);
        if ( ++v12 >= v11->fields._size )
          return;
      }
LABEL_13:
      sub_1B8880C(ClippingObjectList, v9);
    }
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9935/*"OnMoveEnd"*/,
      0.2,
      0LL);
  }
}


void __fastcall ServantStatusBattleListViewManager__SetMode_31643640(
        ServantStatusBattleListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  this->fields.callbackFunc2 = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  ServantStatusBattleListViewManager__SetMode_31643180(this, mode, v6, v7);
}


void __fastcall ServantStatusBattleListViewManager__SetObjectItem(
        ServantStatusBattleListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  ServantStatusBattleListViewManager_o *v5; // x20
  __int64 methodPtr_low; // x10
  int32_t v7; // w1

  v5 = this;
  if ( (byte_4A56CB4 & 1) == 0 )
  {
    this = (ServantStatusBattleListViewManager_o *)sub_1B885B0(&ServantStatusBattleListViewObject_TypeInfo);
    byte_4A56CB4 = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ServantStatusBattleListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantStatusBattleListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusBattleListViewObject_TypeInfo )
  {
    sub_1B8880C(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  ServantStatusBattleListViewObject__Init_31643056(
    (ServantStatusBattleListViewObject_o *)obj,
    v7,
    (const MethodInfo *)item);
}


void __fastcall ServantStatusBattleListViewManager__add_callbackFunc(
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

  if ( (byte_4A56CAC & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusBattleListViewManager_CallbackFunc_TypeInfo);
    byte_4A56CAC = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (ServantStatusBattleListViewManager_CallbackFunc_c *)v7->klass != ServantStatusBattleListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusBattleListViewManager_o *)sub_1B88ACC(v7);
  ServantStatusBattleListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall ServantStatusBattleListViewManager__add_callbackFunc2(
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

  if ( (byte_4A56CAE & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A56CAE = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusBattleListViewManager_o *)sub_1B88ACC(v7);
  ServantStatusBattleListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_ServantStatusBattleListViewObject__o *__fastcall ServantStatusBattleListViewManager__get_ClippingObjectList(
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
  int32_t v15; // w3
  bool v16; // w4
  bool v17; // w5
  bool v18; // w6
  bool v19; // w7
  _BOOL8 v20; // x0
  __int64 v21; // x1
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  const MethodInfo *v27; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A56CB1 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusBattleListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantStatusBattleListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56CB1 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantStatusBattleListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantStatusBattleListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusBattleListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1B8880C(0LL, v10);
      Item = (ListViewItem_o *)ServantStatusBattleListViewObject__GetItem(
                                 (ServantStatusBattleListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1B8880C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_40722428((ListViewManager_o *)this, Item, 0LL);
        if ( v20 )
        {
          if ( !v3 )
            sub_1B8880C(v20, v21);
          items = v3->fields._items;
          v23 = Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1B8880C(v20, v21);
          size = v3->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1B8880C(Item, v13);
        items = v3->fields._items;
        v23 = Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1B8880C(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v25 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v11;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v11, v14, v15, v16, v17, v18, v19, v27);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusBattleListViewObject__o *)v3;
}


System_Collections_Generic_List_ServantStatusBattleListViewObject__o *__fastcall ServantStatusBattleListViewManager__get_ObjectList(
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
  int32_t v11; // w3
  bool v12; // w4
  bool v13; // w5
  bool v14; // w6
  bool v15; // w7
  Il2CppObject *v16; // x1
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  const MethodInfo *v22; // [xsp+0h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A56CB0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusBattleListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantStatusBattleListViewObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A56CB0 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantStatusBattleListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantStatusBattleListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B8880C(0LL, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_1B8880C(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusBattleListViewObject___);
      v16 = Component_object;
      if ( !v3 )
        sub_1B8880C(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1B8880C(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v16, v10, v11, v12, v13, v14, v15, v22);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusBattleListViewObject__o *)v3;
}


void __fastcall ServantStatusBattleListViewManager__remove_callbackFunc(
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

  if ( (byte_4A56CAD & 1) == 0 )
  {
    sub_1B885B0(&ServantStatusBattleListViewManager_CallbackFunc_TypeInfo);
    byte_4A56CAD = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (ServantStatusBattleListViewManager_CallbackFunc_c *)v7->klass != ServantStatusBattleListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1BC3AA0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusBattleListViewManager_o *)sub_1B88ACC(v7);
  ServantStatusBattleListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall ServantStatusBattleListViewManager__remove_callbackFunc2(
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

  if ( (byte_4A56CAF & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A56CAF = 1;
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
    v8 = sub_1BC3AA0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusBattleListViewManager_o *)sub_1B88ACC(v7);
  ServantStatusBattleListViewManager__get_ObjectList(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusBattleListViewManager_CallbackFunc___ctor(
        ServantStatusBattleListViewManager_CallbackFunc_o *this,
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
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19C8354;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C830C;
}


System_IAsyncResult_o *__fastcall ServantStatusBattleListViewManager_CallbackFunc__BeginInvoke(
        ServantStatusBattleListViewManager_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4A56CBB & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    byte_4A56CBB = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall ServantStatusBattleListViewManager_CallbackFunc__EndInvoke(
        ServantStatusBattleListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall ServantStatusBattleListViewManager_CallbackFunc__Invoke(
        ServantStatusBattleListViewManager_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}