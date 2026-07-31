void ServantStatusBattleListViewManager___ctor(ServantStatusBattleListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ServantStatusBattleListViewManager__ChangeSelect(
        ServantStatusBattleListViewManager_o *this,
        int32_t limitCountStage,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemList; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  Il2CppObject *current; // x21
  __int64 naturalAligment; // x9
  bool v12; // w1
  const MethodInfo *v13; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v15; // x20
  int32_t v16; // w21
  const MethodInfo *v17; // x2
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_59339A1 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__get_Item__);
    sub_21FFC50(&ServantStatusBattleListViewItem_TypeInfo);
    byte_59339A1 = 1;
  }
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  memset(&v19, 0, sizeof(v19));
  if ( !itemList )
    goto LABEL_18;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    itemList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v19 = v18;
  v18.fields._list = 0;
  *(_QWORD *)&v18.fields._index = &v19;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v19,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v6 & 1) == 0 )
      break;
    current = v19.fields._current;
    if ( !v19.fields._current )
      goto LABEL_17;
    naturalAligment = ServantStatusBattleListViewItem_TypeInfo->_2.naturalAligment;
    if ( v19.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (ServantStatusBattleListViewItem_c *)v19.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusBattleListViewItem_TypeInfo )
    {
      v6 = sub_220024C(v19.fields._current, ServantStatusBattleListViewItem_TypeInfo, v8, v9);
LABEL_17:
      sub_21FFECC(v6, v7);
    }
    v12 = ServantStatusBattleListViewItem__get_LimitCountStage(
            (ServantStatusBattleListViewItem_o *)v19.fields._current,
            (const MethodInfo *)ServantStatusBattleListViewItem_TypeInfo) == limitCountStage;
    ListViewItem__set_IsSelect((ListViewItem_o *)current, v12, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  itemList = (System_Collections_Generic_List_object__o *)ServantStatusBattleListViewManager__get_ObjectList(this, v13);
  if ( !itemList )
LABEL_18:
    sub_21FFECC(itemList, *(_QWORD *)&limitCountStage);
  size = itemList->fields._size;
  v15 = itemList;
  if ( size > 0 )
  {
    v16 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                v15,
                                                                v16,
                                                                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__get_Item__);
      if ( !itemList )
        break;
      ServantStatusBattleListViewObject__Init_40401496((ServantStatusBattleListViewObject_o *)itemList, 4, v17);
      if ( ++v16 >= v15->fields._size )
        return;
    }
    goto LABEL_18;
  }
}


