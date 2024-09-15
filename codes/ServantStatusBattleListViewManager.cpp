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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v14; // x20
  int32_t v15; // w21
  const MethodInfo *v16; // x2
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A29BA5 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, *(_QWORD *)&index);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__get_Count__, v8);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__get_Item__, v9);
    byte_4A29BA5 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    itemList,
    (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v17,
            (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
  {
    if ( !v17.fields._current )
      sub_1B7641C(0LL, v11);
    ListViewItem__set_IsSelect(
      (ListViewItem_o *)v17.fields._current,
      HIDWORD(v17.fields._current[1].klass) == index,
      0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  itemList = (System_Collections_Generic_List_object__o *)ServantStatusBattleListViewManager__get_ObjectList(this, v12);
  if ( !itemList )
    goto LABEL_15;
  size = itemList->fields._size;
  v14 = itemList;
  if ( size >= 1 )
  {
    v15 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                v14,
                                                                v15,
                                                                (const MethodInfo_34D7304 *)Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__get_Item__);
      if ( !itemList )
        break;
      ServantStatusBattleListViewObject__Init_31564656((ServantStatusBattleListViewObject_o *)itemList, 4, v16);
      if ( ++v15 >= v14->fields._size )
        return;
    }
LABEL_15:
    sub_1B7641C(itemList, *(_QWORD *)&index);
  }
}


void __fastcall ServantStatusBattleListViewManager__CreateList(
        ServantStatusBattleListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        const MethodInfo *method)
{
  ServantStatusListViewItem_o *v3; // x26
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 ConvertOverwriteDispImageLimitCount; // x0
  __int64 v8; // x1
  struct System_Int32_array *dispSelectList; // x11
  __int64 v10; // x9
  il2cpp_array_size_t max_length; // w8
  bool v12; // w10
  bool v13; // cc
  __int64 v14; // x9
  unsigned __int64 v15; // x10
  int32_t v16; // w22
  int32_t v17; // w25
  bool v18; // w24
  System_Collections_Generic_List_object__o *itemList; // x23
  int32_t size; // w27
  bool v21; // w28
  int32_t SvtId; // w19
  ServantStatusListViewItem_o *v23; // x21
  bool IsMine; // w20
  ServantStatusBattleListViewItem_o *v25; // x26
  int32_t v26; // w2
  int32_t v27; // w3
  bool v28; // w4
  bool v29; // w5
  bool v30; // w6
  bool v31; // w7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  Il2CppClass **v35; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v36; // x8
  struct UIScrollView_o *scrollView; // x9
  int v38; // w8
  const MethodInfo *v39; // [xsp+0h] [xbp-A0h]
  int32_t *v40; // [xsp+8h] [xbp-98h]
  unsigned int v41; // [xsp+14h] [xbp-8Ch]
  struct System_Int32_array *v42; // [xsp+18h] [xbp-88h]
  __int64 v43; // [xsp+20h] [xbp-80h]
  ServantStatusBattleListViewManager_o *v44; // [xsp+28h] [xbp-78h]
  bool v45; // [xsp+34h] [xbp-6Ch]
  unsigned __int64 v46; // [xsp+38h] [xbp-68h]

  v3 = mainInfo;
  if ( (byte_4A29B9D & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_ListViewItem__Add__, mainInfo);
    sub_1B761C0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_1B761C0(&ServantStatusBattleListViewItem_TypeInfo, v6);
    byte_4A29B9D = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  if ( !v3 )
    goto LABEL_36;
  ConvertOverwriteDispImageLimitCount = ServantStatusListViewItem__get_ConvertOverwriteDispImageLimitCount(v3, 0LL);
  dispSelectList = v3->fields.dispSelectList;
  if ( !dispSelectList )
    goto LABEL_36;
  v10 = *(_QWORD *)&dispSelectList->max_length;
  max_length = v10;
  if ( v3->fields.isConvertOverwriteImage )
  {
    v45 = 0;
  }
  else
  {
    if ( v3->fields.userSvtEntity )
      v12 = 1;
    else
      v12 = v3->fields.userSvtCollectionEntity != 0LL;
    v45 = v12;
  }
  v13 = (int)v10 <= 3;
  v14 = 3LL;
  if ( !v13 )
    v14 = (unsigned int)*(_QWORD *)&dispSelectList->max_length;
  v15 = 0LL;
  v16 = 0;
  v40 = &dispSelectList->m_Items[1];
  v43 = v14 - 1;
  v44 = this;
  v42 = v3->fields.dispSelectList;
  v41 = ConvertOverwriteDispImageLimitCount;
  while ( 1 )
  {
    if ( (__int64)v15 >= (int)max_length )
      goto LABEL_18;
    if ( v15 >= max_length )
      sub_1B76424(ConvertOverwriteDispImageLimitCount, v8);
    v17 = v40[v15];
    if ( (v17 & 0x80000000) != 0 )
    {
LABEL_18:
      v18 = 0;
      v17 = v15;
    }
    else
    {
      v18 = 1;
    }
    itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
    if ( v17 == (_DWORD)ConvertOverwriteDispImageLimitCount )
      v16 = v15;
    v46 = v15;
    if ( !itemList )
      goto LABEL_36;
    size = itemList->fields._size;
    v21 = v17 == (_DWORD)ConvertOverwriteDispImageLimitCount;
    SvtId = ServantStatusListViewItem__get_SvtId(v3, 0LL);
    v23 = v3;
    IsMine = ServantStatusListViewItem__get_IsMine(v3, 0LL);
    v25 = (ServantStatusBattleListViewItem_o *)sub_1B7640C(ServantStatusBattleListViewItem_TypeInfo);
    ServantStatusBattleListViewItem___ctor(v25, size, SvtId, v17, v18 && v45, v18, v21, IsMine, v39);
    items = itemList->fields._items;
    v33 = Method_System_Collections_Generic_List_ListViewItem__Add__;
    ++itemList->fields._version;
    if ( !items )
      goto LABEL_36;
    v34 = itemList->fields._size;
    if ( (unsigned int)v34 >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        itemList,
        (Il2CppObject *)v25,
        *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    }
    else
    {
      v35 = &items->obj.klass + v34;
      itemList->fields._size = v34 + 1;
      v35[4] = (Il2CppClass *)v25;
      sub_1B76164((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)v25, v26, v27, v28, v29, v30, v31, v39);
    }
    this = v44;
    if ( v43 == v46 )
      break;
    ConvertOverwriteDispImageLimitCount = v41;
    v3 = v23;
    v15 = v46 + 1;
    max_length = v42->max_length;
  }
  v36 = v44->fields.itemList;
  if ( !v36 || (scrollView = v44->fields.scrollView) == 0LL )
LABEL_36:
    sub_1B7641C(ConvertOverwriteDispImageLimitCount, v8);
  if ( v36->fields._size > 5 )
    v38 = 1;
  else
    v38 = 4;
  scrollView->fields.contentPivot = v38;
  ListViewManager__SortItem((ListViewManager_o *)v44, -1, 1, -1, 0LL);
  if ( v16 >= 5 )
    ListViewManager__MoveBottomItem((ListViewManager_o *)v44, v16, 0, 0LL);
}


void __fastcall ServantStatusBattleListViewManager__DestroyList(
        ServantStatusBattleListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
ServantStatusBattleListViewItem_o *__fastcall ServantStatusBattleListViewManager__GetItem(
        ServantStatusBattleListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ServantStatusBattleListViewItem_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A29B9E & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, *(_QWORD *)&index);
    sub_1B761C0(&ServantStatusBattleListViewItem_TypeInfo, v5);
    byte_4A29B9E = 1;
  }
  result = (ServantStatusBattleListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (ServantStatusBattleListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                                    (System_Collections_Generic_List_object__o *)result,
                                                    index,
                                                    (const MethodInfo_34D7304 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
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
  if ( (byte_4A29BA4 & 1) == 0 )
  {
    this = (ServantStatusBattleListViewManager_o *)sub_1B761C0(&ServantStatusBattleListViewItem_TypeInfo, selectObj);
    byte_4A29BA4 = 1;
  }
  if ( !selectObj
    || (linkItem = selectObj->fields.linkItem) == 0LL
    || (methodPtr_low = LOBYTE(ServantStatusBattleListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(linkItem->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantStatusBattleListViewItem_c *)linkItem->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusBattleListViewItem_TypeInfo )
  {
    sub_1B7641C(this, selectObj);
  }
  if ( BYTE1(linkItem[1].fields.sortValue0) && LOBYTE(linkItem[1].fields.sortValue0) )
  {
    callbackFunc = v5->fields.callbackFunc;
    v5->fields.callbackFunc = 0LL;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&v5->fields.callbackFunc, 0, (int32_t)method, v3);
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

  if ( (byte_4A29BA3 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Object_TypeInfo, method);
    byte_4A29BA3 = 1;
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
          sub_1B7641C(0LL, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
          v10,
          1LL,
          v10->klass->vtable._9_SetDragAmount.methodPtr);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2, 0, v8, v9);
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
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A29BA1 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__Dispose__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__MoveNext__, v8);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__get_Current__, v9);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__GetEnumerator__, v10);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__get_Count__, v11);
    sub_1B761C0(&Method_ServantStatusBattleListViewManager_OnMoveEnd__, v12);
    sub_1B761C0(&StringLiteral_9932/*"OnMoveEnd"*/, v13);
    byte_4A29BA1 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusBattleListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B7641C(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9932/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      ObjectList,
      (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__MoveNext__) )
    {
      current = v22.fields._current;
      v18 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_ServantStatusBattleListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B7641C(v19, v20);
      ServantStatusBattleListViewObject__Init_31565796(
        (ServantStatusBattleListViewObject_o *)current,
        mode,
        v18,
        delay,
        v21);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusBattleListViewManager__RequestListObject_31565292(
        ServantStatusBattleListViewManager_o *this,
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
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A29BA2 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__Dispose__, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__MoveNext__, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__get_Current__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__GetEnumerator__, v8);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__get_Count__, v9);
    sub_1B761C0(&Method_ServantStatusBattleListViewManager_OnMoveEnd__, v10);
    sub_1B761C0(&StringLiteral_9932/*"OnMoveEnd"*/, v11);
    byte_4A29BA2 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusBattleListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1B7641C(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9932/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v20,
      ObjectList,
      (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__MoveNext__) )
    {
      current = v20.fields._current;
      v16 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_ServantStatusBattleListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_1B7641C(v17, v18);
      ServantStatusBattleListViewObject__Init_31566404((ServantStatusBattleListViewObject_o *)current, mode, v16, v19);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__Dispose__);
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
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  ServantStatusBattleListViewManager__SetMode_31564780(this, mode, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusBattleListViewManager__SetMode_31564780(
        ServantStatusBattleListViewManager_o *this,
        int32_t mode,
        int32_t select,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  System_Collections_Generic_List_ServantStatusBattleListViewObject__o *ClippingObjectList; // x0
  __int64 v13; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v15; // x20
  int32_t v16; // w21
  Il2CppObject *Item; // x22
  System_Action_o *v18; // x23
  const MethodInfo *v19; // x3

  if ( (byte_4A29BA0 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__get_Count__, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__get_Item__, v7);
    sub_1B761C0(&Method_ServantStatusBattleListViewManager_OnMoveEnd__, v8);
    sub_1B761C0(&StringLiteral_9932/*"OnMoveEnd"*/, v9);
    byte_4A29BA0 = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 1, 0LL);
  if ( mode == 1 )
  {
    ServantStatusBattleListViewManager__RequestListObject_31565292(this, 3, v11);
    return;
  }
  if ( mode == 2 )
  {
    ClippingObjectList = ServantStatusBattleListViewManager__get_ClippingObjectList(this, v10);
    if ( !ClippingObjectList )
      goto LABEL_13;
    size = ClippingObjectList->fields._size;
    v15 = (System_Collections_Generic_List_object__o *)ClippingObjectList;
    if ( size >= 1 )
    {
      this->fields.callbackCount = size;
      v16 = 0;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v15,
                 v16,
                 (const MethodInfo_34D7304 *)Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__get_Item__);
        v18 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
        System_Action___ctor(v18, (Il2CppObject *)this, Method_ServantStatusBattleListViewManager_OnMoveEnd__, 0LL);
        if ( !Item )
          break;
        ServantStatusBattleListViewObject__Init_31565796((ServantStatusBattleListViewObject_o *)Item, 4, v18, 0.1, v19);
        if ( ++v16 >= v15->fields._size )
          return;
      }
LABEL_13:
      sub_1B7641C(ClippingObjectList, v13);
    }
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_9932/*"OnMoveEnd"*/,
      0.2,
      0LL);
  }
}


void __fastcall ServantStatusBattleListViewManager__SetMode_31565240(
        ServantStatusBattleListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  this->fields.callbackFunc2 = callback;
  sub_1B76164(
    (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  ServantStatusBattleListViewManager__SetMode_31564780(this, mode, v6, v7);
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
  if ( (byte_4A29B9F & 1) == 0 )
  {
    this = (ServantStatusBattleListViewManager_o *)sub_1B761C0(&ServantStatusBattleListViewObject_TypeInfo, obj);
    byte_4A29B9F = 1;
  }
  if ( !obj
    || (methodPtr_low = LOBYTE(ServantStatusBattleListViewObject_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(obj->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low)
    || (ServantStatusBattleListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != ServantStatusBattleListViewObject_TypeInfo )
  {
    sub_1B7641C(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  ServantStatusBattleListViewObject__Init_31564656(
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

  if ( (byte_4A29B97 & 1) == 0 )
  {
    sub_1B761C0(&ServantStatusBattleListViewManager_CallbackFunc_TypeInfo, value);
    byte_4A29B97 = 1;
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
    v8 = sub_1BB16B0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusBattleListViewManager_o *)sub_1B766DC(v7);
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

  if ( (byte_4A29B99 & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, value);
    byte_4A29B99 = 1;
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
    v8 = sub_1BB16B0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusBattleListViewManager_o *)sub_1B766DC(v7);
  ServantStatusBattleListViewManager__remove_callbackFunc2(v10, v11, v12);
}


System_Collections_Generic_List_ServantStatusBattleListViewObject__o *__fastcall ServantStatusBattleListViewManager__get_ClippingObjectList(
        ServantStatusBattleListViewManager_o *this,
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
  const MethodInfo *v18; // x1
  Il2CppObject *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  bool v24; // w4
  bool v25; // w5
  bool v26; // w6
  bool v27; // w7
  _BOOL8 v28; // x0
  __int64 v29; // x1
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  const MethodInfo *v35; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A29B9C & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusBattleListViewObject___, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__Add__, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject___ctor__, v8);
    sub_1B761C0(&System_Collections_Generic_List_ServantStatusBattleListViewObject__TypeInfo, v9);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v10);
    byte_4A29B9C = 1;
  }
  memset(&v37, 0, sizeof(v37));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_ServantStatusBattleListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_ServantStatusBattleListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B7641C(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v37 = v36;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v37,
            (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v37.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B7641C(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusBattleListViewObject___);
      v19 = Component_object;
      if ( !Component_object )
        sub_1B7641C(0LL, v18);
      Item = (ListViewItem_o *)ServantStatusBattleListViewObject__GetItem(
                                 (ServantStatusBattleListViewObject_o *)Component_object,
                                 v18);
      if ( !Item )
        sub_1B7641C(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v28 = ListViewManager__ClippingItem_40537020((ListViewManager_o *)this, Item, 0LL);
        if ( v28 )
        {
          if ( !v11 )
            sub_1B7641C(v28, v29);
          items = v11->fields._items;
          v31 = Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__Add__;
          ++v11->fields._version;
          if ( !items )
            sub_1B7641C(v28, v29);
          size = v11->fields._size;
          if ( (unsigned int)size < items->max_length )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            v19,
            *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v11 )
          sub_1B7641C(Item, v21);
        items = v11->fields._items;
        v31 = Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__Add__;
        ++v11->fields._version;
        if ( !items )
          sub_1B7641C(Item, v21);
        size = v11->fields._size;
        if ( (unsigned int)size >= items->max_length )
          goto LABEL_21;
LABEL_17:
        v33 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v33[4] = (Il2CppClass *)v19;
        sub_1B76164((ServantStatusBattleListViewItem_o *)(v33 + 4), (int32_t)v19, v22, v23, v24, v25, v26, v27, v35);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v37,
    (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusBattleListViewObject__o *)v11;
}


System_Collections_Generic_List_ServantStatusBattleListViewObject__o *__fastcall ServantStatusBattleListViewManager__get_ObjectList(
        ServantStatusBattleListViewManager_o *this,
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
  int32_t v19; // w3
  bool v20; // w4
  bool v21; // w5
  bool v22; // w6
  bool v23; // w7
  Il2CppObject *v24; // x1
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  const MethodInfo *v30; // [xsp+0h] [xbp-80h]
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A29B9B & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_ServantStatusBattleListViewObject___, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__Add__, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject___ctor__, v8);
    sub_1B761C0(&System_Collections_Generic_List_ServantStatusBattleListViewObject__TypeInfo, v9);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v10);
    byte_4A29B9B = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v11 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_ServantStatusBattleListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_ServantStatusBattleListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1B7641C(0LL, v12);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v32 = v31;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v32.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_1B7641C(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusBattleListViewObject___);
      v24 = Component_object;
      if ( !v11 )
        sub_1B7641C(Component_object, Component_object);
      items = v11->fields._items;
      v26 = Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__Add__;
      ++v11->fields._version;
      if ( !items )
        sub_1B7641C(Component_object, Component_object);
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v11,
          Component_object,
          *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + size;
        v11->fields._size = size + 1;
        v28[4] = (Il2CppClass *)v24;
        sub_1B76164((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)v24, v18, v19, v20, v21, v22, v23, v30);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusBattleListViewObject__o *)v11;
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

  if ( (byte_4A29B98 & 1) == 0 )
  {
    sub_1B761C0(&ServantStatusBattleListViewManager_CallbackFunc_TypeInfo, value);
    byte_4A29B98 = 1;
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
    v8 = sub_1BB16B0(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusBattleListViewManager_o *)sub_1B766DC(v7);
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

  if ( (byte_4A29B9A & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, value);
    byte_4A29B9A = 1;
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
    v8 = sub_1BB16B0(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusBattleListViewManager_o *)sub_1B766DC(v7);
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
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B76280(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B76438(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B762E8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19B73C0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19B7378;
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4A29BA6 & 1) == 0 )
  {
    sub_1B761C0(&int_TypeInfo, *(_QWORD *)&result);
    byte_4A29BA6 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B76174(this, v9, callback, object);
}


void __fastcall ServantStatusBattleListViewManager_CallbackFunc__EndInvoke(
        ServantStatusBattleListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B76178(result, 0LL, method);
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