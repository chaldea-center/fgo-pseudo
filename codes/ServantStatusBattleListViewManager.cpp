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
  Il2CppObject *current; // x21
  __int64 naturalAligment; // x9
  bool v10; // w1
  const MethodInfo *v11; // x1
  int32_t size; // w8
  System_Collections_Generic_List_object__o *v13; // x20
  int32_t v14; // w21
  const MethodInfo *v15; // x2
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4E001D7 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__get_Count__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__get_Item__);
    sub_1CE6700(&ServantStatusBattleListViewItem_TypeInfo);
    byte_4E001D7 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
  if ( !itemList )
    goto LABEL_18;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v16,
    itemList,
    (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v17 = v16;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v17,
           (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v6 & 1) == 0 )
      break;
    current = v17.fields._current;
    if ( !v17.fields._current )
      goto LABEL_17;
    naturalAligment = ServantStatusBattleListViewItem_TypeInfo->_2.naturalAligment;
    if ( v17.fields._current->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (ServantStatusBattleListViewItem_c *)v17.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusBattleListViewItem_TypeInfo )
    {
      v6 = sub_1CE6CF4(v17.fields._current);
LABEL_17:
      sub_1CE6958(v6, v7);
    }
    v10 = ServantStatusBattleListViewItem__get_LimitCountStage(
            (ServantStatusBattleListViewItem_o *)v17.fields._current,
            (const MethodInfo *)ServantStatusBattleListViewItem_TypeInfo) == limitCountStage;
    ListViewItem__set_IsSelect((ListViewItem_o *)current, v10, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  itemList = (System_Collections_Generic_List_object__o *)ServantStatusBattleListViewManager__get_ObjectList(this, v11);
  if ( !itemList )
LABEL_18:
    sub_1CE6958(itemList, *(_QWORD *)&limitCountStage);
  size = itemList->fields._size;
  v13 = itemList;
  if ( size >= 1 )
  {
    v14 = 0;
    this->fields.callbackCount = size;
    while ( 1 )
    {
      itemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                v13,
                                                                v14,
                                                                (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__get_Item__);
      if ( !itemList )
        break;
      ServantStatusBattleListViewObject__Init_35050968((ServantStatusBattleListViewObject_o *)itemList, 4, v15);
      if ( ++v14 >= v13->fields._size )
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
  void *DispLimitCountStageList; // x0
  __int64 v6; // x1
  int32_t DispLimitCountStage; // w26
  __int64 v8; // x19
  char *v9; // x20
  bool v10; // w8
  unsigned __int64 v11; // x21
  int32_t v12; // w23
  int v13; // w20
  int32_t v14; // w22
  int32_t LimitCount; // w0
  System_Collections_Generic_List_object__o *itemList; // x27
  int32_t size; // w25
  bool v18; // w29
  bool v19; // w19
  ServantStatusBattleListViewManager_o *v20; // x22
  bool v21; // w24
  ServantStatusListViewItem_o *v22; // x26
  bool IsMine; // w20
  ServantStatusBattleListViewItem_o *v24; // x28
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  Il2CppClass **v34; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v35; // x9
  struct UIScrollView_o *scrollView; // x8
  const MethodInfo *v37; // [xsp+8h] [xbp-98h]
  __int64 v38; // [xsp+10h] [xbp-90h]
  char *v39; // [xsp+18h] [xbp-88h]
  int32_t v40; // [xsp+24h] [xbp-7Ch]
  char *v41; // [xsp+28h] [xbp-78h]
  bool v42; // [xsp+30h] [xbp-70h]
  int32_t svtId; // [xsp+34h] [xbp-6Ch]
  bool isSealed; // [xsp+38h] [xbp-68h]
  int32_t limitCountStage; // [xsp+3Ch] [xbp-64h]

  if ( (byte_4E001D1 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1CE6700(&ServantStatusBattleListViewItem_TypeInfo);
    byte_4E001D1 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  this->fields.lateUpdateCenter = 0;
  if ( !mainInfo )
    goto LABEL_42;
  svtId = ServantStatusListViewItem__GetSvtId(mainInfo, 0, 0);
  DispLimitCountStage = ServantStatusListViewItem__GetDispLimitCountStage(mainInfo, 0, 0);
  DispLimitCountStageList = ServantStatusListViewItem__GetDispLimitCountStageList(mainInfo, 0);
  if ( !DispLimitCountStageList )
    goto LABEL_42;
  v8 = *((_QWORD *)DispLimitCountStageList + 3);
  v9 = (char *)DispLimitCountStageList;
  DispLimitCountStageList = (void *)ServantStatusListViewItem__get_IsConvertOverwriteImage(mainInfo, 0);
  if ( ((unsigned __int8)DispLimitCountStageList & 1) != 0 )
  {
    v42 = 0;
  }
  else
  {
    if ( mainInfo->fields.userSvtEntity )
      v10 = 1;
    else
      v10 = mainInfo->fields.userSvtCollectionEntity != 0;
    v42 = v10;
  }
  if ( (int)v8 >= 1 )
  {
    v11 = 0;
    v12 = 0;
    v38 = (unsigned int)v8;
    v39 = v9;
    v41 = v9 + 32;
    v40 = DispLimitCountStage;
    while ( 1 )
    {
      if ( v11 >= *((unsigned int *)v9 + 6) )
        sub_1CE6960(DispLimitCountStageList);
      v13 = *(_DWORD *)&v41[4 * v11];
      if ( !byte_4DFF89E )
      {
        sub_1CE6700(&System_Math_TypeInfo);
        byte_4DFF89E = 1;
      }
      DispLimitCountStageList = System_Math_TypeInfo;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      if ( v13 >= 0 )
        v14 = v13;
      else
        v14 = -v13;
      limitCountStage = v14;
      if ( v13 < 1 )
      {
        isSealed = 0;
      }
      else
      {
        LimitCount = ServantStatusListViewItem__get_LimitCount(mainInfo, 0);
        DispLimitCountStageList = (void *)LimitCountUtility__IsSealed(svtId, LimitCount, v14, 0, 0);
        isSealed = (unsigned __int8)DispLimitCountStageList & 1;
      }
      itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
      if ( DispLimitCountStage == v13 )
        v12 = v11;
      if ( !itemList )
        goto LABEL_42;
      size = itemList->fields._size;
      v18 = v42 && v13 > 0;
      v19 = DispLimitCountStage == v13;
      v20 = this;
      v21 = v13 > 0;
      v22 = mainInfo;
      IsMine = ServantStatusListViewItem__get_IsMine(mainInfo, 0);
      v24 = (ServantStatusBattleListViewItem_o *)sub_1CE694C(ServantStatusBattleListViewItem_TypeInfo);
      ServantStatusBattleListViewItem___ctor(v24, size, svtId, limitCountStage, v18, v21, v19, IsMine, isSealed, v37);
      items = itemList->fields._items;
      v32 = Method_System_Collections_Generic_List_ListViewItem__Add__;
      ++itemList->fields._version;
      if ( !items )
        goto LABEL_42;
      v33 = itemList->fields._size;
      if ( (unsigned int)v33 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          itemList,
          (Il2CppObject *)v24,
          *(const MethodInfo_3905F68 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v34 = &items->obj.klass + v33;
        itemList->fields._size = v33 + 1;
        v34[4] = (Il2CppClass *)v24;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v34 + 4), (int32_t)v24, v25, v26, v27, v28, v29, v30);
      }
      v9 = v39;
      mainInfo = v22;
      DispLimitCountStage = v40;
      ++v11;
      this = v20;
      if ( v38 == v11 )
        goto LABEL_34;
    }
  }
  v12 = 0;
LABEL_34:
  v35 = this->fields.itemList;
  if ( !v35 || (scrollView = this->fields.scrollView) == 0 )
LABEL_42:
    sub_1CE6958(DispLimitCountStageList, v6);
  if ( v35->fields._size <= 5 )
  {
    scrollView->fields.contentPivot = 4;
    this->fields.lateUpdateCenter = 1;
  }
  else
  {
    scrollView->fields.contentPivot = 1;
  }
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 1, -1, 0);
  if ( v12 >= 5 )
    ListViewManager__MoveBottomItem((ListViewManager_o *)this, v12, 0, 0);
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
      sub_1CE6958(scrollView, method);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  ServantStatusBattleListViewManager_o *v9; // x20
  struct ListViewItem_o *linkItem; // x8
  __int64 naturalAligment; // x11
  struct ServantStatusBattleListViewManager_CallbackFunc_o *callbackFunc; // x21
  unsigned int Index; // w0

  v9 = this;
  if ( (byte_4E001D6 & 1) == 0 )
  {
    this = (ServantStatusBattleListViewManager_o *)sub_1CE6700(&ServantStatusBattleListViewItem_TypeInfo);
    byte_4E001D6 = 1;
  }
  if ( !selectObj
    || (linkItem = selectObj->fields.linkItem) == 0
    || (naturalAligment = ServantStatusBattleListViewItem_TypeInfo->_2.naturalAligment,
        linkItem->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ServantStatusBattleListViewItem_c *)linkItem->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusBattleListViewItem_TypeInfo )
  {
    sub_1CE6958(this, selectObj);
  }
  if ( BYTE1(linkItem[1].fields.selectNum) && LOBYTE(linkItem[1].fields.selectNum) )
  {
    callbackFunc = v9->fields.callbackFunc;
    v9->fields.callbackFunc = 0;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v9->fields.callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct UIScrollView_o *v14; // x0
  struct System_Action_o *callbackFunc2; // x20

  if ( (byte_4E001D5 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E001D5 = 1;
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
        v14 = this->fields.scrollView;
        if ( !v14 )
          sub_1CE6958(0, v7);
        ((void (__fastcall *)(struct UIScrollView_o *, __int64, const MethodInfo *))v14->klass->vtable._8_UpdateScrollbars.methodPtr)(
          v14,
          1,
          v14->klass->vtable._8_UpdateScrollbars.method);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc2, 0, v8, v9, v10, v11, v12, v13);
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
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4E001D4 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__get_Current__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__GetEnumerator__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__get_Count__);
    sub_1CE6700(&Method_ServantStatusBattleListViewManager_OnMoveEnd__);
    sub_1CE6700(&StringLiteral_10019/*"OnMoveEnd"*/);
    byte_4E001D4 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  ObjectList = (System_Collections_Generic_List_object__o *)ServantStatusBattleListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_1CE6958(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10019/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      ObjectList,
      (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__MoveNext__) )
    {
      current = v13.fields._current;
      v9 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_ServantStatusBattleListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_1CE6958(v10, v11);
      ServantStatusBattleListViewObject__Init_35052140((ServantStatusBattleListViewObject_o *)current, mode, v9, v12);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_ServantStatusBattleListViewObject__Dispose__);
  }
}


void ServantStatusBattleListViewManager__SetMode(
        ServantStatusBattleListViewManager_o *this,
        int32_t mode,
        ServantStatusBattleListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  this->fields.callbackFunc = callback;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  ServantStatusBattleListViewManager__SetMode_35051092(this, mode, v10, v11);
}


void ServantStatusBattleListViewManager__SetMode_35051092(
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

  if ( (byte_4E001D3 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__get_Count__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__get_Item__);
    sub_1CE6700(&Method_ServantStatusBattleListViewManager_OnMoveEnd__);
    sub_1CE6700(&StringLiteral_10019/*"OnMoveEnd"*/);
    byte_4E001D3 = 1;
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
      this->fields.callbackCount = size;
      v12 = 0;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 v11,
                 v12,
                 (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__get_Item__);
        v14 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
        System_Action___ctor(v14, (Il2CppObject *)this, Method_ServantStatusBattleListViewManager_OnMoveEnd__, 0);
        if ( !Item )
          break;
        ServantStatusBattleListViewObject__Init_35052056((ServantStatusBattleListViewObject_o *)Item, 4, v14, 0.1, v15);
        if ( ++v12 >= v11->fields._size )
          return;
      }
LABEL_13:
      sub_1CE6958(ClippingObjectList, v9);
    }
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10019/*"OnMoveEnd"*/,
      0.2,
      0);
  }
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
  if ( (byte_4E001D2 & 1) == 0 )
  {
    this = (ServantStatusBattleListViewManager_o *)sub_1CE6700(&ServantStatusBattleListViewObject_TypeInfo);
    byte_4E001D2 = 1;
  }
  if ( !obj
    || (naturalAligment = ServantStatusBattleListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (ServantStatusBattleListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != ServantStatusBattleListViewObject_TypeInfo )
  {
    sub_1CE6958(this, obj);
  }
  if ( v5->fields.initMode == 1 )
    v7 = 3;
  else
    v7 = 2;
  ServantStatusBattleListViewObject__Init_35050968(
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

  if ( (byte_4E001CB & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusBattleListViewManager_CallbackFunc_TypeInfo);
    byte_4E001CB = 1;
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
    v8 = sub_1D424D4(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusBattleListViewManager_o *)sub_1CE6CF4(v7);
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

  if ( (byte_4E001CD & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    byte_4E001CD = 1;
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
    v8 = sub_1D424D4(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusBattleListViewManager_o *)sub_1CE6CF4(v7);
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  _BOOL8 v20; // x0
  __int64 v21; // x1
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4E001D0 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_ServantStatusBattleListViewObject___);
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_ServantStatusBattleListViewObject__TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E001D0 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v3 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_ServantStatusBattleListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_ServantStatusBattleListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1CE6958(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v28 = v27;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v28.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1CE6958(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusBattleListViewObject___);
      v11 = Component_object;
      if ( !Component_object )
        sub_1CE6958(0, v10);
      Item = (ListViewItem_o *)ServantStatusBattleListViewObject__GetItem(
                                 (ServantStatusBattleListViewObject_o *)Component_object,
                                 v10);
      if ( !Item )
        sub_1CE6958(0, v13);
      if ( Item->fields.isTermination )
      {
        v20 = ListViewManager__ClippingItem_44937408((ListViewManager_o *)this, Item, 0);
        if ( v20 )
        {
          if ( !v3 )
            sub_1CE6958(v20, v21);
          items = v3->fields._items;
          v23 = Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__Add__;
          ++v3->fields._version;
          if ( !items )
            sub_1CE6958(v20, v21);
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v11,
            *(const MethodInfo_3905F68 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3 )
          sub_1CE6958(Item, v13);
        items = v3->fields._items;
        v23 = Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1CE6958(Item, v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v25 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v11;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)v11, v14, v15, v16, v17, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  Il2CppObject *v16; // x1
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4E001CF & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_ServantStatusBattleListViewObject___);
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1CE6700(&Method_System_Collections_Generic_List_ServantStatusBattleListViewObject___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_ServantStatusBattleListViewObject__TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E001CF = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v3 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_ServantStatusBattleListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_ServantStatusBattleListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_1CE6958(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v7 )
    {
      if ( !current )
        sub_1CE6958(v7, v8);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_ServantStatusBattleListViewObject___);
      v16 = Component_object;
      if ( !v3 )
        sub_1CE6958(Component_object, Component_object);
      items = v3->fields._items;
      v18 = Method_System_Collections_Generic_List_ServantStatusBattleListViewObject__Add__;
      ++v3->fields._version;
      if ( !items )
        sub_1CE6958(Component_object, Component_object);
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_3905F68 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v20[4] = (Il2CppClass *)v16;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v20 + 4), (int32_t)v16, v10, v11, v12, v13, v14, v15);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
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

  if ( (byte_4E001CC & 1) == 0 )
  {
    sub_1CE6700(&ServantStatusBattleListViewManager_CallbackFunc_TypeInfo);
    byte_4E001CC = 1;
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
    v8 = sub_1D424D4(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusBattleListViewManager_o *)sub_1CE6CF4(v7);
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

  if ( (byte_4E001CE & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    byte_4E001CE = 1;
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
    v8 = sub_1D424D4(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (ServantStatusBattleListViewManager_o *)sub_1CE6CF4(v7);
  ServantStatusBattleListViewManager__get_ObjectList(v10, v11);
}


void ServantStatusBattleListViewManager_CallbackFunc___ctor(
        ServantStatusBattleListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1CE67C0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1CE6974(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1CE6828(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1B115D4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1B1158C;
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
  if ( (byte_4E001D8 & 1) == 0 )
  {
    sub_1CE6700(&int_TypeInfo);
    byte_4E001D8 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1CE66B4(this, v9, callback, object);
}


void ServantStatusBattleListViewManager_CallbackFunc__EndInvoke(
        ServantStatusBattleListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1CE66B8(result, 0, method);
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