void ServantStatusBattleListViewManager__CreateList(
        ServantStatusBattleListViewManager_o *this,
        ServantStatusListViewItem_o *mainInfo,
        const MethodInfo *method)
{
  char *DispLimitCountStageList; // x0
  __int64 v6; // x1
  int32_t DispLimitCountStage; // w22
  char *v8; // x25
  __int64 v9; // x19
  __int64 v10; // x2
  bool v11; // w8
  unsigned __int64 v12; // x23
  int32_t v13; // w28
  bool v14; // w9
  int v15; // w20
  int32_t v16; // w19
  int32_t LimitCount; // w0
  System_Collections_Generic_List_object__o *itemList; // x27
  int32_t size; // w24
  ServantStatusBattleListViewManager_o *v20; // x26
  int32_t v21; // w25
  bool v22; // w21
  ServantStatusListViewItem_o *v23; // x22
  bool IsMine; // w20
  ServantStatusBattleListViewItem_o *v25; // x29
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  Il2CppClass **v35; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v36; // x8
  int v37; // w9
  struct UIScrollView_o *scrollView; // x8
  const MethodInfo *v39; // [xsp+8h] [xbp-98h]
  __int64 v40; // [xsp+10h] [xbp-90h]
  char *v41; // [xsp+18h] [xbp-88h]
  char *v42; // [xsp+20h] [xbp-80h]
  bool v43; // [xsp+2Ch] [xbp-74h]
  int32_t svtId; // [xsp+30h] [xbp-70h]
  bool v45; // [xsp+34h] [xbp-6Ch]
  char v46; // [xsp+38h] [xbp-68h]
  bool v47; // [xsp+3Ch] [xbp-64h]

  if ( (byte_593399B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&ServantStatusBattleListViewItem_TypeInfo);
    byte_593399B = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  this->fields.lateUpdateCenter = 0;
  if ( !mainInfo )
    goto LABEL_45;
  svtId = ServantStatusListViewItem__GetSvtId(mainInfo, 0, 0);
  DispLimitCountStage = ServantStatusListViewItem__GetDispLimitCountStage(mainInfo, 0, 0);
  DispLimitCountStageList = (char *)ServantStatusListViewItem__GetDispLimitCountStageList(mainInfo, 0);
  if ( !DispLimitCountStageList )
    goto LABEL_45;
  v8 = DispLimitCountStageList;
  v9 = *((_QWORD *)DispLimitCountStageList + 3);
  DispLimitCountStageList = (char *)ServantStatusListViewItem__get_IsConvertOverwriteImage(mainInfo, 0);
  if ( ((unsigned __int8)DispLimitCountStageList & 1) != 0 )
  {
    v43 = 0;
  }
  else
  {
    if ( mainInfo->fields.userSvtEntity )
      v11 = 1;
    else
      v11 = mainInfo->fields.userSvtCollectionEntity != 0;
    v43 = v11;
  }
  if ( (int)v9 >= 1 )
  {
    v12 = 0;
    v13 = 0;
    v40 = (unsigned int)v9;
    v41 = v8;
    v42 = v8 + 32;
    while ( 1 )
    {
      if ( v12 >= *((unsigned int *)v8 + 6) )
        sub_21FFED4(DispLimitCountStageList);
      v14 = v43;
      v15 = *(_DWORD *)&v42[4 * v12];
      if ( v15 <= 0 )
        v14 = 0;
      v47 = v14;
      if ( !byte_5932DF6 )
      {
        sub_21FFC50(&System_Math_TypeInfo);
        byte_5932DF6 = 1;
      }
      DispLimitCountStageList = (char *)System_Math_TypeInfo;
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v6, v10);
      if ( v15 >= 0 )
        v16 = v15;
      else
        v16 = -v15;
      if ( v15 < 1 )
      {
        v46 = 0;
      }
      else
      {
        LimitCount = ServantStatusListViewItem__get_LimitCount(mainInfo, 0);
        DispLimitCountStageList = (char *)LimitCountUtility__IsSealed(svtId, LimitCount, v16, 0, 0);
        v46 = (char)DispLimitCountStageList;
      }
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( DispLimitCountStage == v15 )
        v13 = v12;
      if ( !itemList )
        goto LABEL_45;
      size = itemList->fields._size;
      v20 = this;
      v21 = DispLimitCountStage;
      v45 = DispLimitCountStage == v15;
      v22 = v15 > 0;
      v23 = mainInfo;
      IsMine = ServantStatusListViewItem__get_IsMine(mainInfo, 0);
      v25 = (ServantStatusBattleListViewItem_o *)sub_21FFEBC(ServantStatusBattleListViewItem_TypeInfo);
      ServantStatusBattleListViewItem___ctor(v25, size, svtId, v16, v47, v22, v45, IsMine, v46 & 1, v39);
      items = itemList->fields._items;
      v33 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        goto LABEL_45;
      v34 = itemList->fields._size;
      if ( (unsigned int)v34 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v25,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &items->obj.klass + v34;
        itemList->fields._size = v34 + 1;
        v35[4] = (Il2CppClass *)v25;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v35 + 4), (int32_t)v25, v26, v27, v28, v29, v30, v31);
      }
      ++v12;
      mainInfo = v23;
      DispLimitCountStage = v21;
      v8 = v41;
      this = v20;
      if ( v40 == v12 )
        goto LABEL_36;
    }
  }
  v13 = 0;
LABEL_36:
  v36 = this->fields.itemList;
  if ( !v36 )
LABEL_45:
    sub_21FFECC(DispLimitCountStageList, v6);
  v37 = v36->fields._size;
  scrollView = this->fields.scrollView;
  if ( v37 <= 5 )
  {
    if ( !scrollView )
      goto LABEL_45;
    scrollView->fields.contentPivot = 4;
    this->fields.lateUpdateCenter = 1;
  }
  else
  {
    if ( !scrollView )
      goto LABEL_45;
    scrollView->fields.contentPivot = 1;
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 1, -1, 0);
  if ( v13 >= 5 )
    ListViewManager__MoveBottomItem((ListViewManager_o *)this, v13, 0, 0);
}


void ServantStatusBattleListViewManager__LateUpdate(
        ServantStatusBattleListViewManager_o *this,
        const MethodInfo *method)
{
  UIScrollView_o *scrollView; // x0
  struct UIScrollView_o *v4; // x8
  float v5; // s8
  __int64 v6; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Vector2_o v7; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4

  if ( this->fields.lateUpdateCenter )
  {
    scrollView = this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_10;
    UIScrollView__InvalidateBounds(scrollView, 0);
    scrollView = this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_10;
    scrollView = (UIScrollView_o *)((UIScrollView_o *(__fastcall *)(__int64 *__return_ptr, UIScrollView_o *, const MethodInfo *))scrollView->klass->vtable._4_get_bounds.methodPtr)(
                                     &v6,
                                     scrollView,
                                     scrollView->klass->vtable._4_get_bounds.method);
    v4 = this->fields.scrollView;
    if ( !v4
      || (scrollView = (UIScrollView_o *)v4->fields.mPanel) == 0
      || (v5 = *((float *)&v6 + 1),
          v7.fields.x = 0.0,
          v7.fields.y = *((float *)&v6 + 1),
          UIPanel__set_clipOffset((UIPanel_o *)scrollView, v7, 0),
          (scrollView = this->fields.scrollView) == 0)
      || (scrollView = (UIScrollView_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0)) == 0 )
    {
LABEL_10:
      sub_21FFECC(scrollView, method);
    }
    v8.fields.y = -v5;
    v8.fields.x = 0.0;
    v8.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)scrollView, v8, 0);
  }
  this->fields.lateUpdateCenter = 0;
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  ServantStatusBattleListViewManager_o *v9; // x20
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ServantStatusBattleListViewManager_CallbackFunc_o *callbackFunc; // x21
  __int64 Index; // x1

  v9 = this;
  if ( (byte_59339A0 & 1) == 0 )
  {
    this = (ServantStatusBattleListViewManager_o *)sub_21FFC50(&ServantStatusBattleListViewItem_TypeInfo);
    byte_59339A0 = 1;
  }
  if ( !selectObj
    || (linkItem = selectObj->fields.linkItem) == 0
    || (naturalAligment = ServantStatusBattleListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ServantStatusBattleListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusBattleListViewItem_TypeInfo )
  {
    sub_21FFECC(this, selectObj);
  }
  if ( BYTE1(linkItem[1].fields.selectNum) && LOBYTE(linkItem[1].fields.selectNum) )
  {
    callbackFunc = v9->fields.callbackFunc;
    v9->fields.callbackFunc = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v9->fields.callbackFunc,
      0,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    if ( callbackFunc )
    {
      Index = (unsigned int)ListViewObject__get_Index(selectObj, 0);
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
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
  __int64 v2; // x2
  int32_t callbackCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct UIScrollView_o *v15; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_593399F & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593399F = 1;
  }
  callbackCount = this->fields.callbackCount;
  v5 = __OFSUB__(callbackCount, 1);
  v6 = callbackCount - 1;
  if ( v6 < 0 == v5 )
  {
    this->fields.callbackCount = v6;
    if ( !v6 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        v15 = this->fields.scrollView;
        if ( !v15 )
          sub_21FFECC(0, v8);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v15->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v15,
          1,
          v15->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2, 0, v9, v10, v11, v12, v13, v14);
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
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  const MethodInfo_4450604 *v8; // x1
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  __int64 v14; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v15; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_593399E & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__get_Count__);
    sub_21FFC50(&Method_ServantStatusBattleListViewManager_OnMoveEnd__);
    sub_21FFC50(&StringLiteral_10331/*"OnMoveEnd"*/);
    byte_593399E = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusBattleListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_21FFECC(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10331/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    v8 = (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      ObjectList,
      v8);
    v14 = 0;
    v15 = &v16;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__MoveNext__) )
    {
      current = v16.fields._current;
      v10 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_ServantStatusBattleListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_21FFECC(v11, v12);
      ServantStatusBattleListViewObject__Init_40402656((ServantStatusBattleListViewObject_o *)current, mode, v10, v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__Dispose__);
  }
}


void ServantStatusBattleListViewManager__SetMode(
        ServantStatusBattleListViewManager_o *this,
        int32_t mode,
        ServantStatusBattleListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  this->fields.callbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusBattleListViewManager__SetMode_40401620(this, mode, v10, v11);
}


void ServantStatusBattleListViewManager__SetMode_40401620(
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
  System_String_o *v16; // x1

  if ( (byte_593399D & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__get_Item__);
    sub_21FFC50(&Method_ServantStatusBattleListViewManager_OnMoveEnd__);
    sub_21FFC50(&StringLiteral_10331/*"OnMoveEnd"*/);
    byte_593399D = 1;
  }
  this->fields.initMode = mode;
  this->fields.callbackCount = ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0);
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 1, 0);
  if ( mode == 1 )
  {
    ServantStatusBattleListViewManager__RequestListObject(this, 3, v7);
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
      v12 = 0;
      this->fields.callbackCount = size;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v11,
                 v12,
                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__get_Item__);
        v14 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
        System_Action___ctor(v14, (Il2CppObject *)this, Method_ServantStatusBattleListViewManager_OnMoveEnd__, 0);
        if ( !Item )
          break;
        ServantStatusBattleListViewObject__Init_40402572((ServantStatusBattleListViewObject_o *)Item, 4, v14, 0.1, v15);
        if ( ++v12 >= v11->fields._size )
          return;
      }
LABEL_13:
      sub_21FFECC(ClippingObjectList, v9);
    }
    v16 = (System_String_o *)StringLiteral_10331/*"OnMoveEnd"*/;
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, v16, 0.2, 0);
  }
}


void ServantStatusBattleListViewManager__SetObjectItem(
        ServantStatusBattleListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10
  ListViewObject_o *v7; // x0
  int32_t v8; // w1

  if ( (byte_593399C & 1) == 0 )
  {
    sub_21FFC50(&ServantStatusBattleListViewObject_TypeInfo);
    byte_593399C = 1;
  }
  if ( obj
    && (naturalAligment = ServantStatusBattleListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (ServantStatusBattleListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] == ServantStatusBattleListViewObject_TypeInfo )
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
    sub_21FFECC(v7, obj);
  }
  if ( !v7 )
    goto LABEL_15;
  v8 = 3;
LABEL_14:
  ServantStatusBattleListViewObject__Init_40401496(
    (ServantStatusBattleListViewObject_o *)v7,
    v8,
    (const MethodInfo *)item);
}


void ServantStatusBattleListViewManager__add_callbackFunc(
        ServantStatusBattleListViewManager_o *this,
        ServantStatusBattleListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusBattleListViewManager_o *v11; // x0
  ServantStatusBattleListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_5933995 & 1) == 0 )
  {
    sub_21FFC50(&ServantStatusBattleListViewManager_CallbackFunc_TypeInfo);
    byte_5933995 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (ServantStatusBattleListViewManager_CallbackFunc_c *)v6->klass != ServantStatusBattleListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantStatusBattleListViewManager_o *)sub_220024C(
                                                  v6,
                                                  ServantStatusBattleListViewManager_CallbackFunc_TypeInfo,
                                                  v7,
                                                  v8);
  ServantStatusBattleListViewManager__remove_callbackFunc(v11, v12, v13);
}


void ServantStatusBattleListViewManager__add_callbackFunc2(
        ServantStatusBattleListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusBattleListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_5933997 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_5933997 = 1;
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
    v9 = sub_223767C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantStatusBattleListViewManager_o *)sub_220024C(v6, System_Action_TypeInfo, v7, v8);
  ServantStatusBattleListViewManager__remove_callbackFunc2(v11, v12, v13);
}


System_Collections_Generic_List_ServantStatusBattleListViewObject__o *ServantStatusBattleListViewManager__get_ClippingObjectList(
        ServantStatusBattleListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  const MethodInfo *v12; // x1
  Il2CppObject *v13; // x21
  ListViewItem_o *Item; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  _BOOL8 v21; // x0
  __int64 v22; // x1
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_593399A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ServantStatusBattleListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ServantStatusBattleListViewObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593399A = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantStatusBattleListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantStatusBattleListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_21FFECC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  v28.fields._list = 0;
  *(_QWORD *)&v28.fields._index = &v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_21FFECC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusBattleListViewObject___);
      v13 = Component_object;
      if ( !Component_object )
        sub_21FFECC(0, v12);
      Item = (ListViewItem_o *)ServantStatusBattleListViewObject__GetItem(
                                 (ServantStatusBattleListViewObject_o *)Component_object,
                                 v12);
      if ( !Item )
        sub_21FFECC(0, 0);
      if ( Item->fields.isTermination )
      {
        v21 = ListViewManager__ClippingItem_50765052((ListViewManager_o *)this, Item, 0);
        if ( v21 )
        {
          if ( !v3
            || (items = v3->fields._items,
                v24 = Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__Add__,
                ++v3->fields._version,
                !items) )
          {
            sub_21FFECC(v21, v22);
          }
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v13,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3
          || (items = v3->fields._items,
              v24 = Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__Add__,
              ++v3->fields._version,
              !items) )
        {
          sub_21FFECC(Item, Item);
        }
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v26 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v13;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v13, v15, v16, v17, v18, v19, v20);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusBattleListViewObject__o *)v3;
}


System_Collections_Generic_List_ServantStatusBattleListViewObject__o *ServantStatusBattleListViewManager__get_ObjectList(
        ServantStatusBattleListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_5933999 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ServantStatusBattleListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ServantStatusBattleListViewObject__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933999 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantStatusBattleListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantStatusBattleListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_21FFECC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_21FFECC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ServantStatusBattleListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_21FFECC(Component_object, Component_object);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v18, v12, v13, v14, v15, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_ServantStatusBattleListViewObject__o *)v3;
}


void ServantStatusBattleListViewManager__remove_callbackFunc(
        ServantStatusBattleListViewManager_o *this,
        ServantStatusBattleListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusBattleListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_5933996 & 1) == 0 )
  {
    sub_21FFC50(&ServantStatusBattleListViewManager_CallbackFunc_TypeInfo);
    byte_5933996 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (ServantStatusBattleListViewManager_CallbackFunc_c *)v6->klass != ServantStatusBattleListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantStatusBattleListViewManager_o *)sub_220024C(
                                                  v6,
                                                  ServantStatusBattleListViewManager_CallbackFunc_TypeInfo,
                                                  v7,
                                                  v8);
  ServantStatusBattleListViewManager__add_callbackFunc2(v11, v12, v13);
}


void ServantStatusBattleListViewManager__remove_callbackFunc2(
        ServantStatusBattleListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  ServantStatusBattleListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_5933998 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_5933998 = 1;
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
    v9 = sub_223767C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ServantStatusBattleListViewManager_o *)sub_220024C(v6, System_Action_TypeInfo, v7, v8);
  ServantStatusBattleListViewManager__get_ObjectList(v11, v12);
}


void ServantStatusBattleListViewManager_CallbackFunc___ctor(
        ServantStatusBattleListViewManager_CallbackFunc_o *this,
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
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
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
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FF0180;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FF0138;
}


System_IAsyncResult_o *ServantStatusBattleListViewManager_CallbackFunc__BeginInvoke(
        ServantStatusBattleListViewManager_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = result;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_594C070, &v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void ServantStatusBattleListViewManager_CallbackFunc__EndInvoke(
        ServantStatusBattleListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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